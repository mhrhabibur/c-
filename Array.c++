#include <iostream>
#include <set>
using namespace std;

// MARK: Sum of Array

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

// void swapMaxMinNumber(int numbers[], int size)
// {
//     int maxIndex = 0;
//     int minIndex = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (numbers[i] > numbers[maxIndex])
//         {
//             maxIndex = i;
//         }
//         else if (numbers[i] < numbers[minIndex])
//         {
//             minIndex = i;
//         }
//     }
//     swap(numbers[maxIndex], numbers[minIndex]);

// };

// int main(int argc, char const *argv[])
// {
//     int numbers[] = {23, 43, -2, 54, 12};
//     int size = 5;
// cout << sumOfArray(numbers, size) << endl;
// smallestNumber(numbers, size);
// swapMaxMinNumber(numbers, size);
// for (int i = 0; i < size; i++)
// {
//    cout << numbers[i] << ", ";
// }
//     cout << "Original Array" << " \n";
//     for (int i = 0; i < size; i++)
//     {
//         cout << numbers[i] << ", ";
//     }
// cout << "\nNew Array" << " \n";
//     for (int i = 0; i < size; i++)
//     {
//         int j;
//         for (j = 0; j < i; j++)
//         {
//             if (numbers[i] == numbers[j])
//                 break;
//         }
//         if (i == j)
//             cout << numbers[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }



// int main(int argc, char const *argv[])
// {
//     cout << "\n";
//     int n = 4;
//     int num = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << num << "  ";
//             num++;
//         }
//         cout << "\n";
//     }

//     cout << "\n";
//     return 0;
// }


int findnumber(int numbers[], int target)
{
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == target)
        {
            return i;
            break;
        }
    }
     return -1;
};

int main(int argc, char const *argv[])
{
    int nums [] = {-1,0,3,5,9,12};
    int target = 9;
    int result = findnumber(nums, target);
    cout << result << endl;
    return 0;
}
