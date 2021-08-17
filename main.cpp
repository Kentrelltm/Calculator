#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2 ;
    char operations;
    cout << "===============================================================================\n";
    cout << "\t\t\t\tWelcome to the Calculator\n\n" << endl;
    cout << "===============================================================================\n";
    cout << "\t\t\tPlease enter the first number below: \n\n"; cin >> num1;
    cout << "\t\tPlease enter the second number:  \n\n";cin >> num2;
    cout << "\t\t1. Addition\n\t\t2. Subtraction\n\t\t3. Multiply\n\t\t4. Divide\n\n";
    cin >> operations;
    switch (operations){
        case '+':
            cout << (num1 + num2) << endl;
            break;
        case '-':
            cout << (num1 - num2) << endl;
            break;
        case '*':
            cout << (num1 * num2) << endl;
            break;
        case '/':
            cout << (num1 / num2) << endl;
            break;
    }


}