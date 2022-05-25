#include<iostream>
using namespace std;
main()
{  
    int a,b;
    float c,salary;
	cout<<"Enter your working hour weekly : ";
	cin>>a;
	if (a<=40)
	 {
	 salary=(a*12.00);
	 cout<<"Your Salary is : "<<salary;}
	if (a>40)
	 {
	 b=(a-40);
	 c=(b*18.00);
	 salary=(480.00+c);
	 cout<<"Your Salary is : "<<salary;
}
	 
}
