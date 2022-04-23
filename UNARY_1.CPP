#include<iostream.h>
#include<conio.h>

class Demo
{
    private:
	int a,b;

    public:
       void get();
       void display();
       void operator -();

};

void Demo::get()
{
  cout<<"Enter the value of a:-> ";
  cin>>a;

  cout<<"Enter the value of b:-> ";
  cin>>b;
}

void Demo::display()
{
   cout<<endl<<"a= "<<a<<endl;
   cout<<"b= "<<b;

}
void Demo::operator -()
{
   a=-a;
   b=-b;
}

void main()
{
  clrscr();

  cout<<endl<<"__Unary Operator Overloading Without Using Friend Function__"<<endl<<endl;

  Demo d1;
  d1.get();
  d1.display();
  cout<<endl<<endl<<"-----------------------------"<<endl;
  -d1;
  d1.display();

  getch();
}




