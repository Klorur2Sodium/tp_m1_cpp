#include <string>

class Person {
private:
    std::string first_name;
    std::string surname;
    
public:
    Person(std::string first_name, std::string surname);

    std::string get_first_name();

    std::string get_surname();

    bool compare(const Person other);
};