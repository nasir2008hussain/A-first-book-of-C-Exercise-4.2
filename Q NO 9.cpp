#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter your Year : ";
	cin>>a;
	if (a%400==0 || a%4==0 && a%100!=0)
	 cout<<a<<" is a leap year";
	else
	 cout<<a<<" is not a leap year";
}
