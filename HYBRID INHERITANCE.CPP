#include<iostream.h>
#include<conio.h>

class Student
{
  private:
       int rollno;
       char name[20];

  public:
       void get();
       void display();

};

void Student::get()
{
   cout<<"Enter the rollno:-> ";
   cin>>rollno;

   cout<<"Enter the student name:- ";
   cin>>name;

   cout<<endl;

}

void Student::display()
{
   cout<<endl<<"Roll no:- "<<rollno<<endl;
   cout<<"Student name:- "<<name<<endl;

}

class Mark:public Student
{
    protected:
	int m1,m2;

    public:
	 void get();
	 void display();

};

void Mark::get()
{
     Student::get();
      cout<<"Enter the mark first sub:- ";
      cin>>m1;

       cout<<"Enter the mark second sub:- ";
      cin>>m2;

}

void Mark::display()
{
    Student::display();

      cout<<endl<<"Mark first sub:- "<<m1<<endl;

       cout<<"Enter the mark second sub:- "<<m2<<endl;

}
class Perform
{
   private:
       char performance[40];

   public:
	void get();
	void display();
};

void Perform::get()
{

  cout<<endl<<"Enter the performance of student:- ";
  cin>>performance;

}

void Perform::display()
{

  cout<<endl<<"Performance of student:- "<<performance<<endl;

}
 class Result:public Mark,public Perform
{
   private:
     int total;

   public:
      void get();
      void display();
};

void Result::get()
{
   Mark::get();
   Perform::get();

  total=m1+m2;

}

void Result::display()
{
    Mark::display();
   cout<<endl<<"Total of two subject:- "<<total<<endl;
    Perform::display();

}

void main()
{

   clrscr();

   Result s;
    s.get();
    cout<<endl<<"-------------------------------"<<endl;
    cout<<"___Student Information___";
     cout<<endl<<"-------------------------------"<<endl;
    s.display();

   getch();
}
