#include <stdio.h>
#include <conio.h>
main()
{
	int b;
	float d;
	char h;
	printf("Masukkan Sebuah Karakter : ");
	h = getchar();
	getch();
	puts("Masukkan Bilangan Bulat ");
	printf("Bilangan Bulat = ");
	scanf("%d",&b);
	printf("Masukkan Bilangan Pecahan/Desimal = ");
	scanf("%f",&d);
	getch();
	printf("\nContoh Bilangan Bulat adalah %d\n",b);
	printf("\nContoh Bilangan Pecahan/Desimal adalah %3.2f\n",d);
	printf("\nContoh Karakter adalah %c",h);
}
