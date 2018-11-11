#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int a,n;
	float nilai=0;
	cout<<"Masukkan Bilangan = ";
	cin>>n;
	do
	{
		nilai=nilai+a;
		a++;
	}
	while (a<=n);
	cout<<"Total Bilangan= "<<nilai<<endl;
	return 0;
}
