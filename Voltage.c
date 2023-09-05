#include "Variables.h"  // Include a header file (assuming it declares some necessary variables).
#include <stdio.h>      // Include the standard input-output library.
#include <math.h>

// Function for calculating power based on user input.
int Voltage() {
    do {
        printf("How do you want to calculate voltage?\n1: Ampere and Resistance\n2: Power and Amperage\n3: Power and Resistance\n");
        result = scanf("%d", &choice);  // Read the user's choice for power calculation.
        if (result == 1) {   // Check if the user's choice is valid.
            if (choice > 0 && choice <= 3) {
                switch (choice) {
                    case 1:
                        do {
                            printf("What is your amperage?\n");
                            Aresult = scanf("%Lf", &ampere);  // Read voltage input.
                            printf("What is your resistance?\n");
                            Rresult = scanf("%Lf", &resistance);  // Read resistance input.

                            // Check if the input values are valid.
                            if (Aresult == 1 && Rresult == 1) {
                                if (ampere <= 0 || resistance <= 0) {
                                    if (ampere <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Ampere cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if voltage is invalid.
                                    }
                                    if (resistance <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Resistance cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if resistance is invalid.
                                    }
                                } else {
                                    output = ampere*resistance;  // Calculate power and display it in various units.
                                    if (output < 0.0000001) {
                                        printf("%0.0Lf %s\n", output * 1e9, "nWatt"); // Convert to nanowatts.
                                        printf("%0.9Lf %s\n", output, "Watt"); // Display in watts.
                                    } else if (output < 0.0001) {
                                        printf("%0.0Lf %s\n", output * 1e6, "uWatt"); // Convert to microwatts.
                                        printf("%0.9Lf %s\n", output, "Watt"); // Display in watts.
                                    } else if (output < 1) {
                                        printf("%0.0Lf %s\n", output * 1e3, "mWatt"); // Convert to milliwatts.
                                        printf("%0.9Lf %s\n", output, "Watt"); // Display in watts.
                                    } else if (output < 1000) {
                                        printf("%0.3Lf Watt\n", output);  // Display in watts with 3 decimal places.
                                    } else if (output < 1000000) {
                                        printf("%0.3Lf KWatt\n", output);  // Display in kilowatts with 3 decimal places.
                                    } else if (output > 1000000) {
                                        printf("%0.3Lf MWatt\n", output);  // Display in megawatts with 3 decimal places.
                                    }
                                    break;  // Exit the do-while loop.
                                }
                            } else {
                                while ((c = getchar()) != '\n' && c != EOF);
                                printf("Invalid input. Please enter a valid number.\n");
                                continue;  // Go back to input if input is invalid.
                            }
                        } while (1);  // Infinite loop until a valid calculation is made.
                        return 0;  // Exit the Power function.

                    case 2:
                        do {
                            printf("What is your power?\n");
                            Presult = scanf("%Lf", &power);  // Read current input.
                            printf("What is your amperage?\n");
                            Vresult = scanf("%Lf", &ampere);  // Read voltage input.

                            // Check if the input values are valid.
                            if (Presult == 1 && Aresult == 1) {
                                if (power <= 0 || ampere <= 0) {
                                    if (power <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Current cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if current is invalid.
                                    }
                                    if (ampere <= 0) {
                                        while ((c = getchar()) != '\n' && c != EOF);
                                        printf("Voltage cannot be empty or equal to/lower than zero.\n");
                                        continue;  // Go back to input if voltage is invalid.
                                    }
                                } else {
                                    output = power * ampere;  // Calculate power and display it in various units.
                                    if (output < 0.0000001) {
                                        printf("%0.0Lf %s\n", output * 1e9, "nWatt"); // Convert to nanowatts.
                                        printf("%0.9Lf %s\n", output, "Watt"); // Display in watts.
                                    } else if (output < 0.0001) {
                                        printf("%0.0Lf %s\n", output * 1e6, "uWatt"); // Convert to microwatts.
                                        printf("%0.9Lf %s\n", output, "Watt"); // Display in watts.
                                    } else if (output < 1) {
                                        printf("%0.0Lf %s\n", output * 1e3, "mWatt"); // Convert to milliwatts.
                                        printf("%0.9Lf %s\n", output, "Watt"); // Display in watts.
                                    } else if (output < 1000) {
                                        printf("%0.3Lf Watt\n", output);  // Display in watts with 3 decimal places.
                                    } else if (output < 1000000) {
                                        printf("%0.3Lf KWatt\n", output);  // Display in kilowatts with 3 decimal places.
                                    } else if (output > 1000000) {
                                        printf("%0.3Lf MWatt\n", output);  // Display in megawatts with 3 decimal places.
                                    }
                                    break;  // Exit the do-while loop.
                                }
                            } else {
                                while ((c = getchar()) != '\n' && c != EOF);
                                printf("Invalid input. Please enter a valid number.\n");
                                continue;  // Go back to input if input is invalid.
                            }
                        } while (1);  // Infinite loop until a valid calculation is made.
                        return 0;  // Exit the Power function.

                    case 3:
                        printf("What is your power?\n");
                        Presult = scanf("%Lf", &power);  // Read resistance input.
                        printf("What is your resistance?\n");
                        Rresult = scanf("%Lf", &resistance);  // Read current input.

                        // Check if the input values are valid.
                        if (Presult == 1 && Rresult == 1) {
                            if (resistance <= 0 || ampere <= 0) {
                                if (power <= 0) {
                                    while ((c = getchar()) != '\n' && c != EOF);
                                    printf("Resistance cannot be empty or equal to/lower than zero.\n");
                                    continue;  // Go back to input if resistance is invalid.
                                }
                                if (resistance <= 0) {
                                    while ((c = getchar()) != '\n' && c != EOF);
                                    printf("Current cannot be empty or equal to/lower than zero.\n");
                                    continue;  // Go back to input if current is invalid.
                                }
                            } else {
                                output = sqrt(power*resistance);  // Calculate power and display it in various units.
                                if (output < 0.0000001) {
                                    printf("%0.0Lf %s\n", output * 1e9, "nWatt"); // Convert to nanowatts.
                                    printf("%0.9Lf %s\n", output, "Watt"); // Display in watts.
                                } else if (output < 0.0001) {
                                    printf("%0.0Lf %s\n", output * 1e6, "uWatt"); // Convert to microwatts.
                                    printf("%0.9Lf %s\n", output, "Watt"); // Display in watts.
                                } else if (output < 1) {
                                    printf("%0.0Lf %s\n", output * 1e3, "mWatt"); // Convert to milliwatts.
                                    printf("%0.9Lf %s\n", output, "Watt"); // Display in watts.
                                } else if (output < 1000) {
                                    printf("%0.3Lf Watt\n", output);  // Display in watts with 3 decimal places.
                                } else if (output < 1000000) {
                                    printf("%0.3Lf KWatt\n", output);  // Display in kilowatts with 3 decimal places.
                                } else if (output > 1000000) {
                                    printf("%0.3Lf MWatt\n", output);  // Display in megawatts with 3 decimal places.
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
    } while (1);  // Infinite loop for handling different power calculation scenarios.
}
