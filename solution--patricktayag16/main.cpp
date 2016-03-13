/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Patrick Tayag <patricktayag16@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */
/**
* A program that has an example of a possible exception, a template,
*/

#include <iostream>
#include <vector>
#include <functional>

using std::cout;
using std::cin;
using std::vector;

void test_exception() { //part1
	int num1, num2 = 2;

	cout << "Can zebras roar? :O\n";
	cout << "Answer(1 = No/2 = Yes): ";
	cin >> num1;

	try {
		if (num1 == 1)
			throw 27;
	}
	catch (int x)
	{
		cout << "Error " << x << ": No, zebras cannot roar, buddy. ;-;\n";
		cout << "But it's okay, maybe that can happen one day! c:\n";
		num2 = 1;
	}
	if (num1 == 2)
	{
		cout << "Good, zebras can't roar. c:\n";
	}
	try {
		if ((num1 < 1) || (num1 > 2)) //?
			throw 33;
	}
	catch (int y)
	{
		cout << "Error " << y << ": You didn't even answer the question! >:(\n";
		cout << "Fine then, I see how it is ;-;\n";
	}
} //part1

template<class boo> //part2
boo addnumbers(boo a, boo b){ // chose "boo" for no actual reason.
	return a + b;
} //part2



	int main() {

		test_exception();//part1

		cout << std::endl;

		cout << "This is now an addition math calculator\n"//part2
			<< "in which you get to put down\n"
			<< "any number you possibly want!\n"
			<< "With that in mind, type two numbers,\n"
			<< "any numbers you want. c:\n";
		double x;
		double y;
		double z;
		cout << "Your two numbers of choice please: ";
		cin >> x;
		cin >> y;
		z = addnumbers(x,y);
		cout << x << " + " << y << " = " << z << ".\n"; //part2
		
		cout << std::endl;
		cout << "Vectors are fun, right?\n";

		vector<int> bop; //part 3?
		vector<int> * boppers= new vector<int>();
		//rabbit mega base
		bop.push_back(5); 
		boppers->push_back(9);
		for (int i = 0; i < 20; i++)
		{
			bop.push_back(i + (i + 2));
			boppers->push_back(i * 3);
		}
		//rabits(adding)
		for (auto it = bop.begin(); it != bop.end(); ++it)
		{
			cout << "bops " << *it << std::endl;
		}
		//super rabbits (multiplying)
		for (vector<int>::iterator it1 = boppers->begin(); it1 != boppers->end(); ++it1)
		{
			cout << "boppers " << *it1 << std::endl;
		}
		cout << "Size of bop: " << boppers->size() << std::endl;
		//no more super rabbits
		cout << "First one " << boppers->front() << std::endl;
		cout << "Last one " << boppers->back() << std::endl;
		while (boppers->size() > 0)
		{
			cout << "removing " << boppers->back() << std::endl;
			boppers->pop_back();
		} //part 3?
		 
		system("pause");
		return 0;
	}
