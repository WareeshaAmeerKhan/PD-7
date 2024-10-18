#include<iostream>
using namespace std;

void amplify(int high
er_bound);

main()
{
	int higher_bound;

	cout<<"Enter the number to amplify: ";
	cin>>higher_bound;

	amplify(higher_bound);
}

void amplify(int higher_bound)
{
	for(int inner_bound=1; inner_bound<=higher_bound; inner_bound++)
	{
		if(inner_bound%4==0)
		{
			cout<<inner_bound*10<<" ";
		}
		else
		{
			cout<<inner_bound<<" ";
		}
	}
}