#include"taxes.h"

// Fonction pour calculer l'impôt base sur les tranches
double calculerImpots(double revenu) {
    double impots = 0.0;

    if (revenu <= 10000) {
        impots = 0; // Pas d'impôt pour cette tranche
    } else if (revenu <= 25000) {
        impots = (revenu - 10000) * 0.10; // 10% pour la tranche 10,001 - 25,000
    } else if (revenu <= 50000) {
        impots = (25000 - 10000) * 0.10 + (revenu - 25000) * 0.20; // 20% pour la tranche 25,001 - 50,000
    } else {
        impots = (25000 - 10000) * 0.10 + (50000 - 25000) * 0.20 + (revenu - 50000) * 0.30; // 30% au-delà de 50,000
    }

    return impots;
}