//GCD of two numbers

#include <iostream>
using namespace std;
int main()
{
	int a,b,i=0,gcd;
	cout<<"Enter two numbers : ";
	cin>>a;
	cin>>b;
	for(i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	
	cout<<"GCD = "<<gcd;
}
