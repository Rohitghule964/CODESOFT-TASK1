#include<iostream>
using namespace std;


double addition(double a, double b) {
    return a + b;
}


double Subtraction(double a, double b) {
    return a - b;
}


double Multiplication(double a, double b) {
    return a * b;
}


double Division(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}


void displayMenu() {
    cout << "\nSimple Calculator\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    double x, y, result;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting... Thank you!\n";
            break;
        }

        cout << "Enter two numbers: ";
        cin >> x >> y;

        switch (choice) {
            case 1:
                result = addition(x, y);
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = Subtraction(x, y);
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = Multiplication(x, y);
                cout << "Result: " << result << endl;
                break;
            case 4:
                result = Division(x, y);
                if (y != 0) 
                    cout << "Result: " << result << endl;
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
