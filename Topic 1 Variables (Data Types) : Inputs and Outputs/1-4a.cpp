#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){
int count;

// Basic String
string name = "John";
name = name + " Doe";

// String Functions

count = name.length();
string first_name = name.substr(0, 4);
string last_name = name.substr(5);

cout << "This Person's First Name is: " << first_name << endl;
cout << "This Person's Last Name is: " << last_name << endl;
cout << " " << endl;
cout << "This Person's Full Name is: " << name << endl;
cout << "The length of the text: " << count << endl;
return(0);
}
