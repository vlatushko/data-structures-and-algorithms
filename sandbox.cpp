//
// Created by vasyl on 5/17/2023.
//

#include "iostream"
using namespace std;

int main(){
    const int size = 10;

    int initialBody = 225000;
    float interestRate = 0.1699f;

    float body[size]{};
    float interests[size]{};

    body[size - 1] = initialBody;

    for (int i = size - 1; i >= 0; i--)
    {
        float interest = body[i] * interestRate;
        interests[i] = interest;

        if (i - 1 >= 0)
            body[i - 1] =  body[i] - interest;
    }

    for (int i = size - 1; i >= 0; i--){
        cout << i << ": " << body[i] << " with interest " << interests[i] << endl;
    }

    return 0;
}