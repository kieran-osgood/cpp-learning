#include <iostream>
#include <unistd.h>
#include <term.h>
//#include <utility>
//#include "FlyingCar.h"

template<typename T>
bool checkGuess(T p1, T p2) {
    return p1 == p2;
}

void ClearScreen() {
    if (!cur_term) {
        int result;
        setupterm(NULL, STDOUT_FILENO, &result);
        if (result <= 0) return;
    }

    putp(tigetstr("clear"));
}

int main() {
    int p1 = 0, p2 = 0, attempts = 0;
    std::cout << "p1 guess:";
    std::cin >> p1;

    do {
        ClearScreen();
        std::cout << "p2 guess:";
        std::cin >> p2;

        if (checkGuess(p1, p2)) {
            std::cout << "Correct!" << std::endl;
            break;
        }

        attempts++;
    } while (attempts < 3);

    if (attempts == 3) {
        std::cout << "Failed!" << std::endl;
    }

    system("read -p 'Press Enter to continue...' var");
}


//int main() {
//    FlyingCar flyingCar("Volvo");
//    std::cout << flyingCar.Name << std::endl;
//
//    FlyingCar* fcar = &flyingCar;
//    fcar->move();
//
//    Car* car = &flyingCar;
//    car->move();
//}
