#include<iostream>
using namespace std;

class studentData{

    string name;
    string Fathers_name;


public:
    studentData(string name, string Fathers_name){
        this->name=name;
        this->Fathers_name=Fathers_name;
    }


    void print_data(){
        cout<<"name of student is "<<name<<endl;
        cout<<"name of student father is"<<Fathers_name<<endl;
    }


};

int main()
{

    studentData stu1("Ashish","Jgdev mishra");

    cout<<"the information of student 1 is "<<endl;
    stu1.print_data();
    cout<<endl<<endl<<endl;


/*here we have made a copy constuctor  named stu2 and copied data of constructor_1 i.e. stu1 to stu2 and if we print the data 
the result will be same  */
    studentData stu2(stu1);
    cout<<"the information of studnet 2 is \n";
    stu2.print_data();




return 0;
}