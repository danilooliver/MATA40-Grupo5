/*

2. Fa�a um programa que receba tr�s notas de um aluno, calcule e mostre a m�dia aritm�tica e a 

mensagem constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a 

nota que dever�o tirar para serem aprovados, considerando que a m�dia exigida � 6,0. 

M�dia Aritm�tica  |   Mensagem

  0 a 3           |  Reprovado

  3 a 7          |   Exame 

  7 a 10        |   Aprovado

*/



#include <stdio.h>

float fun (float n1, float n2, float n3){
	float media;
	media = ((n1+n2+n3)/3);
	return media;
}

main(){
	
	float n1, n2, n3, media;
	
	scanf ("%d %d %d",&n1,&n2,&n3);
	media = fun (n1, n2, n3);
	
	
	if (media >= 7)
		printf ("Aprovado, sua media foi %d.\n", media);
	else if ((3 >= 7) && (media < 7))
		printf ("Exame, sua media foi %d e precisa tirar %d no exame para ser aprovado\n", media, ((n1+n2+n3)/4) );
	else
		printf (Reprovado, sua media foi %d.\n", media);
		
	return 0;
}
