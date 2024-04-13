 //row no(i) + no of stars =n+1 in reverse traingle
// so no of stars = n+1-i
#include <iostream>
using namespace std ;
int main ()
{
int n;
cout<<"enter number of rows : ";
cin>>n;
for( int i=1;i<=n;i++)//row
{
    for( int j=1;j<=(n+1)-i;j++)//coulums
    {
        cout<<"";
        }
    cout<<endl;//main kel enter ka hi
}
return 0;
}