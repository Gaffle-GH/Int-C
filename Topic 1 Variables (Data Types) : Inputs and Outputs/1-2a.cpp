#include <iostream>
#include <iomanip>
#include <cstdlib>

// ERROR is Intentional.

using namespace std;

int main(){
const int first = 1;
first = 2;

// Sense 'first' value is constant, when changing the value that is already initialized to a different number it will give a syntax error!

cout << "The first's `constant` value is " << first << endl;

return(0);
}
