# Calcul-d-Impots-Simplife
Ce projet nous permet de calculer l'impôt sur le revenu en se basant sur des tranches prédéfinies
#include <iostream>
#include <iomanip> // Pour la précision des nombres
using namespace std;

// Fonction pour calculer l'impôt
double calculerImpots(double revenu) {
    double impot = 0.0;

    if (revenu <= 10000) {
        impot = 0; // Pas d'impôt pour cette tranche
    } else if (revenu <= 25000) {
        impot = (revenu - 10000) * 0.10; // 10% pour la tranche 10,001 - 25,000
    } else if (revenu <= 50000) {
        impot = (25000 - 10000) * 0.10 + (revenu - 25000) * 0.20; // 20% pour la tranche 25,001 - 50,000
    } else {
        impot = (25000 - 10000) * 0.10 + (50000 - 25000) * 0.20 + (revenu - 50000) * 0.30; // 30% au-delà de 50,000
    }

    return impot;
}

int main() {
    double revenuAnnuel, impot, revenuNet;

    // Demander le revenu annuel de l'utilisateur
    cout << "Entrez votre revenu annuel imposable : ";
    cin >> revenuAnnuel;

    // Validation de l'entrée
    if (revenuAnnuel < 0) {
        cout << "Le revenu ne peut pas être négatif. Veuillez réessayer." << endl;
        return 1; // Sortir du programme
    }

    // Calcul de l'impôt et du revenu net
