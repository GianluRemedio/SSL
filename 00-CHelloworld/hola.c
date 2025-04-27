#include <stdio.h>

int main(void){
char nombre[100] ;
int edad = 0;
printf("Cuál es tu nombre?\n");
scanf ("%s", nombre); 
printf("Cuál es tu edad?\n");
scanf("%d", &edad); 
printf("Bienvenido %s, %d \n", nombre,edad);
return 0;

}