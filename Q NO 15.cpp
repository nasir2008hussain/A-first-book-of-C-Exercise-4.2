#include<iostream>
using namespace std;
main()
{
	char ch;
	int post;
	cout<<"Enter the Character : ";
	cin>>ch;
	if ((ch>='a')&&(ch<='z'))
	 {
	 post=((ch-'a')+1);
	 cout<<"'"<<ch<<"'"" Is lower case letter and its position is : "<<post;}
	if ((ch>='A')&&(ch<='Z'))
	 {
	 post=((ch-'A')+1);
	 cout<<"'"<<ch<<"'"<<" Is Upper case letter and its position is : "<<post;}
}
