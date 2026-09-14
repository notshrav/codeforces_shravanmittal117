//271A
#include <iostream>
using namespace std;
int ans;
int main(){
    int year;
    cin >> year;
    for(int i = year + 1; i <= 9999; i++){
        int arr[4];
        int x = 3;
        int check = 0;
        int j = i;
        while(j != 0){
            arr[x] = j % 10;
            j /= 10;
            x --;
        }
        for(int c1 = 0; c1 < 3; c1++){
            for(int c2 = c1 + 1; c2 < 4; c2++){
                if(arr[c1] != arr[c2]){
                    check++;
                }
            }
        }
        if(check == 6){
            ans = i;
            break;
        }
    }
    cout << ans;
}