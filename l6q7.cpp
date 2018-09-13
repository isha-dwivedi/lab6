//UpperCase and LowerCase
#include<iostream>
using namespace std;
//a user-defined function toUpper() that returns the uppercase of the inputChar received
char toUpper(char c)
{
	//upper case conversion
	c=c-32;
	return c;}

//a user-defined function toLower() that returns the lowercase of the inputChar received. 
char toLower(char c)
{	//lower case conversion
	c=c+32;
	return c;
}
// a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
int main()
{
	char ch, result;
	cout<<"enter the character"<<endl;
	cin>>ch;
	//to check if letter is lowercase
	if(ch>='a' && ch<='z')
	{	cout<<"the character is in lower case"<<endl;
		result=toUpper(ch);
		cout<<"the uppercase of given character is:"<<result<<endl;
	}
	//to chek if letter is uppercase
	else if(ch>='A' && ch<='Z')
	{	cout<<"the letter is in upper case"<<endl;
	
		result=toLower(ch);
		cout<<"the lowercase latter is:"<<result<<endl;
	}
	else
		cout<<"the chracter entered is not alphabet";
	
}


















	
