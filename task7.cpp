void rotate(int arr[],int size)
{
    int temp=arr[0];
    for (int x=1;x<size;x++)
    {
       arr[x]=arr[x+1];
    }
    arr[arrsize-1]=temp;
}
void leftRotate(int arr[],int size,int times)
{

}
main()
{
    int size=6;
    int times=3;
    int arr[size]={1,2,3,4,6};
    leftRotate(arr,6,3);
    for (int i = 0; i < size; i++)
    {
        cout << 
    }
    
}