#include<iostream.h>
#include<conio.h>
class Add
{
   private:
       long int a,b,c;
   public:
	Add();
	void show();
};
 Add::Add()
 {
     cout<<"Enter the first value:- ";
     cin>>a;
     cout<<"Enter the second value:- ";
     cin>>b;
 }
 void Add::show()
 {
     c=a+b;
    cout<<endl<<"Addition is :- "<<c<<endl<<endl;

  }

  void main()
{
  clrscr();

    Add a1;
    a1.show();

  getch();
}





