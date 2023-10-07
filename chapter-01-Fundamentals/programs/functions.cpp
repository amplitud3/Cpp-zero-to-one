#include<iostream>
using namespace std;

void line(), message();  //prototypes

int main()
{

    cout<<"Hello! the program starts in main()."
        <<endl;

    line();
    message();
    line();
    cout << "At the end of the main." <<endl;

    return 0;    
}


void line()
{

 cout << "------------------------------------------" << endl;


}


void message()
{
    cout << "In function message()." <<  endl;
}

/*

Hello! the program starts in main().
------------------------------------------
In function message().
------------------------------------------

*/