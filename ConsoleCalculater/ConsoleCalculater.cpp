#include <iostream>
#include <cmath>

using namespace std;

void Calculate()
{
    double firstNumberInput, secondNumberInput;
    char operatorInput;

    while (true) // Use a loop instead of recursion for better memory management
    {
        cout << "First Number: ";
        if (!(cin >> firstNumberInput)) // Input validation
        {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Second Number: ";
        if (!(cin >> secondNumberInput))
        {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Operator (+, -, *, /, ^): ";
        cin >> operatorInput;

        double result;
        switch (operatorInput)
        {
        case '+':
            result = firstNumberInput + secondNumberInput;
            break;
        case '-':
            result = firstNumberInput - secondNumberInput;
            break;
        case '*': // Changed 'X' to '*' for consistency with standard operators
            result = firstNumberInput * secondNumberInput;
            break;
        case '/':
            if (secondNumberInput == 0)
            {
                cout << "Error: Division by zero is not allowed.\n";
                continue;
            }
            result = firstNumberInput / secondNumberInput;
            break;
        case '^':
            result = pow(firstNumberInput, secondNumberInput);
            break;
        default:
            cout << "Invalid operator! Please use +, -, *, /, or ^.\n";
            continue;
        }

        cout << "Your Answer Is: ";
        if (result >= 1e7 || result <= 1e-4)
            cout << scientific << result << endl;
        else
            cout << result << endl;

        char choice;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y')
            break;
    }
}

int main()
{
    cout << "CALCULATOR v2.0!\n";
    Calculate();
    return 0; // Proper program termination
}
