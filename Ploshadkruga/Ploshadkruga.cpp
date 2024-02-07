#include <iostream>

double calculateCircleArea(double radius) {
    return 3.14 * radius * radius;
}
double calculateRingArea(double outerRadius, double innerRadius) {
    double outerArea = calculateCircleArea(outerRadius);
    double innerArea = calculateCircleArea(innerRadius);
    return outerArea - innerArea;
}
int main() {
    setlocale(LC_ALL, "Rus");
    double outerRadius, innerRadius;
    std::cout << "Введите внешний радиус кольца: ";
    std::cin >> outerRadius;
    std::cout << "Введите внутренний радиус кольца: ";
    std::cin >> innerRadius; 
    double ringArea = calculateRingArea(outerRadius, innerRadius);
    std::cout << "Площадь круга: " << ringArea << std::endl;
    return 0;
}