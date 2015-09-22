#include <iostream>


// This function is never called in the main. What happens to the coverage? 
void print_hello()
{
    std::cout<<"This function prints hello"<<std::endl;
}

int main(void)
{
    std::cout<<"Hello"<<std::endl;
}
