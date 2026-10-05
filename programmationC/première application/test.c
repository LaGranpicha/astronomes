//Mise en application
#include <stdio.h>
#include <stdlib.h>

int main () {

/*
//Question 1

//Variables / Entrées

int i,j;
int s,d,p;
float r;

printf("Entrez deux entiers i et j :\n");
scanf("%d %d",&i,&j);

//Question 2

s=i+j;
d=i-j;
p=i*j;
r=i*1./j;

printf("La somme est de %d\n",s);
printf("La différence est de %d\n",d);
printf("Le produit est de %d\n",p);
printf("Le rapport est de %f\n",r);
*/
//Question 3

float x=1/3.;
double y=1/3.;

printf("La valeur de x est : x=%1.19f\n y=%1.19f",x,y);

/*
//Question 4

int i=1;
float x=1./3;

printf("i au format réel vaut : i=%f",i);
*/
//Question 6

FILE *fich;
fich = fopen("resultats.txt","w");
fprintf(fich,"%f", x);
fclose(fich);
}
