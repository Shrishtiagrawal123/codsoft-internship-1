
#include <iostream>
using namespace std;

int main()
{
	char op;
	float num1, num2;

	
    cout<<"enter first number:"<<endl; 
	cin >> num1 ;
    cout<<"enter second number:"<<endl; 
    cin >> num2;
    cout<<"select some operation like:+,-,*,/"<<endl; 
    cin >> op;
	switch (op) {

	case '+':
		cout<<"addition:"; 
		cout << num1 + num2;
		break;

	case '-':
		cout<<"substraction:"; 
		cout << num1 - num2;
		break;

	
	case '*':
		cout<<"multiplication:"; 
		cout << num1 * num2;
		break;


	case '/':
		cout<<"division:"; 
		cout << num1 / num2;
		break;
    
		default:
		cout << "Error! operator is not correct";
	}
	
		return 0;
}

