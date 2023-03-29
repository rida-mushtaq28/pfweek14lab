#include <iostream>
using namespace std;
void changeNumber(int &num);
main()
{
    int num=10;
    int *p;
    p=&num;
    cout << "The adress of Num is:" << p << endl;
    cout << "The Value of Num is:" << *p << endl;
    changeNumber(num);
    cout << "After function " << num << endl;

}
void changeNumber(int &num)
{
    num++;
    cout << "In Function "<< num<< endl;
}