#include <stdio.h>
double mayor();
double menor(double *matriz, int longitud);
int main(void){

    double v1[]={
0.3,
0.02742,
0.05504,
0.32308,
0.04643,
0.01791,
0.09555,
13344,
303123,
0.009,
0.01533,
};

int longitud=sizeof(v1)/sizeof(v1[0]);

printf("el tamaño del vector es: %d",longitud);

printf("\n\nEL mayor es: %lf", mayor(v1, longitud) );

printf("\n\nEL menor es: %lf", menor(v1, longitud) );

}

double mayor(double *matriz, int longitud){
    int i;
    double max=*matriz, temp ;
    for(i=1;i<longitud;i++)
    {
      if(max <= *matriz)
      {
     temp = max;
     max = *matriz;
     *matriz = temp;
     }
     matriz++;
   }
    return max, i;
}

double menor(double *matriz, int longitud){
    int i;
    double min=*matriz, temp ;
    for(i =1;i<longitud;i++) { 

    if(min >= *matriz){
        temp = *matriz;
        *matriz = min;
        min = temp;
    }
     matriz++;
   }
    return min, i;
}


