/*To write a program to read the data of N employee and compute net salary of each employee using pointer given that employee class contains 
following data members,employee number , employee name, basic salary,daily allowance , income tax, net salary, gross salary, member function 
to calculate net salary and print data .
*/
#include<iostream>
using namespace std;
class Employee
{
char emp_name[30];
int emp_no;
float basic, da, it, gs,ns;
public:
void read(int count)
{
cout << "\n enter employee.."<< count<< "..details";
cout << "\n employee number:";
cin >> emp_no;
cout << "\n employee name:";
cin>>emp_name;
cout << "basic salary:";
cin>> basic;
cout << "\n employee.."<< count<< "..details saved\n";
}
float netsal()
{
da= basic*0.52;
gs= basic+da;
it= gs*0.30;
ns=(basic+da)-it;
return ns;
}
void display(int count)
{
cout << "\n employee.."<< count<< "..details:\n";
cout << "\n employee number:"<<emp_no;
cout << "\n employee name:"<<emp_name;
cout << "\n net salary:" <<ns;
cout << "\n............\n";
}
};
int main()
{
Employee emp[100];
int num, count;

cout << "\n enter the number of employees:";
cin >> num;
for(count=0; count<num; count++)
{
emp[count].read(count+1);
}
for(count=0; count<num; count++)
{
emp[count].netsal();
}
for(count=0; count<num; count++)
{
emp[count].display(count+1);
}

return 0;
}

