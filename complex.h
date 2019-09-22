using namespace std;
int factorial(int n)
// returen n factorial as integer
{
	int fac=1;
	if (1 == n)
	{
		return 1;
	}
	fac = n * factorial(n - 1);
	
	
	return fac;
}
int n_permutations(int a, int b)
// Check the permutation condition
// calculate and permutation value, by using factorial funtion and two integers
{
	// Enter your code
	int perm,c,d,e;
	c = a - b;
	d = factorial(a);
	
	e = factorial(c);
	perm = d / e;
	
	return perm;
}
int n_combinations(int a, int b)
// calculate and return combination value, by using factorial, permutation function
// two integers
{
	// Enter your code
	int comb, c, d, e,r,e2;
		
	c = a - b;
	d = factorial(a);
	r = factorial(b);

	e = factorial(c);
	e2 = e * r;
	comb= d / e2;


	
	return comb;
}

