#include<iostream.h>
#include<conio.h>

class Demo
{
   private:
	int a,b;

   public:
	 Demo(int x,int y);
	 void show();
};

Demo::Demo(int x,int y)
{
   a=x;
   b=y;
}
void Demo::show()
{
      cout<<"Using parameterize constructor "<<endl<<endl;
      cout<<"a= "<<a<<endl;
      cout<<"b= "<<b<<endl<<endl;
}

void main()
{
   clrscr();

   Demo d1(10,20);
    d1.show();

   getch();
}