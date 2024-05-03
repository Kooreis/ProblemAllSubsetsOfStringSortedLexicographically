```cpp
#include <bits/stdc++.h>
using namespace std;

void findSubsets(string str, vector<string>& subsets) {
    int n = str.length();
    for (int i = 0; i < (1<<n); i++) {
        string subset = "";
        for (int j = 0; j < n; j++) {
            if (i & (1<<j)) {
                subset += str[j];
            }
        }
        subsets.push_back(subset);
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    vector<string> subsets;
    findSubsets(str, subsets);
    sort(subsets.begin(), subsets.end());
    for (string subset : subsets) {
        cout << subset << endl;
    }
    return 0;
}
```