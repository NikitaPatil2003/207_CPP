#include<iostream.h>
#include<conio.h>

class Calculation
{
   protected:
       int X,Y;
   public:
      void get();


};

class Add:  public Calculation
{
   protected:
	int C;
   public:
       void show();

};

class Sub: public Calculation
{
    protected:
	 int Z;

    public:
	void show();

};

void Calculation::get()
{
   cout<<endl<<"Enter the X value:-> ";
   cin>>X;

   cout<<"Enter the Y value:-> ";
   cin>>Y;

}


void Add::show()
{
  C=X+Y;
  cout<<endl<<"Addition is:- "<<C<<endl;

}
void Sub::show()
{
   Z=X-Y;
  cout<<endl<<"Subtraction is:- "<<Z;

}

void main()
{
  clrscr();

  cout<<endl<<"___ADDITION___"<<endl;
  Add a1;
  a1.get();
  a1.show();

  cout<<endl<<endl<<"___SUBTRACTION___"<<endl;
  Sub s1;
  s1.get();
  s1.show();

 getch();
}

