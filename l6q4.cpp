/*program that find the minimum of two no.s through call by value and call by reference*/
//library
#include<iostream>
using namespace std;
//function to  compare 2 no. through call by value
int min(int a, int b)
{	 
	if(a>b)
	return b;
	else
	return a;
}

//function to  compare 2 no. through call by value
void minR(int a, int b, int &min)
{	
	if(a>b)
	 min=b;
	else
	 min=a;
	}

int main()
{	//declare the variables that are to be compared throug call by value	
	int a, b;
	//input from user
 	cout<<"enter the two digits to be compared"<<endl;
	cin>>a>>b;
	
	//display the min of two no.
	cout<<"the min of two no. is"<<min(a,b)<<endl;


	//declare the variables that are to be compared BY reference	
	int p,q,r;
	//input from user
 	cout<<"enter the two digits to be compared";
	cin>>p>>q;
	//call the function sum
	minR(p,q,r);
	//display the min which is stored in r
	 cout<<"the min of two no. is"<< r;
}

