#include<iostream.h>
#include<conio.h>

class Binary
{
   private:
	int a,b;

   public:
	void get();
	void show();
      Binary operator +(Binary &b1);
};

void Binary::get()
{
    cout<<endl<<"Enter the value of a:-> ";
    cin>>a;

    cout<<"Enter the value of b:-> ";
    cin>>b;
}

void Binary::show()
{
   cout<<"a= "<<a<<endl;
   cout<<"b= "<<b;
}

Binary Binary::operator+(Binary &b2)
{
   Binary b3;

   b3.a=a+b2.a;
   b3.b=b+b2.b;

   return(b3);
}

void main()
{
    clrscr();

    cout<<endl<<"------------------------------------------------------------------"<<endl;
    cout<<"Binary Operator Overloading Program Without Using Friend Function"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;

    Binary b,b5,b4;
    b.get();
    b5.get();

    cout<<endl<<"___Addition of Two Objects___"<<endl<<endl;

    b4=b+b5;
    b4.show();

    getch();
}