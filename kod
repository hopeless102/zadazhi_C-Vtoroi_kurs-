#include <iostream>
#include <cmath>

using namespace std;
bool not_zero(double a, double b, double c) {
    if (a <= 0 or b <= 0 or c <= 0) {
        cout << "сторонa нe может бать равна нулю" << endl;
        return true;
    }

    if (a + b <= c or a + c <= b or b + c <= a) {
        cout << "треугольник не существует" << endl;
        return true;
    }
}

int proverka(double a, double b, double c, double d) {
    if (not_zero(a, b, c) == true) {
        return 0;
    }
    if (a > b)
    {
        swap(a, b);
    }
    if (b > c)
    {
        swap(b, c);
    }
    if (a > b)
    {
        swap(a, b);
    }

    if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
        cout << "Треугольник прямоугольный" << endl;
        return 0;
    }
    if (a == b && b == c) {
        cout << "Треугольник равносторонний" << endl;
        return 0;
    }

    if (a == b and d < 90 or b == c and d < 90 or a == c and d < 90) {
        cout << "Треугольник равнобедренный" << endl;
        return 0;
    }

    if (d < 90) {
        cout << "Треугольник остроугольный" << endl;
        return 0;
    }

    if (d > 90) {
        cout << "Треугольник тупоугольный" << endl;
        return 0;
    }

    cout << "Треугольник прямоугольный" << endl;
}

int main() {
    setlocale(LC_ALL, "Ru");
    double a, b, c, gradus;
    cout << "Введите сторону треугольника a: ";
    cin >> a;
    cout << "Введите сторону треугольника b: ";
    cin >> b;
    cout << "Введите сторону треугольника c: ";
    cin >> c;
    cout << "Введите градус стороны треугольника: ";
    cin >> gradus;

    proverka(a, b, c, gradus);




    return 0;
}
