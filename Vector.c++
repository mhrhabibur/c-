#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> numbers (5, 3);
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        cout << numbers[i] << endl;
    }
    
    return 0;
}
