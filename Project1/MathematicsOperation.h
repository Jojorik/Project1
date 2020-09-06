#pragma once
#include <iostream>

/*!
* 
* A class that implements the simplest mathematical operations(Calculator)
  @author: Ponomarev G.I.

*/

class MathematicsOperation
{
    int firstNumber;
    int secondNumber;
    int resultCalculate;
    char sign;

public:

    //Method for initializing variables
    void inizilizeOperand() {

        std::cout << "Enter first number: ";
        std::cin >> firstNumber;
        std::cout << "Enter second number: ";
        std::cin >> secondNumber;
        std::cout << "Enter sign: ";
        std::cin >> sign;


    }
    //A method that implements mathematical operations on variables
    int  calculate() {

        switch (sign)
        {
        case '+':
            resultCalculate = firstNumber + secondNumber;
            break;
        case '-':
            resultCalculate = firstNumber - secondNumber;
            break;
        case '*':
            resultCalculate = firstNumber * secondNumber;
            break;
        case '/':
            resultCalculate = firstNumber / secondNumber;
            break;
            return resultCalculate;

        }
        
        std::cout << resultCalculate ;
        
    }

};

