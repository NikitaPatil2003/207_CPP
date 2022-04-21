#include<iostream.h>
#include<conio.h>

class student
{
    protected:
	 int rollno;
	 char name[20];
};

class marks:protected student
{
    protected:
	 int m1,m2,m3,total;

};

class result:protected marks
{
    public:
       void get();
       void show();
} ;

void result::get()
{
   cout<<"Enter the Roll_no:- ";
   cin>>rollno;

    cout<<"Enter the Student Name:- ";
   cin>>name;

    cout<<"Enter Marks of 1st Subject:- ";
   cin>>m1;

    cout<<"Enter Marks of 2nd Subject:- ";
   cin>>m2;

   cout<<"Enter Marks of 3rd Subject:- ";
   cin>>m3;

   total=m1+m2+m3;
}

void result::show()
{
    cout<<"Student Roll_no:- " <<rollno<<endl;
    cout<<"Student name:- "<<name<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Marks of 1st Sub:- "<<m1<<endl;
    cout<<"Marks of 2nd Sub:- "<<m2<<endl;
    cout<<"Marks of 3rd Sub:- "<<m3<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Total Marks is:- "<<total;
}

void main()
{
   clrscr();

   result r1;
   r1.get();
   cout<<endl<<endl;
   r1.show();

  getch();
}