#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    int a[10][10];
    cout<<"enter the order of matrix"<<endl;
    cin>>m>>n;
    cout<<"enter the elements of matrix"<<endl;
        for (i=0; i < m; i++)
            for ( j = 0; j < n; j++)
                cin>>a[i][j];
    cout<<"matrix is"<<endl;
        for ( i = 0; i < m; i++)
        {
            for ( j = 0; j<m; j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    return(0);
}