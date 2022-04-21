#include<iostream.h>
#include<conio.h>
class Amount;
class Book
{
   private:
      int bcode;
    long int copies,rate;
	char bname[20];

   public:
       void get();
       void display();
       friend Amount;
};

void Book::get()
{
   cout<<endl<<"Enter the book code:-> ";
   cin>>bcode;

   cout<<endl<<"Enter the book name:-> ";
   cin>>bname;

   cout<<endl<<"Enter the number of copies:-> ";
   cin>>copies;

   cout<<endl<<"Enter the rate of book:-> ";
   cin>>rate;
}

void Book::display()
{
   cout<<endl<<endl<<"Book Code:-> "<<bcode<<endl;
   cout<<"Book Name:-> "<<bname<<endl;
   cout<<"Copies of Book:-> "<<copies<<endl;
   cout<<"Rate of Book:-> "<<rate<<endl;
}

class Amount
{
  private:
      long int a;

  public:
      void cal(Book b);
};

void Amount :: cal(Book b)
{
   a=b.copies*b.rate;
   cout<<endl<<"Amount of book :-> "<<a;
}

void main()
{
   clrscr();

   Book b;
   b.get();
   b.display();

   Amount a;
   a.cal(b);

  getch();
}