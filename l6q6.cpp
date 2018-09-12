//Sum of even and odd
#include<iostream>
using namespace std;
/*Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
*/

 int sumEvenNumbers(int firstNum, int secondNum, int sumEven)
{	//starting the loop
	
	for(int i=firstNum; i<=secondNum; i++)
	{
		//condition for even no.
		if(i%2==0)
		{sumEven=i+sumEven;
		
		}		
		
	
	}
	cout<<"the sum of all even no.s is:"<<sumEven<<endl;	
}

/*Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). 
*/

int sumOddNumbers(int firstNum, int secondNum, int sumOdd)
{	//starting the loop
	
	for(int i=firstNum; i<=secondNum; i++)
	{	//condition for even no.
		if(i%2!=0)
		{sumOdd=i+sumOdd;
				
		}
			
	}
	cout<<"the sum of all odd no.s is:"<<sumOdd<<endl;
}

/*Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers().
*/
int sumSquareEvenNumbers(int firstNum, int secondNum, int sum)
{	int i=firstNum;	
	//using while loop
	while(i<=secondNum)
	{
		//condition for even no.
		if(i%2==0)
		{sum=(i*i)+sum;
		
		}		
		
	i++;
	}
	cout<<"the sum of square of all even no.s is:"<<sum<<endl;	
}
	
/* Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers().
*/
int sumSquareOddNumbers(int firstNum, int secondNum, int sum)
{	int i=firstNum;	
	//using while loop
	while(i<=secondNum)
	{
		//condition for odd no.
		if(i%2!=0)
		{sum=(i*i)+sum;
		
		}		
		
	i++;
	}
	cout<<"the sum of square of all odd no.s is:"<<sum<<endl;	
}





int main()
{
	int a,b,c=0;
	cout<<"enter the first and second no."<<endl;
	cin>>a>>b;
 	
	sumEvenNumbers(a,b,c);
	sumOddNumbers(a,b,c);
	sumSquareEvenNumbers(a,b,c);
	sumSquareOddNumbers(a,b,c);
}





























