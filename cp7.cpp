#include<iostream>
using namespace std;

void hospital(int days);

main()
{
	int days;
	cout<<"Enter Number of days you visited Hospital: ";
	cin>>days;
	hospital(days);
}

void hospital(int days)
{
	int treated_patients=0;
	int untreated_patients=0;
	int doctors=7;
	int x=1;
	
	for(x=1; x<=days; x++)
	{
		int total_patients;
		cout<<"Number of patients who visited hospital on Day "<<x<<" : ";
		cin>>total_patients;

		if(x%3==0 && x!=0)
		{
			if(untreated_patients>treated_patients)
			{
				doctors++;
			}
		}
		
		if(total_patients<doctors)
		{
			treated_patients+=total_patients;
		}
		else
		{
			treated_patients+=doctors;
			untreated_patients+=total_patients-doctors;
		}
	}
		
	cout<<"Treated Patients: "<<treated_patients<<endl;
	cout<<"Untreated Patients: "<<untreated_patients;
}