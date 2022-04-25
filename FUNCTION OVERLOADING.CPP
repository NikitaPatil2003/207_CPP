#include<iostream.h>
#include<conio.h>

class Function
{
   private:
       int a,b,c;
       double s,l,m;

   public:
	void add(int x,int y);
	void add(double s,double l,double m);
};

void Function::add(int x,int y)
{
    a=x;
    b=y;

    cout<<endl<<"a= "<<a;
    cout<<endl<<"b= "<<b<<endl;

    cout<<endl<<"a+b= "<<a+b<<endl<<endl;
}

void Function::add(double p,double q,double r)
{
   s=p;
   l=q;
   m=r;

    cout<<endl<<"s= "<<s;
    cout<<endl<<"l= "<<l;
    cout<<endl<<"r= "<<r<<endl<<endl;

   cout<<"s+l+m= "<<s+l+m;
}

void main()
{
   clrscr();
   cout<<endl<<"____Function Overloading Program____"<<endl;

  Function f;
  f.add(10,20);
  f.add(10.11,2.7,5.8);

  getch();

}