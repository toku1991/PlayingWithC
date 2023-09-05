#include "Variables.h"  // Include a header file (assuming it declares some necessary variables).
#include <stdio.h>      // Include the standard input-output library.

int Resistance() {
    do {
        printf("How do you want to calculate resistance?\n1: Volt and Ampere\n2: Power and Ampere\n3: Volt and Power\n");
        result = scanf("%d", &choice);  // Read the user's choice for resistance calculation.

        // Check if the user's choice is valid.
        if (result == 1) {
            if (choice > 0 && choice <= 3) {
                switch (choice) {
                    case 1:
                        do {
                            printf("What is your voltage?\n");
                            Vresult = scanf("%Lf", &volt);  // Read voltage input.
                            printf("What is your amperage?\n");
                            Aresult = scanf("%Lf", &ampere);  // Read amperage input.

                            // Check if the input values are valid.
                            if (Vresult == 1 && Aresult == 1) {
                                if (volt <= 0 || ampere <= 0) {
                                    if (volt <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Voltage cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if voltage is invalid.
                                    }
                                    if (ampere <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Amperage cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if amperage is invalid.
                                    }
                                } else {
                                    output = volt / ampere;// Calculate resistance and display it in various units.
                                    if (output < 0.0000001) {
                                        printf("%0.0Lf %s\n", output * 1e9, "nOhm"); // Convert to nanoohms.
                                        printf("%0.9Lf %s\n", output, "Ohm"); // Display in ohms.
                                    } else if (output < 0.0001) {
                                        printf("%0.0Lf %s\n", output * 1e6, "uOhm"); // Convert to microohms.
                                        printf("%0.9Lf %s\n", output, "Ohm"); // Display in ohms.
                                    } else if (output < 1) {
                                        printf("%0.0Lf %s\n", output * 1e3, "mOhm"); // Convert to milliohms.
                                        printf("%0.9Lf %s\n", output, "Ohm"); // Display in ohms.
                                    } else if (output < 1000) {
                                        printf("%0.3Lf Ohm\n", output);  // Display in ohms with 3 decimal places.
                                    } else if (output < 1000000) {
                                        printf("%0.3Lf KOhm\n", output);  // Display in kiloohms with 3 decimal places.
                                    } else if (output > 1000000) {
                                        printf("%0.3Lf MOhm\n", output);  // Display in megaohms with 3 decimal places.
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

                    case 2:
                        do {
                            printf("What is your power?\n");
                            Presult = scanf("%Lf", &power);  // Read power input.
                            printf("What is your amperage?\n");
                            Aresult = scanf("%Lf", &ampere);  // Read amperage input.

                            // Check if the input values are valid.
                            if (Presult == 1 && Aresult == 1) {
                                if (power <= 0 || ampere <= 0) {
                                    if (power <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Power cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if power is invalid.
                                    }
                                    if (ampere <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Amperage cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if amperage is invalid.
                                    }
                                } else {

                                    output = power * (ampere * ampere);// Calculate resistance and display it in various units.
                                    if (output < 0.0000001) {
                                        printf("%0.0Lf %s\n", output * 1e9, "nOhm"); // Convert to nanoohms.
                                        printf("%0.9Lf %s\n", output, "Ohm"); // Display in ohms.
                                    } else if (output < 0.0001) {
                                        printf("%0.0Lf %s\n", output * 1e6, "uOhm"); // Convert to microohms.
                                        printf("%0.9Lf %s\n", output, "Ohm"); // Display in ohms.
                                    } else if (output < 1) {
                                        printf("%0.0Lf %s\n", output * 1e3, "mOhm"); // Convert to milliohms.
                                        printf("%0.9Lf %s\n", output, "Ohm"); // Display in ohms.
                                    } else if (output < 1000) {
                                        printf("%0.3Lf Ohm\n", output);  // Display in ohms with 3 decimal places.
                                    } else if (output < 1000000) {
                                        printf("%0.3Lf KOhm\n", output);  // Display in kiloohms with 3 decimal places.
                                    } else if (output > 1000000) {
                                        printf("%0.3Lf MOhm\n", output);  // Display in megaohms with 3 decimal places.
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

                    case 3:
                        printf("What is your voltage?\n");
                        Vresult = scanf("%Lf", &volt);  // Read voltage input.
                        printf("What is your power?\n");
                        Presult = scanf("%Lf", &power);  // Read power input.

                        // Check if the input values are valid.
                        if (Vresult == 1 && Presult == 1) {
                            if (volt <= 0 || power <= 0) {
                                if (volt <= 0) {
                                    while ((c = getchar()) != '\n' && c != EOF);
                                    printf("Voltage cannot be empty or equal to/lower than zero.\n");
                                    continue;  // Go back to input if voltage is invalid.
                                }
                                if (power <= 0) {
                                    while ((c = getchar()) != '\n' && c != EOF);
                                    printf("Power cannot be empty or equal to/lower than zero.\n");
                                    continue;  // Go back to input if power is invalid.
                                }
                            } else {
                                output = (volt * volt) / power; // Calculate resistance and display it in various units.
                                if (output < 0.0000001) {
                                    printf("%0.0Lf %s\n", output * 1e9, "nOhm"); // Convert to nanoohms.
                                    printf("%0.9Lf %s\n", output, "Ohm"); // Display in ohms.
                                } else if (output < 0.0001) {
                                    printf("%0.0Lf %s\n", output * 1e6, "uOhm"); // Convert to microohms.
                                    printf("%0.9Lf %s\n", output, "Ohm"); // Display in ohms.
                                } else if (output < 1) {
                                    printf("%0.0Lf %s\n", output * 1e3, "mOhm"); // Convert to milliohms.
                                    printf("%0.9Lf %s\n", output, "Ohm"); // Display in ohms.
                                } else if (output < 1000) {
                                    printf("%0.3Lf Ohm\n", output);  // Display in ohms with 3 decimal places.
                                } else if (output < 1000000) {
                                    printf("%0.3Lf KOhm\n", output);  // Display in kiloohms with 3 decimal places.
                                } else if (output > 1000000) {
                                    printf("%0.3Lf MOhm\n", output);  // Display in megaohms with 3 decimal places.
                                }
                                break;  // Exit the switch case.
                            }
                        } else {
                            while ((c = getchar()) != '\n' && c != EOF);
                            printf("Invalid input. Please enter a valid number.\n");
                            continue;  // Go back to input if input is invalid.
                        }
                }
            }
        } else {
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Invalid input. Please enter a valid number.\n");
            continue;  // Go back to input if the choice is invalid.
        }
    } while (1);  // Infinite loop for handling different resistance calculation scenarios.
}
