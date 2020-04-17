#include  <iostream>
using namespace  std ;


int main()
{
	long  long a ; 
	cin>>a;
	long long result ;
	
	if(a>10)
	{
	a = a/10;
	
	result = a*(a+1);
	cout<<result<<25;	
	}
	
	else if(a==5)
	{
		result =25 ;
		cout<<result;
	}
	
	
	return 0 ;
	
	
}
