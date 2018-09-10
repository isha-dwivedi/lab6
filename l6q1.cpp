/* Tax Rate Calculation using Functions 

*/
#include<iostream>
using namespace std;

/* a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
*/
int input( int &unitCst,int &units, int &taxRt)  
{
	cout<<"enter  unitCst, units, and taxRt "<<endl;
	cin>>unitCst>>units>>taxRt;
	cout<<"unitCst"<<unitCst<<endl<<"units"<<units<<endl<<"taxRt"<<taxRt<<endl; 
}

/*a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue
*/
int calcTax(int unitCst,int units, int taxRt, int &salesTx, int &totDue)
{	input( unitCst, units, taxRt);
	salesTx=(unitCst*units*taxRt)/100;
	totDue=(unitCst*units)+salesTx;
	
}
	

int main()
{
/*Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue
*/
	int unitCost, unitsPurch, taxRate, salesTax, totalDue;
 	calcTax(unitCost, unitsPurch, taxRate, salesTax, totalDue);
	cout<<"sales tax:"<<salesTax<<endl<<"tatalDue:"<<totalDue<<endl;
	
	
}
	

