#include <iostream>

int main() {
    int x;
    std::cout << "Vyvedete cqlo chislo x (x > 0): ";
    std::cin >> x;

    if (x < 0) {
        std::cout << "Cqloto chislo trqbva da e po golqmo ot 0!" << std::endl;
        return 1;
    }

    while (x >= 0) {
        std::cout << x << std::endl;
        x--;
    }
}
