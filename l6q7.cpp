//UpperCase and LowerCase
#include<iostream>
using namespace std;
/*Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
*/
 char toUpper(char lowerCase,  char upperCase ) 
{	int(upperCase) = int(lowerCase)-32;
	
	
	return upperCase; 
}
/* Write a user-defined function toLower() that returns the lowercase of the inputChar received
*/
char toLower(char upperCase, char lowerCase ) 
{	int(lowerCase) = int(upperCase)+32;
	
	
	return lowerCase; 
}

int main()
{ char ch,alph,result;
cout<<"Enter any Alphabet:”;
cin>>ch;

if(ch>='a’&&ch<=’z’)
{
cout<<"You have entered a lowercase alphabet"<<endl;
result=toUpper(ch,alph);
cout<<"the uppercase of given character is:"<<result<<endl;

}
else
{
cout<<"You have entered an Uppercase alphabet";

result=toLower(ch,alph);
cout<<"the lowecase of given character is:"<<result<<endl;
}
} 

