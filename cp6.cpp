#include<iostream>
using namespace std;

bool isPrime(int num)
{	
	bool result;
	result=1;
	for(int i=2;i<num;i++)
	{
	   if(num==2)
	   {
		result=1;
	   }
	   else
	   {
		if(num%i==0)
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

int primorial(int n) {
    int product = 1;
    int i = 0;
    int num = 2;

    while (i < n) 
    {
        if (isPrime(num))
        {
            product*= num;
            i++;
        }
        num++;
    }

    return product;
}

int main() 
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout<<primorial(n);

}