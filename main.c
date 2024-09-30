#include <stdio.h>

int main(void) {
    int myNumbers[4];
    int sum = 0;
    int prodotto = 1;

    printf("Inserire i tre numeri \n");
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("Inserire numero: [%d] \n", i);
        scanf("%d", &myNumbers[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        sum = sum + myNumbers[i];
        prodotto = prodotto * myNumbers[i];
    }

    printf("Somma: [%d] \n" , sum);
    printf("Media: [%d] \n" , sum / 3);
    printf("Prodotto: [%d] \n" , prodotto);




    // tre numeri diversi somma media e prodotto
    return 0;
}
