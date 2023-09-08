#include <iostream>
using namespace std;

int linearSearch(const int[], int, int);

int main() {

    const int SIZE = 5;
    int tests[SIZE] = { 87, 45, 98, 100, 76}; // should equal the 4th position in the array
    int results;

    // search the array for 100
    results = linearSearch(tests, SIZE, 76);

    // if linearSearch returned -1, then 100 was not found.
    if(results == -1) {
        cout << "Element Not Found" << endl;
    }
    else {
        // Otherwise results contains the subscript of
        // the first 100 in the array
        cout << "You have found the element";
        cout << (results + 1) << endl;
    }
    
    return 0;
}

int linearSearch(const int arr[], int size, int value) {

    int index = 0;
    int position = -1;
    bool found = false;

    while(index < size && !found) {
        if (arr[index] == value){
            found = true;
            position = index;
    }
        index++;    
    }

    return position;
}
