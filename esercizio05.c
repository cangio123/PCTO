#include <stdio.h>
int main()
{ 
    int numero1, numero2; 
    printf("inserire numero\n");
    scanf("%d", &numero1);
    
    printf("inserire numero\n");
    scanf("%d", &numero2); 
    int somma= numero1 + numero2;
    int moltiplicazione= numero1 * numero2;
    int divisione= numero1 / numero2;
    int differenza= numero1 - numero2;
    int resto_divisione=numero1 % numero2;
    printf("somma %d\n",somma);
    printf("moltiplicazione %d\n",moltiplicazione);
    printf("divisione %d\n",divisione);
    printf("differenza %d\n",differenza);
    printf("resto_divisione %d\n",resto_divisione);
    
   
    return(0);
}