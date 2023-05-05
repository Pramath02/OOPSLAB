//factorial

#include <iostream>
using namespace std;
int fact(int number)
{
	if(number==0 || number==1)
	return 1;
	
	else
	return number * fact(number-1);
}

int main()
{
	int num;
	cout<<"Enter the number to calculate factorial of : ";
	cin>>num;
	cout<<fact(num);
}


