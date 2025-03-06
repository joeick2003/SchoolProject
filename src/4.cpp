
// This program demonstrates the use of a vector to store strings.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Create a vector to store strings
    vector<string> myStrings;

    // Add some strings to the vector
    myStrings.push_back("Hello");
    myStrings.push_back("World");
    myStrings.push_back("This");
    myStrings.push_back("Is");
    myStrings.push_back("A");
    myStrings.push_back("Comprehensive");
    myStrings.push_back("School");
    myStrings.push_back("Project");

    // Iterate through the vector and print each string
    for (int i = 0; i < myStrings.size(); i++) {
        cout << myStrings[i] << endl;
    }

    return 0;
}