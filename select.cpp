#include<iostream>
using namespace std;

int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return *a,*b;
}
int main()
{
    int n,i,j,min;
    cout<<"enter the array size"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements to be arranged"<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i <= n-2; i++)
    {
        min=i;
        for ( j = i; j <= n-1; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
            swap(&a[min],&a[i]);
        }
        
    }
    cout<<"elements in arranged order"<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
    
}