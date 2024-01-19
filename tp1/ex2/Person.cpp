#include <string>
#include "Person.hpp"


Person::Person(std::string first_name, std::string surname)
    : first_name { first_name }
    , surname { surname } {}

std::string Person::get_first_name() {
        return first_name;
    }

std::string Person::get_surname() {
        return surname;
    }

bool Person::compare(Person other) {
    return other.first_name == first_name && other.surname == surname;
}