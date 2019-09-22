#include <iostream>
#include "calculator.h"
#include "complex.h"

using namespace std;



int main()
{
	int opss;
	cout << "Please select an operation 0(simple calculator), 1(factorial,permutations or combinations) ";
	cin >> opss;
	
	
	if (opss == 0)
	// simple calculate
	{
		calculator(NULL, NULL, NULL);
	}


	else if (opss == 1)
	// factorial, permutations or combinations operations
	{
     






		int a, b, e;
		int ops;


		cout << "Please select an operation 0(factorial), 1(permutations) or 2(combinations)? ";
		cin >> ops;



		if (ops == 1)
		{


			int out1;
			cout << "Please input fisrt integer!\n";
			cin >> a;
			cout << "Please input second integer!\n";
			cin >> b;
			out1 = n_permutations(a, b);
			cout << "\nthe result is(permutations operation) \n" << out1;


		}
		else if (ops == 2)
		{
			int out2, b1, p;
			cout << "Please input fisrt integer!\n";
			cin >> a;
			cout << "Please input second integer!\n";
			cin >> b;
			out2 = n_combinations(a, b);
			cout << "\nthe result is(combinations operation) \n" << out2;

		}
		else if (ops == 0)

		{
			int out0;
			cout << "Please input integer!\n";
			cin >> a;
			out0 = factorial(a);
			cout << "\nthe result is(factorial) \n" << out0;
		}
		else
		// input wrong number
		{
			cout << "\n input number error";
		}

	}
	else
	//input wrong number
	{
		cout << " \n input error";
	}
}
