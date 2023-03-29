#include <iostream>
using namespace std;
void swapNumber(int &number1,int &number2);
main()
{
    int number1,number2;
    number1=20;
    number2=10;
    swapNumber(number1,number2);
    cout << number1 << number2;
}
void swapNumber(int &number1,int &number2)
{
    int temp=number1;
    number1=number2;
    number2=temp;
}
