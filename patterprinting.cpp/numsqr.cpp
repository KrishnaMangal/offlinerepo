#include <iostream>
using namespace std ;
int main ()
{
int n;
cout<<"no of rows : ";
cin>>n;
int m;
cout<<"no of column : ";
cin>>m;
for( int i=1;i<=n;i++)//row
{
    for( int j=1;j<=m;j++)//coulums
    {
        cout<<j;
        }
    cout<<endl;//main kel enter ka hi
}
return 0;
}