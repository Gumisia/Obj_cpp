//
// Created by admin on 02/12/2018.
//

#include <cmath>
#include "pch.h"
#include "Square.h"

Square::Square()
{
    length = 1;
}

Square::Square(int length)
{
    this->length = length;
    // (*this).length=length;
}

//Square::~Square()
//{
//
//}
//
//void Square::print() {
//    std::cout << x << std::endl;
//}

double Square::diagonal()
{
    return length * std::sqrt(2);
}