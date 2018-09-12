//Sum of even and odd
#include<iostream>
using namespace std;
/*Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
*/

 int sumEvenNumbers(int firstNum, int secondNum, int sumEven)
{
	
	for(int i=firstNum; i<=secondNum; i++)
	{
		if(i%2==0)
		{sumEven=i+sumEven;
		
		}		
		
	
	}
	cout<<sumEven<<endl;	
}

/*Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). 
*/

int sumOddNumbers(int firstNum, int secondNum, int sumOdd)
{
	
	for(int i=firstNum; i<=secondNum; i++)
	{
		if(i%2!=0)
		{sumOdd=i+sumOdd;
				
		}
			
	}
	cout<<sumOdd<<endl;
}

int main()
{
	int a,b,c=0;
	cout<<"enter the first and second no."<<endl;
	cin>>a>>b;
 	
	sumEvenNumbers(a,b,c);

	
	sumOddNumbers(a,b,c);
}

























