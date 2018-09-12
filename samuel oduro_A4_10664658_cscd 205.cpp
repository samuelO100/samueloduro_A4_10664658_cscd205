#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
int gcd(int c, int x)
{
	return (x !=0) ? gcd(x, c % x) : c;
}

int main(void)
{
	int num1, num2, result;
	cout << "Enter two numbers to find GCD using Euclidean algorithm: ";
	cin >> num1 >>num2;
	result = gcd(num1, num2);
	if (gcd)
	    cout << "\nThe GCD of " << num1 << " and " << num2 << " is: " << result
		        << endl;
	else
	    cout << "\nInvalid input!!!\n";
	return 0;				 
}
