#include<iostream>
#include<cmath>
using namespace std;

int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
float divn(float a,float b);
int mod(int a, int b);
int squrt(int a,int b);
int main()
{
    int x,y,res;
    int option;
    cout<<"enter option"<<endl<<"1.addition"<<endl<<"2.subtraction"<<endl<<"3.multiplication"<<endl<<"4.divition"<<endl<<"5.modulus"<<endl<<"6.power"<<endl;
    cin>>option;
    cout<<"enter the values for x"<<endl;
    cin>>x;
    cout<<"enter the values for y"<<endl;
    cin>>y;
    switch (option)
    {
    case 1:
        res=add(x,y);
        cout<<"result is "<<res<<endl;
        break;
    case 2:
        res=sub(x,y);
        cout<<"result is"<<res<<endl;
        break;
    case 3:
        res=mult(x,y);
        cout<<"result is "<<res<<endl;
        break;
    case 4:
        res=divn(x,y);
        cout<<"result is "<<res<<endl;
        break;
    case 5:
        res=mod(x,y);
        cout<<"result is "<<res<<endl;
        break;
    case 6:
        res=squrt(x,y);
        cout<<"result is "<<res<<endl;
        break;
    default:
        break;
    }
    return(0);
}  
int add(int a, int b)
{
    return(a+b);
}
int sub(int a, int b)
{
    return(a-b);
}
int mult(int a, int b)
{
    return(a*b);
}
float divn(float a, float b)
{
    return(b/a);
}
int mod(int a, int b)
{
    int m;
    m= b % a;
    return(m);
}
int squrt(int a, int b)
{
    int m;    
    m=pow(a,b);
    return(m);
}