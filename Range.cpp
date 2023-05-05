//check whether between 2 numbers
#include <iostream>
using namespace std;
int main()
{
	int start,end,search;
	cout<<"Enter starting number :";
	cin>>start;
	cout<<"Enter ending number :";
	cin>>end;
	cout<<"Enter number to be searched :";
	cin>>search;
	
	if(search>=start)
	{
		if(search<=end)
		cout<<"Number lies between the range.";
	}
	else
	{
		cout<<"Nmber lies outside the range.";
	}
}
