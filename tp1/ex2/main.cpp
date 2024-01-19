#include "Person.hpp"
#include <iostream>

int main() {
    Person person {"oui", "non"};
    std::cout << person.get_first_name() << " " << person.get_surname() << std::endl;
}