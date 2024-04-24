#include <iostream>
using namespace std;

int main() {
    int target, nums[10000], i, low = 0, high, middle;

    cout << "Enter target number: ";
    cin >> target;

    cout << "Enter an array of numbers in ascending order (enter 'stop' to end): ";
    int elementsCount = 0;
    for (i = 0; i < 10000; i++)
    {
        
        if (!(cin >> nums[i])) {
            // Input failed or non-integer value entered
            break;
        }
        elementsCount ++;
    }
    high = elementsCount -1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (nums[middle] == target)
        {
            return middle;
        }
        else if (nums[middle] < target)
        {
            low = middle + 1;
        }
        else if (nums[middle] > target)
        {
            high = middle - 1;
        }
    }
    return -1;
}