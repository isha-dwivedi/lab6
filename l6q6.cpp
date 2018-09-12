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
	return sumEven;
		
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
	return sumOdd;
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
	return sum;	
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
	return sum;	
}





int main()
{
	int a,b,c=0,sumEven,sumOdd, sumSquareEven, sumSquareOdd ;
	cout<<"enter the first and second no."<<endl;
	cin>>a>>b;
 	sumEven=sumEvenNumbers(a,b,c);
	cout<<"the sum of all even no.s is:"<<sumEven<<endl;;
	sumOdd=sumOddNumbers(a,b,c);
	cout<<"the sum of all odd no.s is:"<<sumOdd<<endl;
	sumSquareEven=sumSquareEvenNumbers(a,b,c);
	cout<<"the sum of square of all even no.s is:"<<sumSquareEven<<endl;
	sumSquareOdd=sumSquareOddNumbers(a,b,c);
	cout<<"the sum of square of all odd no.s is:"<<sumSquareOdd<<endl;
}





























