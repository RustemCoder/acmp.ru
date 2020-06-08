#include <iostream>
using namespace std;
int  main()
{
     
    int a,b,c,v;
    cin>>a>>b>>c;
    v=(2*a*c+2*b*c);
    if(v%16==0)
    cout<<v/16;
 
     else if(v%16!=0)
     cout<<v/(16)+1;
    return 0;
 
 
}
