#include <iostream>
using namespace std ;
int main ()
{
int n;
cout<<"enter number of rows : ";
cin>>n;
 int a=1;
for( int i=1;i<=n;i++)//row
{
    for( int j=1;j<=i;j++)//coulums
    {
        cout<<a<<" ";
        a++;
        }
    cout<<endl;//main kel enter ka hi
}
return 0;
}