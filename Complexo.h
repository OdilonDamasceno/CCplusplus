#ifndef _COMPLEXO_H
#define _COMPLEXO_H
typedef float data;
class Complex
{
private:
    data a,b;
public:
    Complex(data x, data y);
    Complex(data x);
    Complex();
    Complex sum(const Complex &x);
    Complex sub(const Complex &x);
    Complex mul(const Complex &x);
    Complex div(const Complex &x);
    inline
    void Show(){
        std::cout<< a << " + " << b << "*i"<< std::endl;
    }
    inline
    Complex operator+(const Complex &x){
        return sum(x);
    }
    inline
    Complex operator-(const Complex &x){
        return sub(x);
    }
    inline
    Complex operator*(const Complex &x){
        return mul(x);
    }
    inline
    Complex operator/(const Complex &x){
        return div(x);
    }

    
};



#endif
