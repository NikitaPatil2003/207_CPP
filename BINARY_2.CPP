#include<iostream.h>
#include<conio.h>

class Binary
{
   private:
	int a,b;

   public:
	void get();
	void show();
     friend Binary operator +(Binary &b1,Binary &b2);
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

Binary operator+(Binary &b1,Binary &b2)
{
   Binary b3;

   b3.a=b1.a+b2.a;
   b3.b=b1.b+b2.b;

   return(b3);
}

void main()
{
    clrscr();

    cout<<endl<<"----------------------------------------------------------"<<endl;
    cout<<"Binary Operator Overloading Program Using Friend Function"<<endl;
    cout<<"----------------------------------------------------------"<<endl;

    Binary b4,b5,b6;
    b4.get();
    b5.get();

    cout<<endl<<"___Addition of Two Objects___"<<endl<<endl;

    b6=b4+b5;
    b6.show();

    getch();
}