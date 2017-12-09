#include <iostream>
#include "class_common.cpp"
using namespace std;


void PassPoint( int *add_pointer )
{
    *add_pointer=7+1;
}

int main()
{
    std::cout << "Hello , This program has all the class concepts and other modules built into this" << endl;
    int value=6;
    int* pointer=new int(value);
    int *add_pointer=&value;
    /*pointer concepts*/
    cout << value << std::endl;
    cout << *pointer <<std::endl;
    cout << add_pointer <<std::endl;
    cout << value << std::endl;
    /*class concepts*/
    price_ops prc_ops_inst1;
    /*prc_ops_inst1.price=110; this wont be possible if the object price is set as private like above*/
    int PriceToPass=100;
    cout << "convexity:" << prc_ops_inst1.calc_convexity(PriceToPass) << std::endl;

    return 0;
}



