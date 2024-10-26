#include <bits/stdc++.h>
using namespace std;

/*
   A map is a collection of key-value pairs, where each key is unique and the keys are stored in sorted order.
   Maps allow for efficient searching, insertion, and deletion operations.
   - `operator[]`: Accesses or inserts a value associated with a key.
   - `emplace()`: Constructs an element in-place, allowing for better performance in some cases.
   - `insert()`: Inserts a new key-value pair.
   - `find()`: Searches for a key and returns an iterator.
   - `lower_bound()` and `upper_bound()`: Find the closest keys in the map.
*/

void explainMap() {
   map<int, int> mpp1; // Map of integer keys to integer values
   map<int, pair<int, int>> mpp2; // Map of integer keys to pairs of integers
   map<pair<int, int>, int> mpp3; // Map with a pair of integers as the key

   // Inserting key-value pairs
   mpp1[1] = 2;                     // Inserts (1, 2)
   mpp1.emplace(3, 1);              // Inserts (3, 1) using emplace
   mpp1.insert({2, 4});             // Inserts (2, 4)
   mpp3.emplace(make_pair(2, 3), 10); // Inserts ((2, 3), 10) with a pair as a key

   cout << "Map elements (mpp1):\n";
   for (const auto& it : mpp1) {
      cout << it.first << " -> " << it.second << endl;
   }

   cout << "Value associated with key 1: " << mpp1[1] << endl; // Accessing existing key
   cout << "Value associated with key 5 (not found): " << mpp1[5] << endl; // Inserts (5, 0) since key 5 doesn't exist

   // Finding elements
   auto it = mpp1.find(3); // Find key 3
   if (it != mpp1.end()) {
       cout << "Value associated with key 3: " << it->second << endl; // Prints value for key 3
   } else {
       cout << "Key 3 not found." << endl;
   }

   // Finding bounds
   it = mpp1.lower_bound(2); // Finds the first key that is not less than 2
   cout << "Lower bound of 2: " << it->first << " -> " << it->second << endl;

   it = mpp1.upper_bound(3); // Finds the first key that is greater than 3
   if (it != mpp1.end()) {
       cout << "Upper bound of 3: " << it->first << " -> " << it->second << endl;
   } else {
       cout << "No upper bound for 3." << endl;
   }
}

/*
   A multimap is similar to a map but allows duplicate keys.
   Elements are stored in sorted order, and multiple values can be associated with the same key.
*/

void explainMultimap() {
   cout << "Demonstrating multimap:\n";
   multimap<int, string> mm;
   mm.insert({1, "apple"});
   mm.insert({1, "banana"});
   mm.insert({2, "grape"});
   mm.insert({3, "orange"});

   cout << "Multimap elements:\n";
   for (const auto& it : mm) {
      cout << it.first << " -> " << it.second << endl; // Displaying all key-value pairs
   }

   // Example of finding values for a duplicate key
   cout << "Values for key 1:\n";
   auto range = mm.equal_range(1); // Get the range of elements with key 1
   for (auto it = range.first; it != range.second; ++it) {
       cout << it->second << " "; // Display values associated with key 1
   }
   cout << endl;
}

/*
   An unordered map is a collection of key-value pairs where keys are unique and are not stored in any particular order.
   It provides average constant time complexity for insertions and lookups due to the underlying hash table.
*/

void explainUnorderedMap() {
   unordered_map<int, string> ump; // Unordered map of integer keys to string values

   // Inserting key-value pairs
   ump[1] = "apple";
   ump[2] = "banana";
   ump[3] = "grape";

   cout << "Unordered map elements:\n";
   for (const auto& it : ump) {
      cout << it.first << " -> " << it.second << endl; // Displaying all key-value pairs (order may vary)
   }
}

int main() {
    explainMap();
    explainMultimap();
    explainUnorderedMap();
    return 0;
}
