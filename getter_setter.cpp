#include<iostream>
using namespace std; 

class books{

        string BookName;

    public:
    int price;

    void setBookName(string bk_name){
        BookName = bk_name;
    }

    string getBpookName(){
        return BookName;
    }

};

int main()
{

    //initiating the object
    books book;

    //settig up the properites of the data members
    book.setBookName("Learn cpp");
    book.price=2000;

    //gettig the cvaluyes of the data members
   cout<<"the name of the book is: " <<book.getBpookName()<<endl;
   cout<<"price of this book is :"<<book.price<<endl;



}