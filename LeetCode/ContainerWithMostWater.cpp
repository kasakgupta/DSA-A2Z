#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the maximum area of water that can be trapped
int maxArea(vector<int>& height) {
    int area = 0;                         // To store the maximum area found so far
    int left = 0;                         // Left pointer starting from the beginning
    int right = height.size() - 1;        // Right pointer starting from the end

    // Continue until the two pointers meet
    while (left < right) {
        // Height of the container is limited by the shorter line
        int currHeight = min(height[left], height[right]);

        // Width is the distance between the two pointers
        int width = right - left;

        // Calculate current area and update max area if needed
        int currArea = currHeight * width;
        area = max(area, currArea);

        // Move the pointer pointing to the shorter line inward
        // (This is the key step to possibly increase the height)
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return area;  // Return the maximum area found
}

// 🔹 Driver code to test the function
int main() {
    // Example input
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    // Call the function and print the result
    int result = maxArea(height);
    cout << "Maximum water that can be contained: " << result << endl;

    return 0;
}
