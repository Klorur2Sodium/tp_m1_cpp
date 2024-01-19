#include "Person.hpp"
#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::vector<Person> persons;
    int nb_persons;

    std::cout << "Nombre de personnes: ";
    std::cin >> nb_persons;

    for (int i = 0; i < nb_persons; i++) {
        std::string firstname;
        std::string surname;

        std::cout << "Prenom: ";
        std::cin >> firstname;

        std::cout << "Nom: ";
        std::cin >> surname;

        Person person {firstname, surname};
        persons.emplace_back(person);
    }

    std::stringstream builder;
    builder << "Les personnes sont ";
    for (auto person: persons) {
        builder << person.get_first_name() << " " << person.get_surname();
        if (!person.compare(persons.back())) {
            builder << ", ";
        }
    }
    std::cout << builder.str() << "." << std::endl;
}