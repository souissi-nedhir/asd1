/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void clearScreen() {
    system("cls");
}

void afficherMenu() {
    printf("**********************************************************************************************************************************\n");
    printf("                                                AGENCE DE VOYAGES - VOYAGE Khaliha la allah                                                 \n");
    printf("**********************************************************************************************************************************\n");
    printf("                                                * VOTRE PASSERELLE VERS LE MONDE *                   \n\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------\n");
    printf("                                                MENU PRINCIPAL - CHOISISSEZ UNE OPTION            \n");
    printf("----------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                      *******************************************************\n");
    printf("                                      *                                                     *\n");
    printf("                                      *   [1] GESTION DES VOYAGES                           *\n");
    printf("                                      *       Planifiez et modifiez vos itineraires.        *\n");
    printf("                                      *                                                     *\n");
    printf("                                      *   [2] STATISTIQUES POUR L'AGENCE                    *\n");
    printf("                                      *       Analysez les tendances et les performances.   *\n");
    printf("                                      *                                                     *\n");
    printf("                                      *   [3] QUITTER L'APPLICATION                         *\n");
    printf("                                      *       Fermez l'application et revenez plus tard.    *\n");
    printf("                                      *                                                     *\n");
    printf("                                      *******************************************************\n\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------\n");
    printf("                                         DECOUVREZ DE NOUVEAUX HORIZONS AVEC VOYAGE PARADISE        \n");
    printf("----------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                              \"Voyager est la seule chose que vous achetez qui vous rend plus riche.\"\n");
    printf("**********************************************************************************************************************************\n");
}

int main() {
    int choix;
    int running = 1;

    // Start the interactive loop
    while (running) {
        // Clear the screen and display the menu
        clearScreen();
        afficherMenu();

        // Prompt the user for a choice
        printf("\nEntrez votre choix : ");
        scanf("%d", &choix);

        // Handle user input
        switch (choix) {
            case 1:
                printf("\nVous avez sélectionne 'GESTION DES VOYAGES'.\n");
                break;
            case 2:
                printf("\nVous avez sélectionne 'STATISTIQUES POUR L'AGENCE'.\n");
                break;
            case 3:
                printf("\nMerci d'avoir utilise Voyage Paradise. Au revoir !\n");
                running = 0;  // Exit the loop and end the program
                break;
            default:
                printf("\nChoix invalide. Veuillez reessayer.\n");
        }

        // Pause to let the user see the result before refreshing the menu
        printf("\nAppuyez sur Entrée pour continuer...");
        getchar();  // Capture the Enter key to pause
        getchar();  // Consume the newline character from the buffer
    }

    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

// Function to clear the screen (for Windows)
void clearScreen() {
    system("cls");
}

// Function to display the menu with sky blue color for a specific line
void afficherMenu() {
    printf("**********************************************************************************************************************************\n");
    printf("                                                AGENCE DE VOYAGES - VOYAGE Khaliha la allah\n");
    printf("**********************************************************************************************************************************\n");
    printf("                                                * VOTRE PASSERELLE VERS LE MONDE *                   \n\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\033[36m"); // Set text color to sky blue
    printf("                                                MENU PRINCIPAL - CHOISISSEZ UNE OPTION            \n");
    printf("\033[0m"); // Reset text color
    printf("----------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                                      *******************************************************\n");
    printf("                                      *                                                     *\n");
    printf("                                      *   [1] GESTION DES VOYAGES                           *\n");
    printf("                                      *       Planifiez et modifiez vos itineraires.        *\n");
    printf("                                      *                                                     *\n");
    printf("                                      *   [2] STATISTIQUES POUR L'AGENCE                    *\n");
    printf("                                      *       Analysez les tendances et les performances.   *\n");
    printf("                                      *                                                     *\n");
    printf("                                      *   [3] QUITTER L'APPLICATION                         *\n");
    printf("                                      *       Fermez l'application et revenez plus tard.    *\n");
    printf("                                      *                                                     *\n");
    printf("                                      *******************************************************\n\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------\n");
    printf("                                         DECOUVREZ DE NOUVEAUX HORIZONS AVEC VOYAGE PARADISE        \n");
    printf("----------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("                              \"Voyager est la seule chose que vous achetez qui vous rend plus riche.\"\n");
    printf("**********************************************************************************************************************************\n");
}

int main() {
    int choix;
    int running = 1;

    // Start the interactive loop
    while (running) {
        // Clear the screen and display the menu
        clearScreen();
        afficherMenu();

        // Prompt the user for a choice
        printf("\nEntrez votre choix : ");
        scanf("%d", &choix);

        // Handle user input
        switch (choix) {
            case 1:
                printf("\nVous avez selectionne 'GESTION DES VOYAGES'.\n");
                break;
            case 2:
                printf("\nVous avez selectionne 'STATISTIQUES POUR L'AGENCE'.\n");
                break;
            case 3:
                printf("\nMerci d'avoir utilise Voyage Paradise. Au revoir !\n");
                running = 0;  // Exit the loop and end the program
                break;
            default:
                printf("\nChoix invalide. Veuillez reessayer.\n");
        }

        // Pause to let the user see the result before refreshing the menu
        printf("\nAppuyez sur Entree pour continuer...");
        getchar();  // Capture the Enter key to pause
        getchar();  // Consume the newline character from the buffer
    }

    return 0;
}


