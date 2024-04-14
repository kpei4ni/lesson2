#include <iostream>
using namespace std;

int main()
{
    int negative = 0; 
    int positive = 0;

    int array[5] = {1, -1, 3, 4, 5};

    for (auto i : array)
    {
        if (array[i] < 0) {
            negative = array[i];
            break;
        }
    }

    for (int i = 5; i < 6; i--)
    {
        if (array[i] > 0) {
            positive = array[i];
            break;
        }
    }

    cout << positive << " " << negative;


    
}
