#include <calculator.hpp>

int main(void)
{
    if( calculator<double>::add(double(1.),double(2.)) !=  double(1.)+double(2.) )
    {
        return 1;
    }

    if( calculator<double>::abs(double(-1.)) != double(1.) )
    {
        return 1;
    }

    return 0;
}
