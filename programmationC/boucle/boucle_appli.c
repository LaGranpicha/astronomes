#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 10

//question 1

int main () {

//Boucle
/*
int i=20;
i=1; // initialisation
while (1.0/i > 0.1){
        printf("1/%d vaut %lf \n", i, 1.0/i); 
        i=i+1; //avancée du compteur de boucle
}
*/

//Question 2
//tableau de valeurs

double tab[N];
printf("Indiquez les 10 valeurs du tableau :\n");

int i;

for(i=N-1; i>=0; i=i-1){
	scanf("%lf",&tab[i]);
}

printf("Tableau :\n");

for (i=0; i < N ; i=i+1)
	printf("%lf\n", tab[i]);
}
