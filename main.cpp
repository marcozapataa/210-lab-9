#include <iostream>
#include <array>

using namespace std;

const int SIZE = 30;

int main()
{
    // Use an STD::array
    array<int, SIZE> skyfall = {};

    cout << "1. Array size: " << skyfall.size() << endl;


    return 0;
}