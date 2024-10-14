#include <iostream>
using namespace std;

// int sumOfArray(int nums[], int size)
// {
//     int sum = 1;
//     for (int i = 0; i < size; i++)
//     {
//         sum *= nums[i];
//     }
//     return sum;
// }

// void smallestNumber(int nums[], int size) {
//     int smallest = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i] < smallest)
//         {
//             smallest = nums[i];
//         }

//     }
//     cout << smallest << endl;
// }

// MARK: SwapMaxMinNumber
// MARK: 
// ### MARK: 

void swapMaxMinNumber(int numbers[], int size)
{
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > numbers[maxIndex])
        {
            maxIndex = i;
        }
        else if (numbers[i] < numbers[minIndex])
        {
            minIndex = i;
        }
    }
    swap(numbers[maxIndex], numbers[minIndex]);

};

int main(int argc, char const *argv[])
{
    int numbers[] = {1, 20, 3, 5, -2};
    int size = 5;
    // cout << sumOfArray(numbers, size) << endl;
    // smallestNumber(numbers, size);
    swapMaxMinNumber(numbers, size);
    for (int i = 0; i < size; i++)
    {
       cout << numbers[i] << ", ";
    }
    cout << endl;
    return 0;
}
