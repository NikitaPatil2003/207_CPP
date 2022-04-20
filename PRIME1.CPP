//prime number
#include<iostream.h>
#include<conio.h>
class Prime
{
     public:
	  int check(int x);

};
int Prime::check(int x)
{
    int i,p=0;

	for(i=2;i<x;i++)
	{
	  if(x%i==0)
	  {
	    p=1;
	    break;
	  }
       }
  return p;
}
void main()
{
    int x,p;

    clrscr();

    cout<<"Enter the number :- ";
    cin>>x;

    Prime d1;
   p=d1.check(x);

   if(p==0)
   {
      cout<<x<<" is Prime Number ";
   }
   else
   {
       cout<<x<<" is Not Prime Number";
   }
 getch();

}
