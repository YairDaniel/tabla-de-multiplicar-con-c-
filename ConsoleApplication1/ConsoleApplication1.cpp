#include <iostream>

int main() {
    int NUM, I, RESUL;

    std::cout << "DIGITE NUMERO: ";
    std::cin >> NUM;

    I = 1;
    while (I <= 12) {
        RESUL = NUM * I;
        std::cout << NUM << " * " << I << " = " << RESUL << std::endl;
        I = I + 1;
    }

    std::cout << "Pulse una Tecla: ";
    std::cin.ignore(); // Limpia el búfer del teclado
    std::cin.get(); // Espera a que el usuario presione Enter
    return 0;
}
