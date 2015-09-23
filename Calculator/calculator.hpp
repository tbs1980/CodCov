#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

template<class scalarType>
class calculator
{
public:
    static scalarType add(scalarType const a , scalarType const b)
    {
        return a+b;
    }

    static scalarType subtract(scalarType const a , scalarType const b)
    {
        return a-b;
    }

    static scalarType multiply(scalarType const a , scalarType const b)
    {
        return a*b;
    }

    static scalarType divide(scalarType const a , scalarType const b)
    {
        return a/b;
    }
};

#endif //CALCULATOR_HPP
