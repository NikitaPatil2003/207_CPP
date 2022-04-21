#include<iostream.h>
#include<conio.h>
class num2;
class num1
{
   private:
       int a;

   public:
       void get();
       friend void show(num1 x,num2 y);
};
void num1::get()
{
   cout<<"Enter the first number:-> ";
   cin>>a;

}

class num2
{
   private:
      int b;

   public:
      void get();
     friend void show(num1 x,num2 y);
};

void num2 :: get()
{
   cout<<endl<<"Enter the second number:-> ";
   cin>>b;
}

void show(num1 x,num2 y)
{
   cout<<endl<<"The Addition is :-> "<<endl<<endl;
   cout<<"\t"<<x.a<<" + "<<y.b<<" = "<<x.a+y.b;
}

void main()
{
   clrscr();

   num1 n1;
   n1.get();

   num2 n2;
   n2.get();
   show(n1,n2);
  getch();
}














