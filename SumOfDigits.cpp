//find sum of digits

#include <iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter the number : ";
	cin>>num;
	
	int d=num;
	
	while(d!=0)
	{
		int j=d%10;
		sum=sum+j;
		d=d/10;
	}
	
	cout<<"Sum = "<<sum;
}
