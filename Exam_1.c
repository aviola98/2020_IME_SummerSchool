// Questão 1

#include <stdio.h>
int main(){
	
	//diferentes provas tem diferentes valores
	//int n=22, i=4, a=1, b=0; //versao 1
	int n=23, i=5, a=1, b=0; //versao 2
	//int n=24, i=6, a=1, b=0; //versao 3
	//int n=25, i=7, a=1, b=0; //versao 4

	while(b>=0){
		if(i%2==0){
			i=i+1;
			n=n-3;
		}else{
			i=i+3;
			n=n-1;
		}
		b=a;
		a=a+(n-2*i);
		printf("n=%d, i=%d, a=%d, b=%d\n", n,i,a,b); // comentário extra
		printf("%d\n", (n%7+3)*7);
	}

	return 0;
}


// Questão 2

#include <stdio.h>

int main(){

int fim=0, ganha1=0, total=0, j1, j2;

while(fim==0){
	printf("Partida %d\n", total);
	scanf("%d", &j1);
	scanf("%d", &j2);
	if(j1<0 || j2<0){
		fim=1;
	}else{
		if((j1+j2)%2==0)
			ganha1 = ganha1 + 1;
		total = total + 1;
	}
}
printf("J1: %d de %d\n", ganha1, total);

return 0;

}


// Questão 3

#include <stdio.h>
int main(){

	//int cpf, DVs, s1, s2, i, base, r, DV1, DV2, reg; // <- codigo da prova
	int DVs, s1, s2, i, base, r, DV1, DV2, reg; long cpf; // <- codigo adaptado
	
	//scanf("%d", &cpf); // <- codigo da prova
	scanf("%ld", &cpf); // <- codigo adaptado

	printf("%ld\n", cpf); // comentario extra

	DVs=cpf%100;
	base = cpf/100;
	s1=s2=0; i=9;
	while(base > 0){
		r = base % 10;
		s1 = s1 + r*i;
		s2 = s2 + r*(i-1);
		base = base/10;
		i=i-1;
	}
	DV1=(s1%11)%10;
	s2 = s2 + DV1*9;
	DV2=(s2%11)%10;
	reg=(cpf/100)%10;
	if((reg==0 || reg==9) && DVs==(DV1*10+DV2)){
		printf("DVs:%d, DV1:%d, DV2:%d\n", DVs, DV1, DV2); // comentario extra
		printf("CPF válido da região sul do Brasil\n");
	}else{
		printf("DVs:%d, DV1:%d, DV2:%d\n", DVs, DV1, DV2); // comentario extra
		printf("CPF inválido\n"); // comentario extra
	}

	return 0;
}


// Questão 4

#include <stdio.h>
int main(){

	int n, d_copia, d, par=1, dig, True=1, False=0;

	scanf("%d", &n);

	while(n>0){
		scanf("%d", &d_copia);
		d=d_copia;
		n=n-1;

		par=False;
		while(d>0 && !par){
			dig=d%10;
			if(dig%2==0)
				par=True;
			d=d/10;
		}
	
		if(d_copia==0 || par)
			printf("%d nao tem apenas digitos impares\n", d_copia);
		else
			printf("%d tem apenas digitos impares\n", d_copia);
	}
	
	return 0;
}