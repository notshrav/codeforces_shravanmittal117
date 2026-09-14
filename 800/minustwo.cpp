#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int output[t];
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int arr[n];
        int arr_count[n] = {0};
        int odd = 0;
        int even1 = 0;
        int even2 = 0;
        int freq1 = arr_count[0];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        for(int j = 0; j < n; j++) {
            if(arr[j] % 2 == 0) {
                if(arr[j] % 4 == 0) {
                    even2++;
                } else {
                    even1++;
                }
            } else {
                odd++;
            }
            for(int k = 0; k < n; k++) {
                if(arr[j] == arr[k]) {
                    arr_count[j]++;
                }
                if(freq1 < arr_count[j]) {
                freq1 = arr_count[j];
                }
            }
        }
        int result[] = {freq1, odd, even1, even2};
        int ans = result[0];
        for(int j = 1; j < 4; j++) {
            if(ans < result[j]) {
                ans = result[j];
            }
        }
        output[i] = ans;
    }
    for(int i = 0; i < t; i++) {
        cout << output[i] << endl;
    }
    return 0;
}
//2259B