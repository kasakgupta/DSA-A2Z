#include <bits/stdc++.h>
using namespace std;

int main()
{
  
    cout << "Enter a lowercase string: ";
    string s;
    cin >> s; // Input the string

    // Initialize hash array of size 26 (for each letter a-z) to 0
    int hash[26] = {0}; 

    // Precompute the frequency of each character in the string
    for(int i = 0; i < s.size(); i++) {
        // Calculate the index for the current character and increment it in hash
        hash[s[i] - 'a']++; 
    }

   
    cout << "Enter the number of queries: ";
    int q;
    cin >> q; // Input the number of queries

    // Process each query
    while(q--) {
      
        cout << "Enter a character to check frequency: ";
        char c;
        cin >> c; // Input the character to check frequency
        
        // Fetch and print the frequency of character `c` from hash
        cout << "Frequency of '" << c << "' is: " << hash[c - 'a'] << endl;
    }

    return 0;
}
