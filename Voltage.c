#include "Variables.h"  // Include a header file (assuming it declares some necessary variables).
#include <stdio.h>      // Include the standard input-output library.
#include <math.h>

long double convertAmpere(long double value)
{

    switch (unit1) {
        case 1:
            return value * 1e-9;
        case 2:
            return value * 1e-6;
        case 3:
            return value * 1e-3;
        case 4:
            return value;
        default:
            printf("error");
    }
}
long double convertResistance(long double value)
{

    switch (unit2) {
        case 1:
            return value * 1e-9;
        case 2:
            return value * 1e-6;
        case 3:
            return value * 1e-3;
        case 4:
            return value;
        default:
            printf("error");
    }
}

// Function for calculating voltage based on user input.
int Voltage() {
    do {
        printf("How do you want to calculate voltage?\n1: Ampere and Resistance\n2: Power and Amperage\n3: Power and Resistance\n4: Charges and Capacitance\n");
        result = scanf("%d", &choice);  // Read the user's choice for voltage calculation.
        if (result == 1) {   // Check if the user's choice is valid.
            if (choice > 0 && choice < 5) {
                switch (choice) {
                    case 1:
                        printf("choose  your unit of input\n1:nA\n2:uA\n3:mA\n4:A\n");
                        result = scanf("%d", &unit1);
                        if (result == 1) {
                            printf("What is your amperage?\n");
                            Aresult = scanf("%Lf", &ampere);  // Read amperage input.
                            if (ampere <= 0) {
                                while ((c = getchar()) != '\n' && c != EOF);
                                printf("Voltage cannot be empty or equal to/lower than zero.\n");
                                continue;  // Go back to input if voltage is invalid.
                            } else {
                                ampere = convertAmpere(ampere);
                            }
                        } else {
                            while ((c = getchar()) != '\n' && c != EOF);
                            printf("Invalid input. Please enter a valid number.\n");
                            continue;
                        }
                        printf("choose  your unit of input\n1:nOhm\n2:uOhm\n3:mOhm\n4:Ohm\n");
                        result = scanf("%d", &unit1);
                        if (result == 1) {
                            printf("What is your resistance?\n");
                            Rresult = scanf("%Lf", &resistance);  // Read amperage input.
                            if (resistance <= 0) {
                                while ((c = getchar()) != '\n' && c != EOF);
                                printf("Voltage cannot be empty or equal to/lower than zero.\n");
                                continue;  // Go back to input if voltage is invalid.
                            } else {
                                resistance = convertResistance(resistance);
                            }
                            output = ampere * resistance;  // Calculate voltage and display it in various units.
                            if (output < 0.0000001) {
                                printf("%0.0Lf %s\n", output * 1e9, "nVolt"); // Convert to nanovolts.
                                printf("%0.9Lf %s\n", output, "Volt"); // Display in volts.
                            } else if (output < 0.0001) {
                                printf("%0.0Lf %s\n", output * 1e6, "uVolt"); // Convert to microvolts.
                                printf("%0.9Lf %s\n", output, "Volt"); // Display in volts.
                            } else if (output < 1) {
                                printf("%0.0Lf %s\n", output * 1e3, "mVolt"); // Convert to millivolts.
                                printf("%0.9Lf %s\n", output, "Volt"); // Display in volts.
                            } else if (output < 1000) {
                                printf("%0.3Lf Volt\n", output);  // Display in volts with 3 decimal places.
                            } else if (output < 1000000) {
                                printf("%0.3Lf kVolt\n",
                                       output);  // Display in kilovolts with 3 decimal places.
                            } else if (output > 1000000) {
                                printf("%0.3Lf MVolt\n",
                                       output);  // Display in megavolts with 3 decimal places.
                            }
                            break;  // Exit the do-while loop.
                        }

                }
            }
            return 0;
        }
    }
        while (1);

}



