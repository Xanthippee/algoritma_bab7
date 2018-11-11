#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int a, n;
	float nilai, rata;
	nilai=0;
	cout<<"Masukkan Nilai = ";
	cin>>n;
	while (a<=n)
	{
		nilai=nilai+a;
		a++;
	}
	cout<<"Nilai Total = "<<nilai<<endl;
	rata=nilai/n;
	cout<<"Rata-rata = "<<rata;
}
