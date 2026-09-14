//158A
#include <iostream>
using namespace std;
int main(){
    int n, k, tot = 0;
    cin >> n >> k;;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int j = 0; j < n; j++){
        if (arr[j] >= arr[k - 1] && arr[j] > 0){
            tot++;
        }
    }
    cout << tot;
}