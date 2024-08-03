/* constuctor is invoked when the object is called and it has no input parameter and no return statement it is automatically
 made/called when class is made and that construvtor is calle4d as default constructor*/


#include<iostream>
using namespace std;

class car{
string carname ="BMW";
int price = 12000000;

public:

string print_car_name(){
    return carname;
}

int return_price(){
    return price;
}

};


 int main(){
    car obj;

 }