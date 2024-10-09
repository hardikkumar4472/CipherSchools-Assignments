#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void playSound() = 0;
    virtual void display() {
        cout << "This is an Instrument." << endl;
    }
    virtual ~Instrument() {}
};

class Piano : public Instrument {
public:
    void playSound() override {
        cout << "Playing a melodious piano tune." << endl;
    }
    void display() override {
        cout << "This is a Piano." << endl;
    }
};

class Violin : public Instrument {
public:
    void playSound() override {
        cout << "Playing a classical violin tune." << endl;
    }
    void display() override {
        cout << "This is a Violin." << endl;
    }
};

int main() {
    Instrument* instruments[2];

    instruments[0] = new Piano();
    instruments[1] = new Violin();

    for (int i = 0; i < 2; ++i) {
        instruments[i]->display();
        instruments[i]->playSound();
    }

    for (int i = 0; i < 2; ++i) {
        delete instruments[i];
    }

    return 0;
}
