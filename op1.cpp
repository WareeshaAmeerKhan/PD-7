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
	for(int row=rowSize; row>=1; row--)
	{
		for(int col=1; col<=row; col++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}