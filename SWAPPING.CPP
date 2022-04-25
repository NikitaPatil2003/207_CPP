#include<iostream.h>
#include<conio.h>

class Swap
{
  private:
       int a,b,temp;

  public:
       void get();
       void display();

};

void Swap::get()
{

   cout<<endl<<"Enter the first number:-> ";
   cin>>a;
   cout<<"Enter the second Number:-> ";
   cin>>b;
}

void Swap::display()
{
    cout<<endl<<"Before Swapping of Two Numbers "<<endl<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

    cout<<endl<<"--------------------------------"<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<endl<<"After Swaping of Two Numbers "<<endl<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}

void main()
{
   clrscr();

   Swap s,s1;
   s.get();
   s.display();

  getch();
}




