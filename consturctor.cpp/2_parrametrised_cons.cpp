#include<iostream>
using namespace std;


class hero{

    string name;
    int age;

    public:
    hero(int age, string name){
       this-> age = age;
       this-> name = name;

        cout<<"name of hero is " <<name<<endl;
        cout<<"age of hero is " <<age<<endl;

    }


};
/*here this keyword plays a very singificant role bacause the parameter is of same name as of daclared in class member, so we must
use this keyword in order to put vale in the member variable value of hero class other wis the value will be assigned to the
parametwe that is passed*/
int main()
{

hero h1(27,"superman");

return 0;
}