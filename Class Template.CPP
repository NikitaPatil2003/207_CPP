#include<iostream.h>
#include<conio.h>

template<class T>
class Demo
{
   private:
      T a,b;

   public:
       Demo(T x,T y)
	{
	  a=x;
	  b=y;
	  cout<<endl<<"__Before Swapping__"<<endl<<endl;
	  cout<<"a= "<<a<<endl;
	  cout<<"b= "<<b;

	}

      void swap()
       {
	 T q;
	 q=a;
	 a=b;
	 b=q;
	  cout<<"\n\n__After Swapping__"<<endl<<endl;
	   cout<<"a= "<<a<<endl;
	   cout<<"b= "<<b;
       }
};

void main()
{
   clrscr();
      cout<<"______Swapping of Two Integer Numbers_______"<<endl<<endl;

     Demo <int> d(10,20);
    d.swap();

     cout<<"\n\n______Swapping of Two Float Numbers_______"<<endl<<endl;

     Demo < float> d1(10.1,2.2);
    d1.swap();

 getch();
}