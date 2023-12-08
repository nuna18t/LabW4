#include <iostream>

int main() {
    double x, y;

    std::cout << "Введіть координату x: ";
    std::cin >> x;

    std::cout << "Введіть координату y: ";
    std::cin >> y;

    bool isInSecondOrThirdQuadrant = (x < 0 && y > 0) || (x < 0 && y < 0);

    std::cout << (isInSecondOrThirdQuadrant
                      ? "Точка знаходиться в другій координатній чверті."
                      : "Точка знаходиться в третій координатній чверті.")
              << std::endl;

    return 0;
}

