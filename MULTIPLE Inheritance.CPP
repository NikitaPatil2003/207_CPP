#include<iostream.h>
#include<conio.h>

class Employee
{
   protected:
	  int E_no;
	  char Ename[20];

};

class Salary
{
   protected:
       long int salary;

};

class Information : protected Employee,protected Salary
{
   public:
       void get();
       void display();
};

void Information::get()
{
   cout<<"Enter the Employee Number:-> ";
   cin>>E_no;

   cout<<"Enter the Employee Name:-> ";
   cin>>Ename;

   cout<<"Enter the Salary:-> ";
   cin>>salary;
}

void Information::display()
{
    cout<<endl<<"Employee Number:- "<<E_no<<endl;
    cout<<"Employee Name :- "<<Ename<<endl;
    cout<<"Salary :- "<<salary;
}

void main()
{
   clrscr();

   Information E1;
   E1.get();
   cout<<endl<<"------------------------------"<<endl;
   cout<<"Employees Information"<<endl;
   cout<<"-------------------------------"<<endl;
   E1.display();

 getch();
}
