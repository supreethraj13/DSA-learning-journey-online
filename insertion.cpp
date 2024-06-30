#include<iostream>
using namespace std;
int swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    return *x,*y;
}
int main()
{
    int i,j,n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elments to be sorted"<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i <=n-1; i++)
    {
        j=i;
        while (j>0&&a[j-1]>a[j])
        {
            swap(&a[j-1],&a[j]);
            j--;
        }
        
    }
    cout<<"sorted array is"<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}