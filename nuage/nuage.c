#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float f(float x) {
    return exp(-(1/9E36)*x*x);
}

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




int main () {
    float a=-3.086E18;
    float b=3.086E18;
    float n=100000;
    float Tau=5000*(3E-21)*rectangle(a,b,n);
printf("La pronfondeur optique est de :%f\n",Tau);
float A=2.5*log10(exp(Tau));
printf("A vaut :%f\n",A);
}