#include<iostream.h>
#include<conio.h>

class Demo
{
   private:
	int a,b,m,n;

   public:
	 Demo();
	 Demo(int x,int y);
	 Demo(Demo &t);
	 void show();
	 void copy();

};
Demo::Demo()
{
  cout<<"1) Default constructor is called"<<endl<<endl;
}
Demo::Demo(int x,int y)
{
   a=x;
   b=y;
}

Demo::Demo(Demo &t)
{
   m=t.a;
   n=t.b;
}

void Demo::show()
{
      cout<<"2) Using parameterize constructor "<<endl<<endl;
      cout<<"   The value of a and b are :"<<endl;
      cout<<endl<<"\ta= "<<a<<endl;
      cout<<"\tb= "<<b<<endl<<endl;
}

void Demo::copy()
{
      cout<<"3) Using copy constructor"<<endl<<endl;
      cout<<"   Copy the above value "<<endl;
      cout<<endl<<"\tm= "<<m<<endl;
      cout<<"\tn= "<<n<<endl;
}

void main()
{
   clrscr();

   cout<<endl<<"Constructor Overloading Program"<<endl<<endl<<endl;

   Demo d1;

   Demo d2(10,20);
    d2.show();

   Demo d3=d2;
   d3.copy();

   getch();
}