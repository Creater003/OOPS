#include<iostream>
#include<string.h>
using namespace std;
/*Dfault constuctor always gives shallow copy which means that if we change the value in the first constructor then the value in 
the copy constructor  will also cahnge because they both are accessing the same address*/
class hero{
    

    int level;
    int age;
    char name[100];





public:
    void set_level(int level){
        this->level = level;

    }
    void set_age(int age){
        this->age = age;

    }
    void set_name( char name[10]){
        strcpy(this->name,name);
    }


    void print(){

        cout<<"name: "<<name<<" "<<"level: "<<level<<" "<<"age: "<<age<<endl;

    }


};

int main()
{

        hero h1;
        h1.set_level(2);
        h1.set_age(21);
        char name[10]="ashish";
        h1.set_name(name);

        h1.print();
        hero h2(h1);
        h2.print();
    
             h1.print();
        h2.print();


return 0;
}