#include <iostream>
using namespace std;
bool isSparseMatrix(int arr[][3],int rowsSize);
main()
{
    bool flag;
    int rowSize=3;
   int arr[rowSize][3]={{1,2,3},{0,0,0},{4,4,5}};
   flag=isSparseMatrix(arr,rowSize);
   cout << flag;

}
bool isSparseMatrix(int arr[][3],int rowsSize)
{
    int count=0;
    for(int row=0;row<rowsSize;row++)
    {
        for(int col=0;col<3;col++)
        {
            if(arr[row][col]==0)
            count++;
        }
    }
    if(count>(rowsSize*3)/2)
    {
      return true;
    }
    else 
    {
        return false;
    }
}