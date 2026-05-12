#include <iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int x;
    if(m % 2 == 0){
        x = (m/2) * n;
    }
    else if(n % 2 == 0){
        x = m * (n / 2);
    }
    else{
        if(m > n){
            x = (m * (n - 1) / 2) + (m - 1) / 2;
        }
        if(n > m){
            x = (n * (m - 1) / 2) + (n - 1) / 2;
        }
        else{
            x = (n * (m - 1) / 2) + (n - 1) / 2;
        }
    }
    cout << x;
}