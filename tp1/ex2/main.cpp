#include "Person.hpp"
#include <iostream>

int main() {
    Person person {"oui", "non"};
    std::cout << person.first_name << " " << person.surname << std::endl;
}