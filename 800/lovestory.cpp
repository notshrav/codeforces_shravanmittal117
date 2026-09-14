#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "codeforces";
    int n;
    cin >> n;
    string arr[n];
    int count[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 10; j++){
            if(s[j] != arr[i][j]){
                count[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << count[i] << endl;
    }
}//1829A