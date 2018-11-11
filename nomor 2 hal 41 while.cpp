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
	while (a<=n)
	{
		nilai=nilai+a;
		a++;
	}
	cout<<"Total Bilangan= "<<nilai<<endl;
	return 0;
}
