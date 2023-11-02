/*

Create a program to calculate the square roots of the numbers
4
12.25
0.0121
and output them as shown opposite.Then read a number from the keyboard and
output the square root of this number.
To calculate the square root, use the function sqrt() , which is defined by the
following prototype in the math.h (or cmath ) header file:
double sqrt( double x);
The return value of the sqrt() function is the square root of x .

*/

#include<iostream>
#include<cmath>


using namespace std;

int main()
{

	double x=4, y =12.25 , z=0.0121;


	cout<< " Number" << " Square root" << endl;

	cout<<" "<<x<<"         "<<sqrt(x) <<endl;

	cout<<" "<<y<<"     "<<sqrt(y) <<endl;

	cout<<" "<<z<<"    "<<sqrt(z) <<endl;



cout<<endl<<endl;

 cout<< "Enter another number for square root : ";

 cin>>x;



 cout<< " Number" << " Square root" << endl;


cout<<" "<<x<<"         "<<sqrt(x) <<endl;


return 0;



}