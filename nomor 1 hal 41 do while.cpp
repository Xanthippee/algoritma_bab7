#include <stdio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int x=125;
	cout<<"Bilangan Kelipatan 5 antara 125 sampai 200"<<endl;
	cout<<"=============="<<endl;
	do
	{
		cout<<x<<endl;
		x+=5;
	}
	while(x <= 200);
	cout<<"==============";
}
