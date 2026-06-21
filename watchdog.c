#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LATENCY_MS 5

int main() {
    srand(time(NULL)); 
    printf("=== WATCHDOG TEMPS REEL EN LIGNE ===\n\n");

    for (int cycle = 1; cycle <= 10; cycle++) {
        printf("Processus %d : Calcul en cours... ", cycle);
        int temps_calcul = (rand() % 7) + 1; 

        if (temps_calcul > MAX_LATENCY_MS) {
            printf("[!]\n");
            printf("🔴 ERREUR CRITIQUE : Latence (%d ms) > Limite (%d ms)\n", temps_calcul, MAX_LATENCY_MS);
            printf("🛑 WATCHDOG DECLENCHE : Arret immediat du processus.\n");
            break; 
        } else {
            printf("Termine en %d ms. (OK)\n", temps_calcul);
        }
    }

    printf("\n=== FIN DU PROGRAMME DE SECURITE ===\n");
    return 0;
}