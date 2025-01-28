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
    impot = calculerImpots(revenuAnnuel);
    revenuNet = revenuAnnuel - impot;

    // Afficher les résultats
    cout << fixed << setprecision(2); // Afficher les nombres avec 2 décimales
    cout << "Impôt à payer : " << impot << " EUR" << endl;
    cout << "Revenu net : " << revenuNet << " EUR" << endl;

    return 0;
}
