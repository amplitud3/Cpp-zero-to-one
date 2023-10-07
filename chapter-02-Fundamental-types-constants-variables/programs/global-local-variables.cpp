#include<iostream>
using namespace std;

int var1;  // global variable
int var2 = 2; // explicit initialization


int main()
{
    char ch('A'); // local varible being initialized
                  // or char ch = 'A';

     cout << "Value of var1 : " << var1 << endl;
     cout << "Value of var2 : " << var2 << endl;
     cout << "character in ch :" << ch << endl;

     int sum, number = 3; // local variables with and without initialization 

     sum =  number + 4;

     cout << "value of sum : " << sum << endl;

     return 0;            

}

