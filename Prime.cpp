//To check whether prime or not

#include <iostream>
using namespace std;
int main()
{
	int i,num,o=0;
	cout<<"Enter the number : ";
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			o++;
		}
	}
	
	if(o==0)
	{
		cout<<"Number is Prime";
	}
	else
	{
		cout<<"Not Prime";
	}
}
