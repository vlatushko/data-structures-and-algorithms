#include <iostream>

using namespace std;

int main() {
    const int ARRAY_SIZE = 5;
    //initialize a new array
    int array[ARRAY_SIZE]{10, 1, 100, 1, 7};

    int i, j = 0;
    for (i = 0; i < ARRAY_SIZE - 1; i++ ) {
        for (j = 0; j < ARRAY_SIZE - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "array[" << i << "]: " << array[i] << endl;
    }

    return 0;
}