#include<iostream>
using namespace std;
main()
{
	int a, b;
	cout<<"Enter 1st number : ";
	cin>>a;
	cout<<"Enter 2nd number : ";
	cin>>b;
	if (a>b)
	 cout<<a<<" is greater than "<< b;
	if (a<b)
	cout<<b<<" is greater than "<<a;
	else
	 cout<<a<<" is equal to "<<b;
}
