#include<iostream.h>
#include<conio.h>
class Employee
{
    private:

	long int E_no,Salary;
	char Ename[20];

    public:

	void get();
	void show();
};
void Employee::get()
{
   cout<<"Enter the Employee Number:- ";
   cin>>E_no;
   cout<<"Enter the Employee Name:- ";
   cin>>Ename;
   cout<<"Enter the Employee Salary:- ";
   cin>>Salary;
   cout<<endl;
}
void Employee::show()
{
    cout<<endl<<E_no<<"\t";
    cout<<Ename<<"\t\t";
    cout<<Salary;

}

void main()
{
   int i;

   clrscr();

    Employee e1[3];

   for(i=1;i<4;i++)
   {

    e1[i].get();

   }

    cout<<endl<<"___Show Employees information____"<<endl;

    cout<<endl<<"___________________________________"<<endl;
    cout<<"E_no \t";
    cout<<"Employee Name \t";
    cout<<"Salary \t";
    cout<<endl<<"___________________________________"<<endl;

  for(i=1;i<4;i++)
  {

    e1[i].show();

  }

  getch();
}
