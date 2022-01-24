
/*All executable code is placed in functionsand called directly
or indirectly from main()*/ 

#include <vector>
#include <iostream> // include ("import") the declarations for the I/O stream library
using namespace std; // make names from std visible without std::

double square(double x) // square a double precision floating point number

{

	return x * x;

}

void print_square(double x) // "return type" void indicates that a function does not return a value

{
	cout << "The sqaure of " << x << " is " << square(x) << "\n";
}


int main()
{   
	// call function here with argument
	// print_square();
	

	system("pause>0");


}

