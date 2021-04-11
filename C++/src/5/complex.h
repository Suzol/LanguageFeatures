#ifndef __COMPLEX__
#define __COMPLEX__
/* 前置声明 */
class complex;

complex&
    __doapl (complex* ths, const complex& r);

class complex 
{
public:
    complex (double r = 0, double i = 0)
        : re(r), im(i)
    {}
    complex& operator += (const complex&);
    double real () const { return re; }
    double imag () const { return im; }

    int func(const complex& param)
    { return param.re + param.im; }
private:
    double re, im;
    friend complex& __doapl (complex*, const complex&);
};


inline complex&
__doapl (complex* ths, const complex& r)
{
    /* 自由取得friend的private成员，打破了封装 */
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}

inline complex&
complex::operator += (const complex& r)
{
    return __doapl(this, r);
}


inline double
imag(const complex& x)
{
    return x.imag();
}

inline double
real(const complex& x)
{
    return x.real();
}

inline complex
operator + (const complex& x, const complex& y)
{
    return complex(real(x) + real(y),
                   imag(x) + imag(y));
}

inline complex
operator + (const complex& x, double y)
{
    return complex(real(x) + y,
                   imag(x) );
}

inline complex
operator + (double x, const complex& y)
{
    return complex(x + real(y),
                   imag(y) );
}

inline complex 
operator + (const complex& x)
{
    return x;
}

inline complex
operator - (const complex& x)
{
    return complex(
        -real(x), -imag(x)
    );
}

inline bool 
operator == (const complex& x, const complex& y)
{
    return real(x) == real(y)
        && imag(x) == imag(y);
}

inline bool 
operator == (const complex&x, double y)
{
    return real(x) == y && imag(x) == 0;
}

inline bool 
operator == (double x, const complex&y)
{
    return real(y) == x && imag(y) == 0; 
}

inline complex
conj (const complex& x)
{
    return complex(real(x), -imag(x));
}

#include <iostream>
ostream&
operator << (ostream& os, const complex& x)
{
    return os << '(' <<real(x) << ','
              << imag(x) << ')';
}

#endif

