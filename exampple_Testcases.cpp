#include<iostream>

using namespace std; 

class Example {
   char c;
    int i;
    short s;
};

int main()
{
    Example e1;
    cout<<sizeof(e1);
}