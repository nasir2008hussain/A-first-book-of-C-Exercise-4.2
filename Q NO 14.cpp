#include<iostream>
using namespace std;
main()
{
	char ch;
	cout<<"Enter the Character : ";
	cin>>ch;
	if ((ch>='a')&& (ch<='z'))
	 cout<<"The character just entered is a lowercase letter.";
	else
	cout<<"The character just entered is not a lowercase letter.";
}
