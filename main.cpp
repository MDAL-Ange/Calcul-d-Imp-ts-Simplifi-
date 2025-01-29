#include <iostream>
#include <vector>
#include "taxes.h"

using namespace std;

int main() {
    vector<double> revenus;
    char recommencer;
    
    cout << "=== Calculateur d'impôt simplifié ===\n\n";
    
    do {
        // Saisie sécurisée
        double revenu;
        cout << "Revenu annuel (€) : ";
        while(!(cin >> revenu) || revenu < 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Saisie invalide! Entrez un nombre positif : ";
        }
        
        // Calculs
        double impot = calcul_impot(revenu);
        double net = revenu - impot;
        
        // Affichage
        cout << "\n→ Impôt à payer : " << impot << " €\n";
        cout << "→ Revenu net : " << net << " €\n\n";
        
        // Stockage pour le récapitulatif
        revenus.push_back(revenu);
        
        // Continuation
        cout << "Nouveau calcul ? (o/n) : ";
        cin >> recommencer;
        cin.ignore(); 
        
    } while(tolower(recommencer) == 'o');
    
    // Récapitulatif
    if(!revenus.empty()) {
        cout << "\n=== Récapitulatif ===\n";
        double total = 0;
        
        for(size_t i = 0; i < revenus.size(); ++i) {
            total += calcul_impot(revenus[i]);
            cout << "Cas " << i+1 << " : " 
                 << calcul_impot(revenus[i]) << " €\n";
        }
        
        cout << "\nTotal des impôts : " << total << " €\n";
        cout << "Moyenne : " << total / revenus.size() << " €\n";
    }
    
    return 0;
}