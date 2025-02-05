
#include "function.h"
#include <random>
#include <limits>

using namespace std; 

void FillArrayInt(vector<int>& arr, int size) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(-100, 100); 

    arr.resize(size);
    for (int i = 0; i < size; ++i) {
        arr[i] = distrib(gen);
    }
}

void ShowArrayInt(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int MinElementInt(const vector<int>& arr) {
    if (arr.empty()) { return numeric_limits<int>::max(); } 
    int minVal = arr[0];
    for (int val : arr) {
        if (val < minVal) {
            minVal = val;
        }
    }
    return minVal;
}

int MaxElementInt(const vector<int>& arr) {
    if (arr.empty()) { return numeric_limits<int>::min(); } 
    int maxVal = arr[0];
    for (int val : arr) {
        if (val > maxVal) {
            maxVal = val;
        }
    }
    return maxVal;
}

void SortArrayInt(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

void EditArrayInt(vector<int>& arr, int index, int value) {
    if (index >= 0 && index < arr.size()) {
        arr[index] = value;
    }
}




void FillArrayChar(vector<char>& arr, int size) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib('a', 'z');

    arr.resize(size);
    for (int i = 0; i < size; ++i) {
        arr[i] = static_cast<char>(distrib(gen));
    }
}

void ShowArrayChar(const vector<char>& arr) {
    for (char val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

char MinElementChar(const vector<char>& arr) {
    if (arr.empty()) { return numeric_limits<char>::max(); }
    char minVal = arr[0];
    for (char val : arr) {
        if (val < minVal) {
            minVal = val;
        }
    }
    return minVal;
}

char MaxElementChar(const vector<char>& arr) {
    if (arr.empty()) { return numeric_limits<char>::min(); }
    char maxVal = arr[0];
    for (char val : arr) {
        if (val > maxVal) {
            maxVal = val;
        }
    }
    return maxVal;
}

void SortArrayChar(vector<char>& arr) {
    sort(arr.begin(), arr.end());
}

void EditArrayChar(vector<char>& arr, int index, char value) {
    if (index >= 0 && index < arr.size()) {
        arr[index] = value;
    }
}


void FillArrayDouble(vector<double>& arr, int size) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distrib(-100.0, 100.0);

    arr.resize(size);
    for (int i = 0; i < size; ++i) {
        arr[i] = distrib(gen);
    }
}

void ShowArrayDouble(const vector<double>& arr) {
    for (double val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

double MinElementDouble(const vector<double>& arr) {
    if (arr.empty()) { return numeric_limits<double>::max(); }
    double minVal = arr[0];
    for (double val : arr) {
        if (val < minVal) {
            minVal = val;
        }
    }
    return minVal;
}

double MaxElementDouble(const vector<double>& arr) {
    if (arr.empty()) { return numeric_limits<double>::min(); }
    double maxVal = arr[0];
    for (double val : arr) {
        if (val > maxVal) {
            maxVal = val;
        }
    }
    return maxVal;
}

void SortArrayDouble(vector<double>& arr) {
    sort(arr.begin(), arr.end());
}

void EditArrayDouble(vector<double>& arr, int index, double value) {
    if (index >= 0 && index < arr.size()) {
        arr[index] = value;
    }
}
