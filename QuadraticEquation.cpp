// a c++ program to calculate the roots of a quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

// function to calculate discriminant
double calculate_discriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

// function to calculate roots
void calculate_roots(double a, double b, double c, double &x1, double &x2) {
    double discriminant = calculate_discriminant(a, b, c);

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0) {
        x1 = x2 = -b / (2 * a);
    }
    else {
        cout << "the roots are complex" << endl;
    }
}

int main() {
    double a, b, c, x1, x2, discriminant;

    cout << "enter the coefficient of x^(2)" << endl;
    cin >> a;

    cout << "enter the coefficient of x" << endl;
    cin >> b;

    cout << "enter the term without x" << endl;
    cin >> c;

    calculate_roots(a, b, c, x1, x2);

    if (x1 == x2) {
        cout << "equal roots: " << x1 << endl;
    }
    else {
        cout << "roots: " << x1 << " and " << x2 << endl;
    }

    return 0;
}
