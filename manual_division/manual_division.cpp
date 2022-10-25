/*
Day 896
Implement a division method that doesn't use operators except +/-
Written by Chris Blicharz on October 25th, 2022
*/

#include <iostream>
using namespace std; 

int modified_division(int a, int b)
{
	//a is divided by b with no remainder
	int quotient;
	a-=b;
	while (a >= 0)
	{
		quotient++;
		a-=b;
	}
	return quotient;
}

int main(){
	cout<<"Enter two positive integers: ";
	int a ,b;
	cin>> a;
	cin>> b;

	while(a < 0 || b < 0)
	{
		cout<<endl<<"Please enter positive integers: ";
		cin>> a;
		cin>>b;
	}
	cout<<"The division of these two integers with no remainder is: "<<modified_division(a,b)<<endl;
}
