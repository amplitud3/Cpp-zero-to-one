/*

Create a C++ program that defines a string containing the following character
sequence:
I have learned something new again!
and displays the length of the string on screen.
Read two lines of text from the keyboard. Concatenate the strings using " * "
to separate the two parts of the string. Output the new string on screen.


*/

#include<iostream>
#include<string>

using namespace std;

int main()
{

	string text("I have learned something new again!");

	cout<< text;

	cout << endl;

	string s;
	string k;
	string d;

	cout<< "length of the string : "<<text.length();

	cout<< endl;

	cout<< "Enter some text in two lines  :";
	getline(cin,s);
	getline(cin,k);

	d = s + " * " + k;

	cout<<"\n";

	cout<<d;


	cout<< endl;


	return 0;

}