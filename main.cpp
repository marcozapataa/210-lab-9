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

    // Read the data into the STD::array
    for (int i = 0; i < SIZE; i++)
    {
        inputFile >> skyfall[i];
    }
    inputFile.close();

    // Display the array has loaded the elements from the file
    cout << "2. Loaded: " << SIZE << " elements into skyfall." << endl;

    // Display the 15th number using the .at() function
    cout << "3. The 15th number in the file is " << skyfall.at(14) << endl;

    // Display the elements in the data file
    cout << "4. Elements:";
    for (int number : skyfall)
    {
        cout << number << " ";
    }
    cout << endl;


    return 0;
}