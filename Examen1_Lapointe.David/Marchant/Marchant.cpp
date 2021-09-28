#include "Arme.h"
#include <iostream>
#include "FactoryArme.h"
#include "Aventurier.h"
#include "Marche.h"

int main()
{
    int answer;

    std::cout << "1 – Voir le statut de votre aventurier\n 2 – Voir les armes disponibles au marché\n 3 – Acheter une arme\n 4 – Équiper une arme\n";

    answer = menu(answer);
    std::cin >> answer;
}
int menu(int answer)
{
    do
    {
        switch (answer)
        {
        case 1:
            std::cout << Aventurier::to_string;
            break;

        case 2:
            std::cout << Marche::listeArme;
            break;

        case 3:
            std::cout << Aventurier::acheterArme;
            break;

        default:
            std::cout << Aventurier::ajouterArme;
        }
    } while (answer <= 0 || answer > 3);
    return answer;
}
