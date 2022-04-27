#include<iostream.h>
#include<conio.h>

class Demo
{
   private:
	int a;

    public:
	 void get();
	virtual void show();

};

class Demo_1:public Demo
{
    public:
       void show();

};

void Demo::get()
{
  cout<<"Enter the value of a:-> ";
  cin>>a;

}

void Demo::show()
{
   cout<<"a= "<<a<<endl;

}

void Demo_1::show()
{

    cout<<"Derived class is called";
}

void main()
{
    clrscr();

   Demo *d;

   Demo d1;
   d=&d1;
   d->get();
   d->show();

   Demo_1 d2;
   d=&d2;
   d->show();
   getch();
}