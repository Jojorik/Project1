#include <iostream>
#include <cstdlib> // system
#include "MathematicsOperation.h";

using namespace std;


//The main method of launching the program
int main()
{
    MathematicsOperation calculator;

    calculator.inizilizeOperand();
    calculator.calculate();
 
    return 0;
}
    


