#include "equilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {};
EquilateralTriangle::EquilateralTriangle(int a, int b, int c, 
            int A, int B, int C) : Triangle(a, b, c, A, B, C){
                if((this->C!=this->A) && (this->B!=this->A)) ;
                if(this->a!=60 && this->b!=60 && this->c!=60) ;
        };
void EquilateralTriangle::getSide()
{
    std::cout << "Равносторонний треугольник:" << std::endl;
    std::cout << "Стороны: a=" << this->a << " b=" << this->b << " c=" << this->c << std::endl;
    std::cout << "Углы: A=" << this->A << " B=" << this->B << " C=" << this->C << std::endl;
};