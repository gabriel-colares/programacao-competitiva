#include <cstdlib>
#include <iostream>

int main() {
    int quantidade;
    std::cin >> quantidade;

    int andar_anterior;
    std::cin >> andar_anterior;

    int tempo_total = 0;

    for (int i = 1; i < quantidade; ++i) {
        int andar_atual;
        std::cin >> andar_atual;

        tempo_total += std::abs(andar_atual - andar_anterior);
        andar_anterior = andar_atual;
    }

    std::cout << tempo_total << '\n';
    return 0;
}
