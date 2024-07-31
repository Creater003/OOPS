#include<iostream>
using namespace std;

class car{

        string name="BMW";
        int  price=12000000;


        public:
        string getname(){
                    return name;
        }

        int get_price(){
            return price;
        }
};

int main(){

    //here we have done the dynaimc allocation, newobj is a pointer and the dynamic memory will ae allocated in the heap
    car *newobj = new car;


        //here we cannot access the dynamic object like static object we have to give indentation in order to access it
        cout<<"name of the car is"<< (*newobj).getname();
        cout<<"price of the car is "<<(*newobj).get_price();
            
 return 0;




}