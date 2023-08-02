#include <iostream>
#include <limits.h>
using namespace std;


int main(){

    int a; //declaration
    a=12; //initialisation

    cout << INT_MIN <<  endl;
    cout << INT_MAX <<  endl;
    cout << SCHAR_MIN << " to " << SCHAR_MAX<<endl;
    cout << 0 << " to " << UINT_MAX<<endl;

    float b;
     cout << __FLT_MIN__ <<  endl;
     cout << __FLT_MAX__ <<  endl;
     char c;
      cout << CHAR_MIN << endl;
      cout << CHAR_MAX << endl;
      cout << SCHAR_MIN << " to " << SCHAR_MAX<<endl;
      cout << 0 << " to " << UCHAR_MAX<<endl;

    bool d;
     cout << "size of boolean " << sizeof(d) << endl;//boolean uses 1bit

    double e;
    cout << __DBL_MIN__ <<  endl;
    cout << __DBL_MAX__ << endl;

    
    

   return 0;
}