#pragma once
#include <iostream>


using namespace std;

class Fraction {
private:
    int numerator;   
    int denominator; 

    
    int gcd(int a, int b) const {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    void reduce() {
        int common = gcd(numerator, denominator);
        numerator /= common;
        denominator /= common;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }
public: 
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            throw invalid_argument("Çíàìåíàòåëü íå ìîæåò áûòü ðàâåí 0.");
        }
        reduce(); 
    }
    Fraction() : Fraction(0, 1) {} 
    void display() const {
        cout << numerator << "/" << denominator;
    }
    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom); 
    }

    Fraction operator-(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }
    
    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

 
    Fraction operator+(int integer) const {
        return *this + Fraction(integer, 1); 
    }

    Fraction operator-(int integer) const {
        return *this - Fraction(integer, 1);
    }

    Fraction operator*(int integer) const {
        return *this * Fraction(integer, 1);
    }
};
