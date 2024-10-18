#include<iostream>
using namespace std;

void printAsterisk(int rowSize);

main()
{
	int rowSize;
	cout<<"Enter desired number of rows: ";
	cin>>rowSize;
	printAsterisk(rowSize);
}

void printAsterisk(int rowSize)
{
	for(int row=rowSize/2; row>=1; row--)
	{
		for(int col=1; col<=rowSize/2; col++)
		{
			if(col<row)
				cout<<" ";
			else
				cout<<"*";
		}
		cout<<endl;
	}

	for(int row=1; row<=rowSize/2; row++)
	{
		for(int col=1; col<=rowSize/2; col++)
		{
			if(col<row)
				cout<<" ";
			else
				cout<<"*";
		}
		cout<<endl;
	}

}