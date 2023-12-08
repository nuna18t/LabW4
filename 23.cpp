#include <iostream>

int main() {
    int N;

    std::cout << "Введіть кількість секунд: ";
    std::cin >> N;

    int fullMinutes = (N / 60) % 60;
    int fullHours = N / 3600;

    std::cout << "Пройшло " << fullHours << " годин і " << fullMinutes << " хвилин." << std::endl;

    return 0;
}
