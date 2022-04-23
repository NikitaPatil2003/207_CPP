#include<iostream.h>
#include<conio.h>

class Unary
{
    private:
	int a,b,c;

    public:
       void get();
       void display();
    friend void operator -(Unary &U);

};

void Unary::get()
{
  cout<<"Enter the value of a:-> ";
  cin>>a;

  cout<<"Enter the value of b:-> ";
  cin>>b;

   cout<<"Enter the value of c:-> ";
  cin>>c;
}

void Unary:: display()
{
   cout<<endl<<"a= "<<a<<endl;
   cout<<"b= "<<b<<endl;
   cout<<"c= "<<c;

}
void operator -(Unary &U)
{
  U.a=-U.a;
  U.b=-U.b;
  U.c=-U.c;
}

void main()
{
  clrscr();

  cout<<endl<<"__Unary Operator Overloading Using Friend Function__"<<endl<<endl;

  Unary d1;
  d1.get();
  d1.display();
  cout<<endl<<endl<<"-----------------------------"<<endl;
  -d1;
  d1.display();

  getch();
}



