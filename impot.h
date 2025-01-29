#ifndef IMPOT_H // Garde pour éviter les inclusions multiples
#define IMPOT_H

#include <vector>

struct Bareme {
    double seuil1, taux1;
    double seuil2, taux2;
    double seuil3, taux3;
    double tauxSup;
};

extern Bareme celibataire;
extern Bareme marie;

double calculerImpots(double revenu, Bareme bareme);

#endif

// Déclaration de la fonction de calcul d'impôt
double calculer_impot(double revenu);

#endif