#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int choice;
	long num1,num2, x;
	
	     cout<<"A Calculator for simple operations"<<endl;
	cout<<"********************************************************"<<endl;
	
	cout<<"Please choose your option:- "
	    "\n1 = Addition"
	    "\n2 = Subtraction"
	    "\n3 = Multiplication"
	    "\n4 = Division"
	    "\n5 = Modular Division"
	    "\n6 = Squares"
	    "\n7 = Cubes"
	    "\n8 = Swapping"
	    "\n9= Average of Two Numbers"
	    "\n10= Exit"
	    "\n\nChoice : ";
	    
	    cin>>choice;
	    
	    while(choice <1 || choice >10)
	    {
	    	cout<<"\nPlease Choose the above Mentioned Option."
	    	"\nChoice : ";
	    	cin>> choice;
        }

switch( choice )
{
	//Addition
	case 1:
		cout<<"Enter two Numbers : \n";
		cin>>num1 >>num2;
		x=num1+num2;
		cout<<" Sum = "<<x;
		break;
		
	//Subtraction
	case 2:
		cout<<"Enter two Numbers: \n";
		cin>> num1 >>num2;
		x=num1-num2;
		cout<<" Subtraction = "<<x;
		break;
		
	//Multiplication
	case 3:
		cout<<"Enter two Numbers: \n";
		cin>> num1 >>num2;
		x=num1*num2;
		cout<<"Multiplication = "<<x;
		break;
		
	//Division
	case 4:
		cout<<"Enter Dividend: ";
		cin>>num1;
		cout<<"Enter Divisor: ";
		cin>>num2;
	
	    //while loop checks whether divisor is zero or not
	    while( num2 ==0)
	    {
	    	cout<<"\nDivisor cannot be zero. "
	    	"\nEnter Divisor once Again: ";
	    	cin>>num2;
		}
		x=num1 / num2;
		cout<<"\nQuotient = "<<x;
		break;
				
	//Modular Division
	case 5:
		cout<<"Enter Dividend: ";
		cin>>num1;
		cout<<"Enter Divisor: ";
		cin>>num2;
		
		//while loop checks whether divisor is zero or not
		while( num2 ==0)
		{
			cout<<"\nDivisor cannot be zero. choice"
			"\nEnter Divisor once again: ";
			cin>>num2;
		}
		x=num1 % num2;
		cout<<"\nRemainder = "<<x;
		break;
		
	//Squares
	case 6:
		cout<<"Enter two Numbers: \n";
		cin>> num1 >>num2;
		x=num1 * num1;
		cout<<"Square = "<<x;
		break;
		
	//Cubes
	case 7:
		cout<<"Enter Two Numbers: \n";
		cin>> num1 >>num2;
		x=num1 * num1 *num1;
		cout<<"Cubes = "<<x;
		break;
		
	//Swapping
	case 8:
		cout<<"Enter two Numbers: \n";
		cin>> num1 >>num2;
		swap(num1, num2);
		cout<<"1st Number ="<<num1<<"2nd Number = "<<num2;
		break;
		
	//Average of Two Numbers
	case 9:
		cout<<"Enter two Numbers: \n";
		cin>> num1 >>num2;
		x=(num1 +num2)/2;
		cout<<"Average of Two Numbers: "<<x;
		break;
		
	//Default
	case 10:
		return 0;
		
	default: cout<<"\nError";

}

}
