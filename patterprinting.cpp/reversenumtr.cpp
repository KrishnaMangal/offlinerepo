#include <iostream>
using namespace std ;
int main ()
{
int n;
cout<<"enter no of rows : ";
cin>>n;
for( int i=1;i<=n;i++)//row
{
    for( int j=1;j<=(n+1)-i;j++)//coulums
    {
        cout<<j;//try cout<<i;to see magic
        }
    cout<<endl;//main kel enter ka hi
}
return 0;
}