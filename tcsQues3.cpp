#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>

using namespace std;

void optimalApproach(const vector<int>& arr, int n, int target) {
    unordered_map<int, int> sumMap;
    int curSum = 0;

    for (int i = 0; i < n; i++) {
        curSum += arr[i];

        // Check if current sum equals the target
        if (curSum == target) {
            for (int j = 0; j <= i; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }

        // Check if there is a subarray summing to target
        if (sumMap.find(curSum - target) != sumMap.end()) {
            int startIndex = sumMap[curSum - target] + 1;
            for (int k = startIndex; k <= i; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }

        // Store the current sum with the latest index
        sumMap[curSum] = i;
    }
}

int main() {
    int k;
    cout << "Enter the target sum: ";
    cin >> k;
    cin.ignore();  // Clear the newline character from the input buffer

    cout << "Enter an array (e.g., [1,2,3,4,5]): ";
    string input;
    getline(cin, input);

    vector<int> arr;
    
    // Remove brackets if they exist
    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    string num;

    // Parse the input into the vector
    while (getline(ss, num, ',')) {
        if (!num.empty()) {
            arr.push_back(stoi(num)); // Convert to integer and add to vector
        }
    }

    /*cout << "Parsed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;*/

    // Call the function to find subarrays summing to target
    optimalApproach(arr, arr.size(), k);

    return 0;
}