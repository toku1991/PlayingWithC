#include <stdio.h>
#include "ExternalFunctions.h"

long double power,volt,ampere,resistance,output;
int choice,result,Presult,Vresult,Aresult,Rresult,c;


int main() {
    do{
        printf("What do you want to calculate?\n1: Resistance\n2: Voltage\n3: Amperage\n4: Power\n");
        result = scanf("%d", &choice);
        if (result == 1) {
            if (choice > 0 && choice <= 4) {
                switch (choice) {
                    case 1:
                        Resistance();
                        break;
                    case 2:
                        Voltage();
                        break;
                    case 3:
                        Ampere();
                        break;
                    case 4:
                        Power();
                        break;
                }
            }
            else
            {
                printf("invalid input choose a number between 1 and 4\n");
                continue;
            }

        } else {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        };
    }
    while (1);
}
