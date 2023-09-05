#include "Variables.h"  // Include a header file (assuming it declares some necessary variables).
#include <stdio.h>      // Include the standard input-output library.
#include <math.h>

// Function for calculating current (Amperes) based on user input.
int Ampere() {
    do {
        printf("How do you want to calculate current?\n1: Power and Resistance\n2: Power and Voltage\n3: Voltage and Resistance\n");
        result = scanf("%d", &choice);  // Read the user's choice for current calculation.

        // Check if the user's choice is valid.
        if (result == 1) {
            if (choice > 0 && choice <= 3) {
                switch (choice) {
                    case 1:
                        do {
                            Presult = scanf("%Lf", &power);  // Read power input.
                            printf("What is your resistance?\n");
                            Rresult = scanf("%Lf", &resistance);  // Read resistance input.

                            // Check if the input values are valid.
                            if (Presult == 1 && Rresult == 1) {
                                if (power <= 0 || resistance <= 0) {
                                    if (power <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Power cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if power is invalid.
                                    }
                                    if (resistance <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Resistance cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if resistance is invalid.
                                    }
                                } else {
                                    output = sqrt(power / resistance); // Calculate current and display it in Amperes.
                                    if (output < 0.0000001) {
                                        printf("%0.0Lf %s\n", output * 1e9, "nA"); // Convert to nanoamperes.
                                        printf("%0.9Lf %s\n", output, "A"); // Display in Amperes.
                                    } else if (output < 0.0001) {
                                        printf("%0.0Lf %s\n", output * 1e6, "uA"); // Convert to microamperes.
                                        printf("%0.9Lf %s\n", output, "A"); // Display in Amperes.
                                    } else if (output < 1) {
                                        printf("%0.0Lf %s\n", output * 1e3, "mA"); // Convert to milliamperes.
                                        printf("%0.9Lf %s\n", output, "A"); // Display in Amperes.
                                    } else if (output < 1000) {
                                        printf("%0.3Lf A\n", output);  // Display in Amperes with 3 decimal places.
                                    } else if (output < 1000000) {
                                        printf("%0.3Lf kA\n", output);  // Display in kiloamperes with 3 decimal places.
                                    } else if (output > 1000000) {
                                        printf("%0.3Lf MA\n", output);  // Display in megaamperes with 3 decimal places.
                                    }
                                    break;  // Exit the do-while loop.
                                }
                            } else {
                                while ((c = getchar()) != '\n' && c != EOF);
                                printf("Invalid input. Please enter a valid number.\n");
                                continue;  // Go back to input if input is invalid.
                            }
                        } while (1);  // Infinite loop until a valid calculation is made.
                        return 0;  // Exit the Ampere function.

                    case 2:
                        do {
                            printf("What is your power?\n");
                            Presult = scanf("%Lf", &power);  // Read power input.
                            printf("What is your voltage?\n");
                            Vresult = scanf("%Lf", &volt);  // Read voltage input.

                            // Check if the input values are valid.
                            if (Presult == 1 && Vresult == 1) {
                                if (power <= 0 || volt <= 0) {
                                    if (power <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Power cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if power is invalid.
                                    }
                                    if (volt <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Voltage cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if voltage is invalid.
                                    }
                                } else {
                                    output = power / volt; // Calculate current and display it in Amperes.
                                    if (output < 0.0000001) {
                                        printf("%0.0Lf %s\n", output * 1e9, "nA"); // Convert to nanoamperes.
                                        printf("%0.9Lf %s\n", output, "A"); // Display in Amperes.
                                    } else if (output < 0.0001) {
                                        printf("%0.0Lf %s\n", output * 1e6, "uA"); // Convert to microamperes.
                                        printf("%0.9Lf %s\n", output, "A"); // Display in Amperes.
                                    } else if (output < 1) {
                                        printf("%0.0Lf %s\n", output * 1e3, "mA"); // Convert to milliamperes.
                                        printf("%0.9Lf %s\n", output, "A"); // Display in Amperes.
                                    } else if (output < 1000) {
                                        printf("%0.3Lf A\n", output);  // Display in Amperes with 3 decimal places.
                                    } else if (output < 1000000) {
                                        printf("%0.3Lf kA\n", output);  // Display in kiloamperes with 3 decimal places.
                                    } else if (output > 1000000) {
                                        printf("%0.3Lf MA\n", output);  // Display in megaamperes with 3 decimal places.
                                    }
                                    break;  // Exit the do-while loop.
                                }
                            } else {
                                while ((c = getchar()) != '\n' && c != EOF);
                                printf("Invalid input. Please enter a valid number.\n");
                                continue;  // Go back to input if input is invalid.
                            }
                        } while (1);  // Infinite loop until a valid calculation is made.
                        return 0;  // Exit the Ampere function.

                    case 3:
                        printf("What is your voltage?\n");
                        Vresult = scanf("%Lf", &volt);  // Read voltage input.
                        printf("What is your resistance?\n");
                        Rresult = scanf("%Lf", &resistance);  // Read resistance input.

                        // Check if the input values are valid.
                        if (Vresult == 1 && Rresult == 1) {
                            if (volt <= 0 || resistance <= 0) {
                                if (volt <= 0) {
                                    while ((c = getchar()) != '\n' && c != EOF);
                                    printf("Voltage cannot be empty or equal to/lower than zero.\n");
                                    continue;  // Go back to input if voltage is invalid.
                                }
                                if (resistance <= 0) {
                                    while ((c = getchar()) != '\n' && c != EOF);
                                    printf("Resistance cannot be empty or equal to/lower than zero.\n");
                                    continue;  // Go back to input if resistance is invalid.
                                }
                            } else {
                                output = volt / resistance; // Calculate current and display it in Amperes.
                                if (output < 0.0000001) {
                                    printf("%0.0Lf %s\n", output * 1e9, "nA"); // Convert to nanoamperes.
                                    printf("%0.9Lf %s\n", output, "A"); // Display in Amperes.
                                } else if (output < 0.0001) {
                                    printf("%0.0Lf %s\n", output * 1e6, "uA"); // Convert to microamperes.
                                    printf("%0.9Lf %s\n", output, "A"); // Display in Amperes.
                                } else if (output < 1) {
                                    printf("%0.0Lf %s\n", output * 1e3, "mA"); // Convert to milliamperes.
                                    printf("%0.9Lf %s\n", output, "A"); // Display in Amperes.
                                } else if (output < 1000) {
                                    printf("%0.3Lf A\n", output);  // Display in Amperes with 3 decimal places.
                                } else if (output < 1000000) {
                                    printf("%0.3Lf kA\n", output);  // Display in kiloamperes with 3 decimal places.
                                } else if (output > 1000000) {
                                    printf("%0.3Lf MA\n", output);  // Display in megaamperes with 3 decimal places.
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
    } while (1);  // Infinite loop for handling different current calculation scenarios.
}
