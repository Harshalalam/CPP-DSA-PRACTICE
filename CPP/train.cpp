#include<iostream>
#include<vector>
using namespace std;

int minplatform(vector<int> & arr, vector<int> & dep,int n) 

     int maxPlatforms = 1;

    for (int i = 0; i < n; i++) {
        int platforms = 1;  // count current train

        for (int j = 0; j < n; j++) {
            if (i != j) {
                // check overlap
                if (arr[i] <= dep[j] && arr[j] <= dep[i]) {
                    platforms++;
                }
            }
        }

        maxPlatforms = max(maxPlatforms, platforms);
    }

    return maxPlatforms;
}

int main() {
    int n;
    cout << "Enter number of trains: ";
    cin >> n;

    vector<int> arr(n), dep(n);

    cout << "Enter arrival times:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter departure times:\n";
    for (int i = 0; i < n; i++) cin >> dep[i];

    cout << "Minimum platforms required = "
         << minPlatformsBrute(arr, dep, n);

    return 0;
}
