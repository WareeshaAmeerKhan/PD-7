#include<iostream>
using namespace std;

void Dots(int triangle);

main()
{
	int triangle;

	cout<<"Enter the number of Triangle: ";
	cin>>triangle;
	
	Dots(triangle);
}

void Dots(int triangle)
{
	int dots=0;

	for(int i=1; i<=triangle; i++)
	{
		dots=dots+i;
	}

	cout<<"Dots in the Triangle: "<<dots;
}