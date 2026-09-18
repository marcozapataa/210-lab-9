#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>
#include <fstream>

using namespace std;

const int SIZE = 30;

int main()
{
    // Use an STD::array
    array<int, SIZE> skyfall = {};

    // Display array size
    cout << "1. Array size: " << skyfall.size() << endl;

    // Read from external data file with 30 elements
    ifstream inputFile("data.txt");


    return 0;
}