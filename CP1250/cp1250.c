#include <stdlib.h>
#include <stdio.h>

void main(void)
{
	int znak;
	system("color 9f"); 
	system("mode con lines=29 cols=124");
	system("chcp 1250");
	do 
	{
		printf("Vlo� znak a stiskni kl�vesu Enter(cyklus ukon�i stiskem q): ");
		znak = getchar();
		printf("\n Stisknul jsi znak %c s ascii k�dem %d. \n", znak, znak);
	} while (znak != 'q');
}