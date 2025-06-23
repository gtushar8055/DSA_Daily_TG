// Day19 --> 23/06/2025
// String basics
#include <iostream>
#include<cstring>
using namespace std;
int main() {
    string str = "Tushar Gupta"; //Dynamic in nature ==> resize on runtime
    cout<<str<<endl;

    str = "Ram";
    cout<<str<<endl;

    // Compilation or Concatenation of strings 
    string str1 = "Tushar";
    string str2 = "Gupta";

    cout<<str1+" "+str2<<endl;

    // Comparison of Strings 

    cout<<(str1 == str2)<<endl; // 0 ==> false , 1 ==> true
    cout<<(str1 < str2)<<endl;
    cout<<(str1 > str2)<<endl;

    // Inbuilt functions 
    cout<<str1.length()<<endl;

    // Input of String Using getline 

    string name;
    cout<<"Enter New String : ";
    getline(cin , name);
    cout<<"The Output of the string is : "<<name<<endl;

    return 0;
}