/*program that find the maximum of two no.s through call by value and call by reference*/
//library
#include<iostream>
using namespace std;
//function to  compare 2 no. through call by value
int Max(int a, int b)
{	 
	if(a>b)
	return a;
	else
	return b;
}

//function to  compare 2 no. through call by value
void maxR(int a, int b, int &max)
{	
	if(a>b)
	 max=a;
	else
	 max=b;
	}

int main()
{	//declare the variables that are to be compared throug call by value	
	int a, b;
	//input from user
 	cout<<"enter the two digits to be compared"<<endl;
	cin>>a>>b;
	
	//display the max of two no.
	cout<<"the max of two no. is"<<Max(a,b);


	//declare the variables that are to be compared BY reference	
	int p,q,r;
	//input from user
 	cout<<"enter the two digits to be compared";
	cin>>p>>q;
	//call the function sum
	maxR(p,q,r);
	//display the max which is stored in r
	 cout<<"the max of two no. is"<< r;
}

