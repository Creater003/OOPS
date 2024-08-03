#include<iostream>
using namespace std;

//if we we don't define any constructor then a constuctor is aoutmatically called and it is called as default cons.
class constructor{


    int a=20;
    string name = "ashish";

   public:
    constructor(){
        //this is called as non parametrised consturctor
        cout<<"my name is "<<name<<endl;
    }

};

 int main(){

    //note:- if we want to acces the constructor outside the calss the the cons must be public
    constructor cons;

    constructor *cons2 = new constructor();





 }