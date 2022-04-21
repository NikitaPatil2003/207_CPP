#include<iostream.h>
#include<conio.h>

class student
{
  protected:
       int rollno;
       char sname[20];

};

class Test:public student
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
      cout<<"Roll_no:-> "<<rollno;
     cout<<"Student name:-> "<<rollno;
     cout<<"Test_1 Marks:-> "<<rollno;

}