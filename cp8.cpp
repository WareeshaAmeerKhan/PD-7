#include<iostream>
#include<iomanip>
using namespace std;

float cargo(int x);

main()
{
	int x;
	float output;

	cout<<"Enter the count of cargo for transportation: ";
	cin>>x;

	output=cargo(x);
	cout <<output<<endl;
}

float cargo(int x)
{
	int tonnage,total=0;
	float minibus,truck,train;
	float USD,usd1,usd2,usd3;

	for(int i=1; i<=x; i++)
	{
		cout<<"Enter the tonnage of cargo "<<i<<": ";
		cin>>tonnage;
		
		total+=tonnage;
		
		if(tonnage<=3)
		{
			minibus+=tonnage;
		}

		else if(tonnage>3 && tonnage<=11)
		{
			truck+=tonnage;
		}

		else if(tonnage>11)
		{
			train+=tonnage;
		}
		usd1=minibus/total*100;
		usd2=truck/total*100;
		usd3=train/total*100;
		USD=((usd1*200)+(usd2*175)+(usd3*120))/100;
	}
	cout<<fixed<<setprecision(2)<<USD<<"%\n"<<fixed<<setprecision(2)<<usd1<<"%\n"<<fixed<<setprecision(2)<<usd2<<"%\n"<<fixed<<setprecision(2)<<usd3<<"%";
}

