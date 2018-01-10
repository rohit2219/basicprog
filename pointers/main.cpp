#include <iostream>

using namespace std;
function PassPoint(int *add_pointer )
{
    *add_pointer=7+1;

}

int main()
{
    std::cout << "Hello pointers program" << endl;
    int value=6;
    int* pointer=new int(value);
    int *add_pointer=&value;

    cout << value << std::endl;
    cout << *pointer <<std::endl;
    cout << pointer <<std::endl;
    cout << &pointer <<std::endl;
    cout << &value <<std::endl;
    cout << add_pointer <<std::endl;
    /**add_pointer++;
    cout << value << std::endl;*/
    cout << value << std::endl;

  /*  std::cout << (void*)pointer<< std::endl;
    std::cout << pointer << std::endl;
    std::cout << &value << std::endl;
    std::cout << (void*)value << std::endl;
    std::cout << pointer << std::endl;
    std::cout << &pointer << std::endl;*/
     return 0;
}
