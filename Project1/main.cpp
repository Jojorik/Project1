#include <iostream>
#include <cstdlib> // для system
#include "MathematicsOperation.h";

using namespace std;


//Основной метод запуска программы
int main()
{
    MathematicsOperation calculator;

    calculator.inizilizeOperand();
    calculator.calculate();
 
    return 0;
}
    


