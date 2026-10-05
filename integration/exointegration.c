//Exercice d'intégration et nuage stellaire

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//fonction à intégrer
float f(float x) {
    return exp(-(1/(3*10^18)^2)*x*x);
}


//Méthode des rectangles
float rectangle(float a,float b,int n) {
    float h=1.0*(b-a)/n;
    //somme
    float S;
    //Coordonnées
    float y;
    //Itérations
    int i;
    //Boucle
    for (i=0; i<n; i=i+1){
        S=S+f(a+i*h);
    }
    return S*h;
}

//Méthode des trapèzes
float trapeze(float a,float b,int n) {
    float h=1.0*(b-a)/n;
    //intégrale
    float S=0;
    //Itérations
    int i;
    //Boucle
    for (i=0; i<n; i=i+1){
        S=S+f(a+i*h)+f(a+(i+1)*h);
    }
    return S*h/2;
}

//Méthode de simpson
float simpson(float a,float b,int n) {
    float h=1.0*(b-a)/n;
    //intégrale
    float I=f(a)+f(b);
    //Itérations
    int i;
    //Boucle
    for (i=1; i<n; i=i+1){
        if (i%2 != 0) {
            I=I+4*f(a+i*h);
        }
        else {
            I=I+2*f(a+i*h);
        }
    }
    return I*h/3;
}


/*/
//Intégrale et enregistrement des résultats
int main() {
//Intégrale sinus entre 0 et pi/*2
int a=0;
float b=M_PI/2;
int n=10;
//Rectangle
float I=rectangle(a,b,n);
printf("Avec la méthode des rectangles : %f\n",I);
//Trapèzes
float I2=trapeze(a,b,n);
printf("Avec la méthode des trapèzes : %f\n",I2);
//Simpson
float I3=simpson(a,b,n);
printf("Avec la méthode de simpson : %f\n",I3);
}
/*/

int main () {
    float a=3.086E18;
    float b=-3.086E18;
    float n=2*a/1000;
    float prof_optique=5000*(3E-21)*simpson(a,b,n);
printf("La pronfondeur optique est de :%f\n",prof_optique);
printf("n vaut :%f",n);
}