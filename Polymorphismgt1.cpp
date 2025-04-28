#include <iostream>
using namespace std;

class Calculator {
private:
    int x, y, z;

public:
    int add(int x, int y) {
        return x + y;
    }

    int add(int x, int y, int z) {
        return x + y + z;
    }

    float add(float x, float y) {
        return x + y;
    }

    int subtract(int x, int y) {
        return x - y;
    }

    int multiply(int x, int y) {
        return x * y;
    }

    float divide(float x, float y) {
        if (y == 0) {
            cout << "Error: Division by zero is not allowed!" << endl;
            return 0;
        }
        return x / y;
    }
};

int main() {
    Calculator calc;
    int option;

    cout << "=== Simple Calculator Menu ===" << endl;
    cout << "1. Add two integers" << endl;
    cout << "2. Add three integers" << endl;
    cout << "3. Add two floats" << endl;
    cout << "4. Subtract two integers" << endl;
    cout << "5. Multiply two integers" << endl;
    cout << "6. Divide two floats" << endl;
    cout << "Please select an option (1-6): ";
    cin >> option;

    if (option == 1) {
        int a, b;
        cout << "Input two integers: ";
        cin >> a >> b;
        cout << "Sum: " << calc.add(a, b) << endl;
    }
    else if (option == 2) {
        int a, b, c;
        cout << "Input three integers: ";
        cin >> a >> b >> c;
        cout << "Sum: " << calc.add(a, b, c) << endl;
    }
    else if (option == 3) {
        float a, b;
        cout << "Input two floating-point numbers: ";
        cin >> a >> b;
        cout << "Sum: " << calc.add(a, b) << endl;
    }
    else if (option == 4) {
        int a, b;
        cout << "Input two integers: ";
        cin >> a >> b;
        cout << "Difference: " << calc.subtract(a, b) << endl;
    }
    else if (option == 5) {
        int a, b;
        cout << "Input two integers: ";
        cin >> a >> b;
        cout << "Product: " << calc.multiply(a, b) << endl;
    }
    else if (option == 6) {
        float a, b;
        cout << "Input two floating-point numbers: ";
        cin >> a >> b;
        cout << "Quotient: " << calc.divide(a, b) << endl;
    }
    else {
        cout << "Invalid option! Please select between 1 and 6." << endl;
    }

    return 0;
}
