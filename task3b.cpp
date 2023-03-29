#include <iostream>
using namespace std;
void passingToArray(int arr[],int num);
main()
{
    int num=3;
    int arr[num]={2,3,4};
    passingToArray(arr,num);

}
void passingToArray(int arr[],int num)
{
    for(int i=0;i<num;i++)
    {
        cout << arr[i] <<" ";
    }
}

