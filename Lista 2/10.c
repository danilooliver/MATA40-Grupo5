/*

10. Fa�a um programa que determine a data cronologicamente maior entre duas datas fornecidas 

pelo usu�rio. Cada data deve ser composta por tr�s valores inteiros, em que o primeiro 

representa o dia, o segundo, o m�s e o terceiro, o ano.

*/

#include <stdio.h>

main(){
	int d1, m1, a1;
	int d2, m2, a2;
	
	scanf ("%d %d %d", &d1,&m1,&a1);
	scanf ("%d %d %d", &d2,&m2,&a2);
	
	if (a1 < a2){
		printf ("%d/%d/%d � maior",d1,m1,a1);
	}
	else if (a1 > a2){
		printf ("%d/%d/%d � maior",d2,m2,a2);
	}
	else{
		if (m1<m2){
			printf ("%d/%d/%d � maior",d1,m1,a1);
		}
		else if (m1>m2){
			printf ("%d/%d/%d � maior",d2,m2,a2);
		}
		else{
			if (d1<d2){
				printf ("%d/%d/%d � maior",d1,m1,a1);
			}
			else if (d1>d2){
				printf ("%d/%d/%d � maior",d2,m2,a2);
			}
			else{
				printf ("Corresponde ao mesmo dia");
			}
		}
	}
	return 0;
}
