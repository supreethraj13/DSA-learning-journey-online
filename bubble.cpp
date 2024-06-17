#include<iostream>
using namespace std;

int main()
{
    int i,j,n,a[20],temp;
    cout<<"enter the array size"<<endl;
    cin>>n;
    cout<<"enter the array elements in random"<<endl;
    for (i = 0; i < n; i++)
    cin>>a[i];
    for ( j = 0; j < n; j++)
    {
        for ( i = 0; i < n-j; i++)
        {
            if (a[i]>=a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            
        }
        
    }
    cout<<"the sorted list is \n"<<endl;
    for (i = 0; i < n; i++)
    cout<<a[i]<<"\t"<<endl;
    return(0);
    
    
    
}