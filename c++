#include "Set.h"

ostream& operator<<(ostream& os, const Set& s) {
	s.display(os);
	return os;
}

istream& operator>>(istream& is, Set& s) {
	s.read(is);
	return is;
}



//ниже Set.h


#pragma once
#include <iostream>
#include <vector>        
#include <algorithm>   

using namespace std;
class Set {
private:
    vector<int> elements; 
    //emty?
    bool contains(int element) const {
        return find(elements.begin(), elements.end(), element) != elements.end();
    }

    // sort
    void removeDuplicates() {
        sort(elements.begin(), elements.end()); 
        elements.erase(unique(elements.begin(), elements.end()), elements.end());
    }

public:
    Set() {}

    Set(initializer_list<int> list) : elements(list) {
        removeDuplicates(); 
    }   
    size_t size() const {
        return elements.size();
    }

    // +
    Set operator+(int element) const {
        Set newSet = *this; //copy
        if (!newSet.contains(element)) { 
            newSet.elements.push_back(element); 
            newSet.removeDuplicates(); 
        }
        return newSet; 
    }

    // +=
    Set& operator+=(int element) {
        if (!contains(element)) { 
            elements.push_back(element); 
            removeDuplicates(); 
        }
        return *this; 
    }

    //  - 
    Set operator-(int element) const {
        Set newSet = *this; 

        auto it = find(newSet.elements.begin(), newSet.elements.end(), element); 
        if (it != newSet.elements.end()) { 
            newSet.elements.erase(it); 
        }
        return newSet; 
    }

    //  -= 
    Set& operator-=(int element) {
        auto it = find(elements.begin(), elements.end(), element); 
        if (it != elements.end()) { 
            elements.erase(it); 
        }
        return *this; 
    }

    //  + for 2 arr
    Set operator+(const Set& other) const {
        Set newSet = *this; 
        for (int element : other.elements) { 
            if (!newSet.contains(element)) { 
                newSet.elements.push_back(element); 
            }
        }
        newSet.removeDuplicates(); 
        return newSet; 
    }

    // += for 2 arr
    Set& operator+=(const Set& other) {
        for (int element : other.elements) { 
            if (!contains(element)) { 
                elements.push_back(element);
            }
        }
        removeDuplicates(); 
        return *this; 
    }

    //  - for 2 arr
    Set operator-(const Set& other) const {
        Set newSet = *this;
        for (int element : other.elements) {
            auto it = find(newSet.elements.begin(), newSet.elements.end(), element);
            if (it != newSet.elements.end()) {
                newSet.elements.erase(it);
            }
        }
        return newSet;
    }

    // -= for 2 arr
    Set& operator-=(const Set& other) {
        for (int element : other.elements) { 
            auto it = find(elements.begin(), elements.end(), element); 
            if (it != elements.end()) {
                elements.erase(it); 
            }
        }
        return *this; 
    }

    //  *= for 2 arr
    Set& operator*=(const Set& other) {
        Set intersection;
        for (int element : elements) {
            if (other.contains(element)) {
                intersection.elements.push_back(element);
            }
        }
        elements = intersection.elements;
        removeDuplicates();
        return *this;
    }

    // = 
    Set& operator=(const Set& other) {
        elements = other.elements;
        return *this;
    }

    // ==
    bool operator==(const Set& other) const {
        if (size() != other.size()) {
            return false;
        }
        for (int element : elements) {
            if (!other.contains(element)) {
                return false;
            }
        }
        return true;
    }

    // vvivod
    void display(ostream& os) const {
        os << "{";
        bool first = true;
        for (int element : elements) {
            if (!first) {
                os << ", ";
            }
            os << element;
            first = false;
        }
        os << "}";
    }

    //chtenie
    void read(istream& is) {
        elements.clear(); // ochishaem tekyshee mnozhestvo
        int element;
        char ch;
        is >> ch;
        if (ch != '{') {
            is.setstate(ios::failbit); // vvivod oshibki, tak prosto krasivee
            return;
        }

        while (is >> element) {
            elements.push_back(element);
            is >> ch;
            if (ch == '}') {
                break;
            }
            else if (ch != ',') {
                is.setstate(ios::failbit);
                elements.clear();
                return;
            }
        }
        removeDuplicates();
    }
};


ostream& operator<<(ostream& os, const Set& s);
istream& operator>>(istream& is, Set& s);
