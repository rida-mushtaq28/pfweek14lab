#include <iostream>
using namespace std;
float averageValue(int arr[],int size);
main()
{
    float value;
    int arr[4]={3,4,5,6};
    value=averageValue(arr,4);
    cout<< value;
}
float averageValue(int arr[],int size)
{
    float sum=0;
    for(int x=0;x<size;x++ )
    {
        sum=sum+arr[x];
    }
    return sum/size;
}
