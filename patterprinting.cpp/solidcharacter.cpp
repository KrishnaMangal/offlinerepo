#include <iostream>
using namespace std ;
int main ()
{
int n;
cout<<"side of square : ";
cin>>n;
for( int i=1;i<=n;i++)//row
{
    for( int j=1;j<=n;j++)//coulums
    {
        cout<<(char)(j+64)<<"  ";
        }
    cout<<endl;//main kel enter ka hi
}
return 0;
}