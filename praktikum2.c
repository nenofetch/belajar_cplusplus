#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
main()
{
	int b;
	float d;
	char h;
	puts(" Masukkan Angka dan Huruf  ");
	cout << " Bilangan Bulat = " ;
	cin >>b;
	cout << " Masukkan Bilangan Pecahan/Desimal = ";
	cin >> d;
	cout << " Masukkan Sebuah Huruf : ";
	cin >> h;
	getch();
	cout << "Contoh Bilangan Bulat adalah " << b << endl;
	cout << "Contoh Bilangan Pecahan/Desimal adalah " << d << endl;
	cout << "Contoh Huruf adalah " << h;
}
