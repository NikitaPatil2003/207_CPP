#include<iostream.h>
#include<conio.h>

template<class T>
void swap(T a,T b)
{
   T p;
   p=a;
   a=b;
   b=p;
   cout<<"\n __After Swapping__"<<endl<<endl;
   cout<<"a= "<<a<<endl;
   cout<<"b= "<<b<<endl;
}

void main()
{
   int x,y;
   float c,d;
   char r,s;

   clrscr();

    cout<<"_______Swapping of Two Integer Numbers________"<<endl<<endl;

    cout<<"Enter the value of x:-> ";
    cin>>x;
    cout<<"Enter the vale of y:-> ";
    cin>>y;

     cout<<endl<<"__Before Swapping__"<<endl<<endl;
     cout<<"x= "<<x<<endl;
     cout<<"y= "<<y<<endl;
   swap(x,y);

    cout<<endl<<"_______Swapping of Two Float Numbers________"<<endl<<endl;

    cout<<"Enter the value of c:-> ";
    cin>>c;
    cout<<"Enter the vale of d:-> ";
    cin>>d;

     cout<<endl<<"__Before Swapping__"<<endl<<endl;
     cout<<"c= "<<c<<endl;
     cout<<"d= "<<d<<endl;
   swap(c,d);

    getch();

}