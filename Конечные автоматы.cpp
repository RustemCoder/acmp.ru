#include <iostream>
using namespace std;
int main()
{
    int k,i,d;
    cin>>k;
     
    int m[k],n[k];
     
     
    for(i=0;i<k; i++)
    {
        cin>>n[i];
        cin>>m[i];
    }
     
    for(i=0;i<k;i++)
    {
         
         
        d=19*m[i]+(n[i]+239)*(n[i]+366)/2;
        cout<<d<<endl;
    }
        return 0;
     
}
