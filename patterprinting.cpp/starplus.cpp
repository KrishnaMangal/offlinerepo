//n given odd for this pattern
#include <iostream>
using namespace std ;
int main ()
{
int n;
cout<<"side of square : ";
cin>>n;
int mid = n/2+1;
for( int i=1;i<=n;i++)//row
{
    for( int j=1;j<=n;j++)//coulums
    {
       if (i==mid ||j==mid)
       {
        cout <<"*";
       }
       else cout<<" ";
        }
    cout<<endl;//main kel enter ka hi
}
return 0;
}