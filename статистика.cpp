#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n],i;
int z=0,k=0;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
 
for(i=0;i<n;i++)
{
     
    if(a[i]%2!=0)
    cout<<a[i]<<' ';
}
cout<<endl;
for(i=0;i<n;i++)
{
if(a[i]%2==0)
cout<<a[i]<<' ';
 
}
cout<<endl;
for(i=0;i<n;i++)
{
     
    if(a[i]%2==0)
    k++;
    else
    z++;
}
 
if(z==k || k>z)
cout<<"YES";
else
cout<<"NO";
 
return 0;}
