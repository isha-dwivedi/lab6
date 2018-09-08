//programe to add 2 no. through call by value and by reference
//library
#include<iostream>
using namespace std;
//function to  add 2 parametrs
int sum(int a, int b)
{	int sum=a+b;
	return sum;}

void sumR(int a, int b, int &sum)
{	sum=a+b;
	}

int main()
{	//declare the variables that are to be added 	
	int a, b;
	//input from user
 	cout<<"enter the two digits to be added";
	cin>>a>>b;
	//display the sum
	 cout<<"the sum is:"<< sum(a,b);


	//declare the variables that are to be added BY reference	
	int p,q,r;
	//input from user
 	cout<<"enter the two digits to be added";
	cin>>p>>q;
	//call the function sum
	sumR(p,q,r);
	//display the sum which is stored in r
	 cout<<"the sum is:"<< r;
}

