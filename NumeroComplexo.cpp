#include <iostream>
#include "Complexo.h"


Complex::Complex(data x, data y){
    a = x;
    b = y;
}
Complex::Complex(data x){
    a = x;
    b = 0;
}
Complex::Complex(){
    a = 0;
    b = 0;
}
Complex Complex::sum(const Complex &x){
    a += x.a;
    b += x.b;
    return *this;
}
Complex Complex::sub(const Complex &x){
    a -= x.a;
    b -= x.b;
    return *this;
}
Complex Complex::mul(const Complex &x){
    a = (a*x.a - b*x.b);
    b = (a*x.b + b*x.a);
    return *this;
}
Complex Complex::div(const Complex &x){
    a = (a*x.a + b*x.b)/(x.a*x.a + x.b*x.b);
    b = (b*x.a + a*x.b)/(x.a*x.a + x.b*x.b);
    return *this;
}
int main()
{
    Complex a(1,2),b(2,3),c;
    c = a*b;
    c.Show();
}

