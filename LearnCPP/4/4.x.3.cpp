#include <iostream>

#define gravity_constant 9.8

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;
    return height;
}

void calculateHeight(double time, double height)
{
    double ballHeight = 0.5 * gravity_constant * time * time;
    
    if(ballHeight > height)
        std::cout << "At " << time << " seconds, the ball is on the ground.\n";
    else
        std::cout << "At " << time << " seconds, the ball is at height: " << 100 - ballHeight << " meters.\n";

}

int main()
{
    double towerHeight{getTowerHeight()};

    calculateHeight(0, towerHeight);
    calculateHeight(1, towerHeight);
    calculateHeight(2, towerHeight);
    calculateHeight(3, towerHeight);
    calculateHeight(4, towerHeight);
    calculateHeight(5, towerHeight);

    system("pause");
    return 0;
}