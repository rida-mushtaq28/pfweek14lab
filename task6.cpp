#include <iostream>
using namespace std;
void merge(int arr1[],int arr1Size,int arr2[],int arr2Size,int arr3[],int arr3Size);
main()
{
    int arr1Size=3;
    int arr2Size=3;
    int arr3Size=arr1Size+arr2Size;
    int arr1[arr1Size]={1,2,3};
    int arr2[arr2Size]={3,4,5};
    int arr3[arr1Size+arr2Size];
    merge(arr1,arr1Size,arr2,arr2Size,arr3,arr3Size);
    for(int idx;idx<arr3Size;idx++)
    {
        cout << arr3[idx] << " ";
    }
    
}
void merge(int arr1[],int arr1Size,int arr2[],int arr2Size,int arr3[],int arr3Size)
{
    for(int idx=0;idx<arr1Size;idx++)
    {
        arr3[idx]=arr1[idx];
    }
    for(int idx=0;idx<arr2Size;idx++)
    {
        arr3[idx+arr1Size]=arr2[idx];
    }
}