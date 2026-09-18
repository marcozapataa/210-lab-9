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

    // Display the address, front and back elements from the data file
    cout << "5. Address: " << skyfall.data() << endl;
    cout << "6. Front: " << skyfall.front() << endl;
    cout << "7. Back: " << skyfall.back() << endl;

    // Find an element
    int target = 51;
    array<int, SIZE>::iterator it;
    it = find(skyfall.begin(), skyfall.end(), target);
    cout << "8. Value: " << target;
    if (it != skyfall.end())
        cout << " found in position " << it - skyfall.begin() << endl;
    else
        cout << " was not found.\n";
    cout << "  Value: " << *it << endl;

    // Find min and max elements
    cout << "9. Max element is " << *max_element(skyfall.begin(), skyfall.end())
        << " and Min element is " << *min_element(skyfall.begin(), skyfall.end()) << endl;
    // Find the sum of the array
    cout << "10. The sum of the array is: " << accumulate(skyfall.begin(), skyfall.end(), 0) << endl;


    return 0;
}