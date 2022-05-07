//
//  main.c
//  Algoritmo maiormenor
//
//  Created by Rafael Queiroz on 06/05/2022.
//

#include <stdio.h>

int main (){
    int num1, num2, num3, num4, num5, maior, menor ;
    
    printf ("Inform the first number:\n");
    scanf ("%d", &num1) ;
    printf ("Inform the second number:\n");
    scanf ("%d", &num2);
    printf ("Inform the third number:\n");
    scanf ("%d", &num3);
    printf ("Inform the forth number:\n");
    scanf ("%d", &num4);
    printf ("Inform the fith number:\n");
    scanf ("%d", &num5);
    
    if (num1 > num2)
    {maior = num1;}
        else
        {maior = num2;}
    if (maior < num3)
    {maior = num3;}
    if (maior < num4)
    {maior = num4;}
    if (maior < num5)
    {maior = num5;}
    
    if (num1 < num2)
    {menor = num1;}
        else
        {menor = num2;}
    if (menor > num3)
    {menor = num3;}
    if (menor > num4)
    {menor = num4;}
    if (menor > num5)
    {menor = num5;}
    
    printf ("The highest number informed was: %d\n", maior);
    printf ("The lowest number informed was: %d\n", menor);
}
