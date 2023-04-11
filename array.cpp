#include <iostream>

using namespace std;

int main() {
    //initialize a new array
    int array[5]{1, 1, 2, 3, 5};
    int* baseElementAddress = array;

    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(array[0]): " << sizeof(array[0]) << endl;

    for (int i = 0; i < size(array); ++i) {
        //&array[0] = baseElementAddress = array
        cout << array[i] << " at: " << baseElementAddress + (i * 1) << endl;
    }
    return 0;
}
