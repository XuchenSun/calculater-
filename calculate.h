using namespace std;

double calculator(double x, double y, char op)
{
// Xuchen Sun 201893438
	double result;

	cout << "Please select an operation +,-,*,/or%,A,X,M,S,Q";
	cin >> op;
	switch (op)
	{
	case  '+':
		cout << "Please input fisrt integer!\n";
		cin >> x;
		cout << "Please input second integer!\n";
		cin >> y;
		result = x + y;
		cout << "\noriginal input is\n" << x << " and " << y;
		cout << "\nthe result is(+ operation) \n" << result;
		return result;
		
	case '-':
		cout << "Please input fisrt integer!\n";
		cin >> x;
		cout << "Please input second integer!\n";
		cin >> y;
		result = x - y;
		cout << "\noriginal input is\n" << x << " and " << y;
		cout << "\nthe result is(- operation) \n" << result;
		return result;
		
	case '*':
		cout << "Please input fisrt integer!\n";
		cin >> x;
		cout << "Please input second integer!\n";
		cin >> y;
		result = x * y;
		cout << "\noriginal input is\n" << x << " and " << y;
		cout << "\nthe result is(* operation) \n" << result;
		return result;
		
	case '/':
		cout << "Please input fisrt integer!\n";
		cin >> x;
		cout << "Please input second integer!\n";
		cin >> y;
		result = x / y;
		cout << "\n original input is\n" << x << " and " << y;
		cout << "\nthe result is(/ operation) \n" << result;
		return result;
		
	case '%':
		cout << "Please input fisrt integer!\n";
		cin >> x;
		cout << "Please input second integer!\n";
		cin >> y;


		result = (int)x % (int)y;

		cout << "\noriginal input is\n" << x << " and " << y;
		cout << "\nthe result is(% operation) \n" << result;
		return result;
		
	case 'A':
		cout << "Please input fisrt integer!\n";
		cin >> x;
		cout << "Please input second integer!\n";
		cin >> y;
		result = x + y;

		result = result / 2;
		cout << "\noriginal input is\n" << x << " and " << y;
		cout << "\nthe result is(A operation) \n" << result;
		return result;
		

	case 'X':
		cout << "Please input fisrt integer!\n";
		cin >> x;
		cout << "Please input second integer!\n";
		cin >> y;
		if (x < y)
		{
			result = y;
			cout << "\noriginal input is\n" << x << " and " << y;
			cout << "\nthe result is(X operation) \n" << result;
			return result;
			
		}
		else
		{
			result = x;
			cout << "\noriginal input is\n" << x << " and " << y;
			cout << "\nthe result is(X operation) \n" << result;
			return result;
			
		}
	case 'M':
		cout << "Please input fisrt integer!\n";
		cin >> x;
		cout << "Please input second integer!\n";
		cin >> y;
		if (x < y)
		{
			result = x;
			cout << "\noriginal input is\n" << x << " and " << y;
			cout << "\nthe result is(M operation) \n" << result;
			return result;
			
		}
		else
		{
			result = y;
			cout << "\noriginal input is\n" << x << " and " << y;
			cout << "\nthe result is(M operation) \n" << result;
			return result;
			
		}
	case 'S':
		cout << "Please input fisrt integer!";
		cin >> x;
		result = x * x;
		cout << "\noriginal input is\n" << x << " and " << y;
		cout << "\nthe result is(S operation) \n" << result;
		return result;
		
	case 'Q':
		break;


	default:
		break;
	}





}
