#include<iostream.h>
#include<conio.h>

class Student
{
  protected:
       int rollno;
       char sname[20];

};

class Test:public Student
{
   protected:
	  int marks;

   public:
       void get();
       void show();
};

void Test :: get()
{
   cout<<"Enter the Roll_no:-> ";
   cin>>rollno;

   cout<<"Enter the student name:-> ";
   cin>>sname;

   cout<<"Enter the Test_1 marks:-> ";
   cin>>marks;
}

void Test :: show()
{
      cout<<endl<<endl<<"Roll_no:-> "<<rollno<<endl;
     cout<<"Student name:-> "<<sname<<endl;
     cout<<"Test_1 Marks:-> "<<marks<<endl;

}

void main ()
{
   clrscr();
    
    Test t1;
      t1.get();
      t1.show();

   getch();

}
