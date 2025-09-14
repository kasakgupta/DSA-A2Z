#include <bits/stdc++.h>
using namespace std;

/*
 Text Editor Simulation
 - insert <string>  -> insert string at cursor
 - delete <k>       -> delete k chars before cursor
 - left <k>         -> move cursor left by k
 - right <k>        -> move cursor right by k
 - print <k>        -> return last k chars before cursor
*/

vector<string> textEditor(vector<vector<string>>& commands) {
    string text = "";           // editor content
    int cursor = 0;             // cursor position
    vector<string> result;      // store results of "print" commands

    for (auto &cmd : commands) {
        if (cmd[0] == "insert") {
            string toInsert = cmd[1];
            text.insert(cursor, toInsert);       // insert string at cursor
            cursor += toInsert.size();           // move cursor after insertion
        } 
        else if (cmd[0] == "delete") {
            int k = stoi(cmd[1]);                // stoi = string → int
            if (cursor >= k) {
                text.erase(cursor - k, k);       // erase k chars before cursor
                cursor -= k;
            } else {
                text.erase(0, cursor);           // erase everything if less chars
                cursor = 0;
            }
        } 
        else if (cmd[0] == "left") {
            int k = stoi(cmd[1]);
            cursor = max(0, cursor - k);         // move left safely
        } 
        else if (cmd[0] == "right") {
            int k = stoi(cmd[1]);
            cursor = min((int)text.size(), cursor + k); // move right safely
        } 
        else if (cmd[0] == "print") {
            int k = stoi(cmd[1]);
            int start = max(0, cursor - k);
            result.push_back(text.substr(start, cursor - start));
        }
    }
    return result;
}

// ---------------- Driver Code ----------------
int main() {
    // Example input (you can modify this for testing)
    vector<vector<string>> commands = {
        {"insert", "hello"},
        {"left", "2"},
        {"right", "3"},
        {"delete", "2"},
        {"print", "4"}
    };

    vector<string> output = textEditor(commands);

    cout << "Results of print commands:\n";
    for (auto &s : output) {
        cout << s << endl;
    }

    return 0;
}
