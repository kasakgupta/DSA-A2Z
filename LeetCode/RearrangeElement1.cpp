#include <iostream>
#include <vector>
using namespace std;

void rearrangeInPlace(vector<int> &nums)
{
    int n = nums.size();

    // Step 1: Partition - move all positive numbers to the end
    int i = 0, j = 0;
    while (j < n)
    {
        if (nums[j] < 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
        j++;
    }

    // i = index where positive numbers start
    int neg = 0, pos = i;

    // Step 2: Swap alternate negatives with positives
    while (neg < pos && pos < n && nums[neg] < 0)
    {
        swap(nums[neg], nums[pos]);
        neg += 2;
        pos++;
    }
}

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    rearrangeInPlace(nums);

    cout << "In-place rearranged array: ";
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    return 0;
}