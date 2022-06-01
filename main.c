#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "dataType.h"

int main() {

    int n;

    printf("***********************************\n");
    printf("*                                 *\n");
    printf("*        BOOK REPOSITORY          *\n");
    printf("*                                 *\n");
    printf("***********************************\n");

    do{
        printf("\n1) Add book \n");
        printf("2) Print all books \n");
        printf("3) Delete book \n");
        printf("4) Print autor \n");
        printf("5) Print genre \n");
        printf("6) Print year \n");
        printf("7) Book search \n");
        printf("8) Delete repository \n");
        printf("9) Search \n");
        printf("10) Save changes & Exit \n");

        do {
            printf("\nEnter number: ");
            scanf("%d", &n);
            getchar();
        }while (n<1 || n>10);


    }while(n != 10);

    return 0;
}
