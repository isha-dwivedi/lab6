/*
a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
 
*/
#include<iostream>
using namespace std;
//function to  add 2 parametrs through call by value
int sum(int a, int b)
{	int sum=a+b;
	return sum;}
//function to add by reference
void sumR(int a, int b, int &sum)
{	sum=a+b;
	}
//function to find max 2 no. through call by value
int max(int a, int b)
{	 
	if(a>b)
	return a;
	else
	return b;
}

//function to find max  2 no. through all by reference
void maxR(int a, int b, int &max)
{	
	if(a>b)
	 max=a;
	else
	 max=b;
	}
//function to find min 2 no. through call by value
int min(int a, int b)
{	 
	if(a>b)
	return b;
	else
	return a;
}

//function to  to find min 2 no. through call by reference
void minR(int a, int b, int &min)
{	
	if(a>b)
	 min=b;
	else
	 min=a;
	}

int main()
{	//declare the variables that are to be added 	
	int a, b,c;
	//input from user
 	cout<<"enter the two digits to be added";
	cin>>a>>b;
	
	int p,q;
	//ask the user about the function it wants to perform
	cout<<"enter which option wanted: 1)sum or 2)max or 3)min"<<endl;
	cin>>p;
	//ask if operation to be performrd by value or reference
	cout<<" 1) call by value"<<endl<<"2) call by reference"<<endl;
	cin>>q;
	//perform the operation entered by user
	if(p==1)
	{	if(q==1)
			{	
		
			//display the sum through call by value
			 cout<<"the sum is:"<< sum(a,b);}


		else	
			{//call the function sum through call by reference
			sumR(a,b,c);
			//display the sum which is stored in c
			 cout<<"the sum is:"<< c;}	
	}

	else if(p==2)
	
	{	if(q==1)
			{
			//display the max of two no. through call by value
			cout<<"the max of two no. is"<<max(a,b);
			}
		else{
			//call the function max through call by reference
			maxR(a,b,c);
			//display the max which is stored in c
			 cout<<"the max of two no. is"<< c;
			}
	}
	
	else
	{	if(q==1){
			//display the min of two no.through call by value
			cout<<"the min of two no. is"<<min(a,b)<<endl;
	
			}
		else{
			//call the function sum through call by reference
			minR(a,b,c);
			//display the min which is stored in c
			 cout<<"the min of two no. is"<< c;

			
			}	
	}
}























