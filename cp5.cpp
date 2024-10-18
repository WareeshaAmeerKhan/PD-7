#include<iostream>
using namespace std;

bool isPrime(int number);

main()
{
	int number;
	bool output;

	cout<<"Enter a number: ";
	cin>>number;

	output=isPrime(number);
	cout<<output;
}

bool isPrime(int number)
{	
	bool result;
	result=1;
	for(int i=2;i<number;i++)
	{
	   if(number==2)
	   {
		result=1;
	   }
	   else
	   {
		if(number%i==0)
		{
			result=0;
			break;
		}
		else
		{
			continue;
		}
	    }
	}

	return result;
}