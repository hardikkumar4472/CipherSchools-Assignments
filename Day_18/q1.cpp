#include <iostream>
#include <tuple>
#include <string>

class Person {
    std::string firstName;
    std::string lastName;
    int age;

public:
    Person(const std::string& firstName, const std::string& lastName, int age) 
        : firstName(firstName), lastName(lastName), age(age) {}

    std::string getFullName() const {
        return firstName + " " + lastName;
    }

    std::tuple<std::string, std::string, int> getDetails() const {
        return std::make_tuple(firstName, lastName, age);
    }
};

int main() {
    Person person("John", "Doe", 30);
    auto [firstName, lastName, age] = person.getDetails();
    
    std::cout << "Full Name: " << person.getFullName() << std::endl;
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Age: " << age << std::endl;

    return 0;
}
