#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    

    if (n <= 0) {
        cout << "Number of elements should be greater than zero." << endl;
        return 1; 
    }
    
    int numbers[n];
    

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    // Display the even numbers
    cout << "The even numbers are: ";
    bool foundEven = false; 
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
            foundEven = true;
        }
    }
    
    if (!foundEven) {
        cout << "There are no even numbers in the array." << endl;
    } else {
        cout << endl;
    }
    
    return 0; 
}
