#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;
    int speed;
public:
    Car(std::string b, std::string m, int y) : brand(b), model(m), year(y), speed(0) {}
    
    std::string getBrand() const {
        return brand;
    }
    
    std::string getModel() const {
        return model;
    }
    
    int getYear() const {
        return year;
    }
    
    int getSpeed() const {
        return speed;
    }
    
    void setSpeed(int s) {
        speed = s;
    }
    
    void increaseSpeed(int amount) {
        speed += amount;
    }
    
    void decreaseSpeed(int amount) {
        speed -= amount;
        if (speed < 0) {
            speed = 0;
        }
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2020);
    
    myCar.increaseSpeed(30);
    std::cout << "Speed after acceleration: " << myCar.getSpeed() << " km/h" << std::endl;
    
    myCar.decreaseSpeed(10);
    std::cout << "Speed after deceleration: " << myCar.getSpeed() << " km/h" << std::endl;
    
    myCar.decreaseSpeed(40);
    std::cout << "Speed after further deceleration: " << myCar.getSpeed() << " km/h" << std::endl;

    return 0;
}
