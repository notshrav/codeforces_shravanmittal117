#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][3];
    int check[n] = {0};
    int p = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == 1){
                check[i]++;
            }
        }
    }
    for(int k = 0; k < n; k++){
        if(check[k] > 1){
            p++;
        }
    }
    cout << p;
}