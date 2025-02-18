#include <iostream>
using namespace std;
#include <cmath>

//Variables

double firstNumberInput;
double secondNumberInput;
char operatorInput;

void Calculate()
{
    cout << "First Number: ";
    cin >> firstNumberInput;
    cout << "Second Number: ";
    cin >> secondNumberInput;
    cout << "Operator (+, -, X, /, ^): ";
    cin >> operatorInput;

    if (operatorInput == '+')
    {
        cout << "Your Answer Is: ";
        cout << firstNumberInput + secondNumberInput;
        cout << "\n";
        Calculate();
    }
    else if (operatorInput == '-')
    {
        cout << "Your Answer Is: ";
        cout << firstNumberInput - secondNumberInput;
        cout << "\n";
        Calculate();
    }
    else if (operatorInput == 'X')
    {
        cout << "Your Answer Is:";
        cout << firstNumberInput * secondNumberInput;
        cout << "\n";
        Calculate();
    }
    else if (operatorInput == '/')
    {
        cout << "Your Answer Is: ";
        cout << firstNumberInput / secondNumberInput;
        cout << "\n";
        Calculate();
    }
    else if (operatorInput == '^')
    {
        cout << "Your Answer Is: ";
        double result = pow(firstNumberInput, secondNumberInput);

        if(result >= 10000000 || result <= 0.0001)
        {
            cout << scientific;
            cout << result;
        }
        else
        {
            cout << result;
        }
        cout << "\n";
        Calculate();
    }
    else
    {
        cout << "Invalid Operator, please use +, -, X, /, ^! \n";
        Calculate();
    }
}

int main()
{
    cout << "CALCULATOR v1.0!\n";
    Calculate();
}