#include <stdio.h>
#include "Variables.h"

int Charge()
{
    do {
        printf("What is your capacitance?\n");
        Vresult = scanf("%Lf", &volt);  // Read voltage input.
        printf("What is your amperage?\n");
        Fresult = scanf("%Lf", &farad);  // Read amperage input.

        // Check if the input values are valid.
        if (Vresult == 1 && Fresult == 1) {
            if (volt <= 0 || farad <= 0) {
                if (volt <= 0) {
                    while ((c = getchar()) != '\n' && c != EOF);
                    printf("Voltage cannot be empty or equal to/lower than zero.\n");
                    continue;  // Go back to input if voltage is invalid.
                }
                if (farad <= 0) {
                    while ((c = getchar()) != '\n' && c != EOF);
                    printf("Capacitance cannot be empty or equal to/lower than zero.\n");
                    continue;  // Go back to input if amperage is invalid.
                }
            } else {
                output = farad * volt;// Calculate resistance and display it in various units.
                if (output < 0.0000001) {
                    printf("%0.0Lf %s\n", output * 1e9, "nC"); // Convert to nanoohms.
                    printf("%0.9Lf %s\n", output, "Coulomb"); // Display in ohms.
                } else if (output < 0.0001) {
                    printf("%0.0Lf %s\n", output * 1e6, "uF"); // Convert to microohms.
                    printf("%0.9Lf %s\n", output, "Coulomb"); // Display in ohms.
                } else if (output < 1) {
                    printf("%0.0Lf %s\n", output * 1e3, "mF"); // Convert to milliohms.
                    printf("%0.9Lf %s\n", output, "Coulomb"); // Display in ohms.
                } else if (output < 1000) {
                    printf("%0.3Lf Coulomb\n", output);  // Display in ohms with 3 decimal places.
                } else if (output < 1000000) {
                    printf("%0.3Lf KC\n", output);  // Display in kiloohms with 3 decimal places.
                } else if (output > 1000000) {
                    printf("%0.3Lf MC\n", output);  // Display in megaohms with 3 decimal places.
                }
                break;  // Exit the do-while loop.
            }
        } else {
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Invalid input. Please enter a valid number.\n");
            continue;  // Go back to input if input is invalid.
        }
    } while (1);  // Infinite loop until a valid calculation is made.
    return 0;  // Exit the Resistance function.

}