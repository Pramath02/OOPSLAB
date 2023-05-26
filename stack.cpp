#include <iostream>
using namespace std;
#define max 15

class stack
{
	int stck[max];
	int tos;
	public:
		stack(); //constructor
		void push(int item);
		int pop();
		void display();
		void peek();
};

stack::stack()
{
	tos=0;
}

void stack::push(int item)
{
	if(tos>max)
	{
		cout<<"Stack OVERFLOW\n";
	}
	else
	{
		stck[tos]=item;
		tos++;
	}
}

int stack::pop()
{
	if(tos==0)
	{ 
		cout<<"Stack UNDERFLOW\n";
		return -1;
	}
	else
	{
		tos--;
		return stck[tos];
	}
}

void stack::display()
{
	if(tos!=0)
	{
		for(int i=0; i<tos; i++)
		{
			cout<<stck[i]<<"\n";
		}
	}
	else
	{
		cout<<"Empty stack\n";
	}
}

void stack::peek()
{
	if(tos!=0)
	{
		cout<<stck[tos-1];
	}
	else
	{
		cout<<"Empty stack\n";
	}
}

int main()
{
	int key, item, loop=1;
	stack S;
	while(loop)
	{
		cout<<"Menu\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n";
		cin>>key;
		switch(key)
		{
			case 1:
				cout<<"Enter item to be entered: ";
				cin>>item;
				S.push(item);
				break;
			case 2:
				cout<<"Item popped: "<<S.pop()<<"\n";
				break;
			case 3:
				cout<<"Stack from bottom to top: \n";
				S.display();
				break;
			case 4:
				cout<<"Top of stack element: ";
				S.peek();
				break;
			case 5:
				cout<<"Exiting....\n";
				loop=0;
				break;
			default:
				cout<<"Invalid key\n";
		}
	}
	return 0;
}

