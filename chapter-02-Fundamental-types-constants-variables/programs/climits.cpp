#include<iostream>
#include<climits> // definiton of INT_MIN

using namespace std;

int main()
{

    cout << "Range of types int and unsigned int"
        << endl << endl;

    cout << "Type        Minimum         Maximum" 
        <<endl
        <<"----------------------------------------" 
        <<endl;

    cout<< "int       "<<INT_MIN<<"     " <<INT_MAX << endl;
    cout<< "unsigned int "<< " 0  "<<"         "<<UINT_MAX << endl;


    cout << endl;

    return 0;

}