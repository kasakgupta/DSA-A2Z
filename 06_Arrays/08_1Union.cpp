#include <bits/stdc++.h>
using namespace std;

// Function to return the union of two arrays
vector<int> findUnion(vector<int> &a, vector<int> &b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;

    vector<int> unionArr;

    // Merge the two arrays while maintaining order
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    // Add remaining elements from array `a`
    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    // Add remaining elements from array `b`
    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}

int main() {
    // Input size of the arrays
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> a(n1);
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> b(n2);
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    // Call the function to find the union of the arrays
    vector<int> result = findUnion(a, b);

    // Output the result
    cout << "Union of the arrays: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
