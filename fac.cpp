#include<iostream>
using namespace std;

int fac(int n);

int main()
{
    int n,r;
    cout<<"enter the number"<<endl;
    cin>>n;
    r=fac(n);
    cout<<"fact is ="<<r<<endl;

    return 0;
}
int fac(int n)
{
    if (n==0||n==1)
    {
        return 1;
    }
    
    else
    {
        int res= n*fac(n-1);
        return res;
    }
}