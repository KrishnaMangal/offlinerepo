#include <iostream>
using namespace std ;
int main ()
{
int n;
cout<<"enter no of rows : ";
cin>>n;
 /*int a=1;
for( int i=1;i<=n;i++)//row
{
    if (i%2==0) a=1;// row start start with odd
    else a=0;
    for( int j=1;j<=i;j++)//coulums
    {
        cout<<a;
        //fliiping
        if (a==1) a=0;
        else a=1;
        }
    cout<<endl;//main kel enter ka hi
}
return 0;
}*/
for(int i=1;i<=n;i++) 
{
for(int j=1;j<=i;j++){
    if ((i+j)%2==0) cout<<1;
    else cout<<0;
}
cout <<endl;
}
return 0;
}