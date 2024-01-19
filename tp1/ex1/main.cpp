#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Entre ton nom: ";

    std::string name = "";
    std::cin >> name;
    std::cout << "Bonjour " << name << std::endl;

    return 0;
}

// q5 - Si on donne une chaine de caractère d'une longueur de 21 ou plus,
//      tous les caractères au delà du 20eme sont coupés.