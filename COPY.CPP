#include<iostream.h>
#include<conio.h>

class Demo
{
   private:
	int a,b,c,d;

   public:
	 Demo(int x,int y);
	 Demo(Demo &t);
	 void show();
	 void copy();
};

Demo::Demo(int x,int y)
{
   a=x;
   b=y;
}

Demo::Demo(Demo &t)
{
   c=t.a;
   d=t.b;
}

void Demo::show()
{
      cout<<"The value of a and b "<<endl<<endl;
      cout<<"a= "<<a<<endl;
      cout<<"b= "<<b<<endl<<endl;
}

void Demo::copy()
{
      cout<<"Using Copy Constructor "<<endl<<endl;
      cout<<"c= "<<c<<endl;
      cout<<"d= "<<d<<endl;
}

void main()
{
   clrscr();

   Demo d1(120,10);
    d1.show();

   Demo d2=d1;
   d2.copy();

   getch();
}







