

#include <iostream>
#include <ctime>


int randrange(int high, int low) 
{
    return rand() % (high - low) + low;
}
void task2() 
{
    int values[21] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 ,17, 18, 19, 20 };



    std::cout << "No\t Name\t Value\t Health Bar" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "0 \t A   \t " << values[randrange(21, 1)] << std::endl;
    std::cout << "1 \t B   \t " << values[randrange(21, 1)] << std::endl;
    std::cout << "2 \t C   \t " << values[randrange(21, 1)] << std::endl;
    std::cout << "3 \t D   \t " << values[randrange(21, 1)] << std::endl;
    std::cout << "4 \t E   \t " << values[randrange(21, 1)] << std::endl;
    std::cout << "5 \t F   \t " << values[randrange(21, 1)] << std::endl;
    std::cout << "6 \t G   \t " << values[randrange(21, 1)] << std::endl;
    std::cout << "7 \t H   \t " << values[randrange(21, 1)] << std::endl;
    std::cout << "8 \t I   \t " << values[randrange(21, 1)] << std::endl;
    std::cout << "9 \t J   \t " << values[randrange(21, 1)] << std::endl;
}
int main()
{
    srand((unsigned)time(0));

    task2();
}

