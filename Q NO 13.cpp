#include<iostream>
#include<string>
using namespace std;
main()
{
	char a[]="Jan",b[]="Feb",c[]="March",d[]="April",e[]="May",f[]="June",g[]="July",h[]="August",i[]="Sept",j[]="Oct",k[]="Nov",l[]="Dec";
	int a1, b1;
	cout<<"Enter Month :";
	cin>>a1;
	if((a1>0)&& (a1<13)){
	 if (a1==1)
	  cout<<a<<"\n";
	 if (a1==2)
	  cout<<b<<"\n";
	 if (a1==3)
	  cout<<c<<"\n";
	 if (a1==4)
	  cout<<d<<"\n";
	 if (a1==5)
	  cout<<e<<"\n";
	 if (a1==6)
	  cout<<f<<"\n";
	 if (a1==7)
	  cout<<g<<"\n";
	 if (a1==8)
	  cout<<h<<"\n";
	 if (a1==9)
	  cout<<i<<"\n";
	 if (a1==10)
	  cout<<j<<"\n";
	 if (a1==11)
	  cout<<k<<"\n";
	 if (a1==12)
	  cout<<l<<"\n";}
	else{
	 cout<<"Invalid Month \n";}
    cout<<"Enter Day of Month : ";
	cin>>b1;
	if ((b1>=1) && (b1<=31))
	 cout<<b1;
	else
	 cout<<"Invalid Day";
	
	
	
}
