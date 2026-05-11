#include <iostream>
using namespace std;
int main(){
    int n, l;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i].length() > 10){
            l = arr[i].length();
            cout << arr[i][0] << l - 2 << arr[i][l - 1] << endl;
        }
        else{
            cout << arr[i] << endl;
        }
    }
}