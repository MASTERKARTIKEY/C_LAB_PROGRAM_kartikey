//C++ program ti create calculator using
//switch statement
#include <iostream>
using namespace std;

//Driver code

int main()
{
  char op;
  float num1 , num2;
  
  //It allows user to enter operator
  //i.e. +,-,*,/
  cin>>op;
  
  //It allows user to enter the operands
  cin>>num1>>num2;
  
  //Switch statment begins
  
  switch(op){
    //If user enter +
    case '+':
    cout<< num1 + num2;
    break;
    
    //If user enter -
    case '-':
    cout<< num1 - num2;
    break;
    
    //If user enter *
    case '*':
    cout<< num1 * num2;
    break;
    
    //If user enter /
    case '/':
    cout<< num1 / num2;
    break;
    
    //If the operator is other than +,-,* or /,
    //error message will display
    default:
    cout<< "Error! operator is not correct";
     }
     //switch statment ends 
     return 0;
     
}

