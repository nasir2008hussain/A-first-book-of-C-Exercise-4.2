#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int a;
	float sq, rec;
	cout<<"Enter your number : ";
	cin>>a;
	if (a>=0)
	{ sq=sqrt(a);
	 cout<<"Square root is : "<<sq<<"\n";}
	 else{
	 cout<<"Square root can't be calculated \n";
	}
	if (a!=0)
	{
	  rec=(1.0/a);
	  cout<<"Reciprocal is : "<<rec;}
	  else{
	  cout<<"Reciprocal can't be calculated";	
	}
}



