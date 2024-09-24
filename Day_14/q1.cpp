#include <iostream>
#include <string>

class Car {
public:
    std::string brand_name;
    std::string model;
    std::string engine;
    int number_of_seats;

    Car(std::string brand, std::string mod, std::string eng, int seats) {
        brand_name = brand;
        model = mod;
        engine = eng;
        number_of_seats = seats;
    }

    void displayInfo() {
        std::cout << "Brand Name: " << brand_name << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Engine: " << engine << std::endl;
        std::cout << "Number of Seats: " << number_of_seats << std::endl;
    }
};

int main() {
    Car car1("Toyota", "Camry", "2.5L", 5);
    car1.displayInfo();
    return 0;
}
