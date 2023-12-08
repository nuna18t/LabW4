#include <iostream>
#include <cmath>

struct Rectangle {
    double x1, y1, x2, y2;
};

void RectPS(const Rectangle& rect, double &P, double &S) {
    double length = std::abs(rect.x2 - rect.x1);
    double width = std::abs(rect.y2 - rect.y1);

    P = 2 * (length + width);
    S = length * width;
}

int main() {
    Rectangle rectangles[] = {
        {0, 0, 3, 4},
        {1, 1, 4, 5},
        {-2, -2, 2, 3}
    };

    for (const auto& rect : rectangles) {
        double P, S;
        RectPS(rect, P, S);
        std::cout << "Периметр = " << P << ", Площа = " << S << std::endl;
    }

    return 0;
}

