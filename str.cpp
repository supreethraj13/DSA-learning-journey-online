#include<iostream>
using namespace std;
int compare(const char s1[100],const char s2[100]);
int main()
{
    char a[100],b[100];
    cout<<"enter 2 strings"<<endl;
    cin>>a;
    cin>>b;
    int res=compare(a,b);
    cout<<"comapareision res="<<res<<endl;
    return 0;

}
int compare(const char s1[100],const char s2[100])
{
    int i=0;
    while (s1[i]!='\0'&&s2[i]!='\0')
    {
        if (s1[i]>s2[i])
        {
            return(1);
        }
        if (s1[i]<s2[i])
        {
            return(-1);
        }
        i++;
        
    }
    if (s1[i]=='\0'&&s2[i]=='\0')
    {
        return 0;
    }
    else if (s1[i]=='\0')
    {
        return -1;
    }
    else
    {
        return 1;
    }
    
    
    return(0);
}