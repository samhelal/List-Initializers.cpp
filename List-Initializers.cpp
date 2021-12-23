/*3.14 (C++11 List Initializers) Write a statement that uses list
initialization to initialize an object of class Account which
provides a constructor that receives an string s and a lastName and class.
double balance to initialize the unsigned int , two accountNumber , firstName ,
data members of a new object of the (c++ how to program )*/
#include <iostream>
using namespace std ;
#include <string>
#include "List-Initializers.h"

int main(){
    account ali (5000 , "Ali " , "Omar", 1000) ;
    cout << ali.displayAccount() << endl ;
}