#pragma once
#include <iostream>

/*!
* 
* �����, ����������� ���������� �������������� ��������(�����������)
  @author: Ponomarev G.I.

*/

class MathematicsOperation
{
    int firstNumber;
    int secondNumber;
    int resultCalculate;
    char sign;

public:

    //����� ������������ ����������
    void inizilizeOperand() {

        std::cout << "Enter first number: ";
        std::cin >> firstNumber;
        std::cout << "Enter second number: ";
        std::cin >> secondNumber;
        std::cout << "Enter sign: ";
        std::cin >> sign;


    }
    //�����, ����������� �������������� �������� ��� �����������
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

