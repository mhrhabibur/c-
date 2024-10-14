#include <iostream>
using namespace std;

void reversedArray(int numbers[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(numbers[start], numbers[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << ", ";
    }
    
};

int main(int argc, char const *argv[])
{
    int nums[] = {1, 2, 4, 5, 6};
    int size = 5;
    reversedArray(nums, size);
    cout << endl;
    return 0;
}
