#include<iostream>
using namespace std;
main()
{
	int money=25000000, numYears;
	int interest;
	cout<<"Enter your Year : ";
	cin>>numYears;
	if (numYears>5)
	 
	 {
	 interest=((4.5/100.0)*money);
	cout<<"Your Interest is : "<<interest;
     }
	if (numYears<5)
	{
	  interest=((3.0/100)*money);
	 cout<<"Your Interest is : "<<interest;
	 
     }
}
