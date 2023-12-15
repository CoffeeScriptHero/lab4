#include <iostream>
#include "calculator.h"

int main()
{
    Calculator calc;
    std::cout << "Add 3 and 2: " << calc.Add(3, 2) << std::endl;
    std::cout << "Subtract 3 from 2: " << calc.Sub(2, 3) << std::endl;
    std::cout << "Multiply 3 and 2: " << calc.Mul(3, 2) << std::endl;
    std::cout << "Division by zero is invalid!!!: " << calc.Div(2, 0) << std::endl;
    return 0;
}

