#include "Variables.h"  // Include a header file (assuming it declares some necessary variables).
#include <stdio.h>      // Include the standard input-output library.
#include <math.h>

// Function for calculating voltage based on user input.
int Voltage() {
    do {
        printf("How do you want to calculate voltage?\n1: Ampere and Resistance\n2: Power and Amperage\n3: Power and Resistance\n4: Charges and Capacitance");
        result = scanf("%d", &choice);  // Read the user's choice for voltage calculation.
        if (result == 1) {   // Check if the user's choice is valid.
            if (choice > 0 && choice < 5) {
                switch (choice) {
                    case 1:
                        do {
                            printf("What is your amperage?\n");
                            Aresult = scanf("%Lf", &ampere);  // Read amperage input.
                            printf("What is your resistance?\n");
                            Rresult = scanf("%Lf", &resistance);  // Read resistance input.

                            // Check if the input values are valid.
                            if (Aresult == 1 && Rresult == 1) {
                                if (ampere <= 0 || resistance <= 0) {
                                    if (ampere <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Ampere cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if amperage is invalid.
                                    }
                                    if (resistance <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Resistance cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if resistance is invalid.
                                    }
                                } else {
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
                                        printf("%0.3Lf kVolt\n", output);  // Display in kilovolts with 3 decimal places.
                                    } else if (output > 1000000) {
                                        printf("%0.3Lf MVolt\n", output);  // Display in megavolts with 3 decimal places.
                                    }
                                    break;  // Exit the do-while loop.
                                }
                            } else {
                                while ((c = getchar()) != '\n' && c != EOF);
                                printf("Invalid input. Please enter a valid number.\n");
                                continue;  // Go back to input if input is invalid.
                            }
                        } while (1);  // Infinite loop until a valid calculation is made.
                        return 0;  // Exit the Voltage function.

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
                                    output = power / ampere;  // Calculate voltage and display it in various units.
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
                                        printf("%0.3Lf kVolt\n", output);  // Display in kilovolts with 3 decimal places.
                                    } else if (output > 1000000) {
                                        printf("%0.3Lf MVolt\n", output);  // Display in megavolts with 3 decimal places.
                                    }
                                    break;  // Exit the do-while loop.
                                }
                            } else {
                                while ((c = getchar()) != '\n' && c != EOF);
                                printf("Invalid input. Please enter a valid number.\n");
                                continue;  // Go back to input if input is invalid.
                            }
                        } while (1);  // Infinite loop until a valid calculation is made.
                        return 0;  // Exit the Voltage function.

                    case 3:
                        do {
                            printf("What is your power?\n");
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
                                    output = sqrt(power * resistance);  // Calculate voltage and display it in various units.
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
                                        printf("%0.3Lf kVolt\n", output);  // Display in kilovolts with 3 decimal places.
                                    } else if (output > 1000000) {
                                        printf("%0.3Lf MVolt\n", output);  // Display in megavolts with 3 decimal places.
                                    }
                                    break;  // Exit the do-while loop.
                                }
                            } else {
                                while ((c = getchar()) != '\n' && c != EOF);
                                printf("Invalid input. Please enter a valid number.\n");
                                continue;  // Go back to input if input is invalid.
                            }
                        } while (1);  // Infinite loop until a valid calculation is made.
                        return 0;  // Exit the Voltage function.

                    case 4:
                        do {
                            printf("What is your charge?\n");
                            Cresult = scanf("%Lf", &coulombs);  // Read charge input.
                            printf("What is your capacitance?\n");
                            Fresult = scanf("%Lf", &farad);  // Read capacitance input.

                            // Check if the input values are valid.
                            if (Cresult == 1 && Fresult == 1) {
                                if (coulombs <= 0 || farad <= 0) {
                                    if (coulombs <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Charge cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if charge is invalid.
                                    }
                                    if (farad <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Capacitance cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if capacitance is invalid.
                                    }
                                } else {
                                    output = coulombs / farad;  // Calculate voltage and display it in various units.
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
                                        printf("%0.3Lf kVolt\n", output);  // Display in kilovolts with 3 decimal places.
                                    } else if (output > 1000000) {
                                        printf("%0.3Lf MVolt\n", output);  // Display in megavolts with 3 decimal places.
                                    }
                                    break;  // Exit the do-while loop.
                                }
                            } else {
                                while ((c = getchar()) != '\n' && c != EOF);
                                printf("Invalid input. Please enter a valid number.\n");
                                continue;  // Go back to input if input is invalid.
                            }
                        } while (1);  // Infinite loop until a valid calculation is made.
                        return 0;  // Exit the Voltage function.
                }
            }
        } else {
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Invalid input. Please enter a valid number.\n");
            continue;  // Go back to input if the choice is invalid.
        }
    } while (1);  // Infinite loop for handling different voltage calculation scenarios.
}
