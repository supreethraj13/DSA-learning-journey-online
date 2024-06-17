#include<iostream>
using namespace std;

int main()
{
    int n,i,low,high,mid,a[20],key;
    cout<<"enter the array size"<<endl;
    cin>>n;
    cout<<"enter the array elemnts in ascending order"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter the key element to be searched"<<endl;
    cin>>key;
    low=0;
    high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (a[mid]==key)
        {
            cout<<"search successful"<<endl;
            cout<<"element found at "<<mid+1<<" location"<<endl;
            exit(0);
        }
        else if (a[mid]>key)
            high=mid-1;
        else
            low=mid+1;
        
    }
    cout<<"key element not found"<<endl;
    return(0); 
    
}