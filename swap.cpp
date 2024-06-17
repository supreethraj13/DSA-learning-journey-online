#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    int *p,*q,bin;
    cout<<"enter values for a & b"<<endl;
    cin>>a>>b;
    cout<<"displaying before swaped by values a="<<a<<" & b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"displaying after swaped by values a="<<a<<" & b="<<b<<endl;
    p=&a;
    q=&b;
    bin=*p;
    *p=*q;
    *q=bin;
    cout<<"displaying after swaped by reference a="<<*p<<" & b="<<*q<<endl;
    return(0);

}
