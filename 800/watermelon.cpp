#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int w;
    cin >> w;
    int w1, w2;
    int check = 0, i = 2;
    while(i < w){
        w1 = i;
        w2 = abs(w - i);
        if(w2 % 2 == 0 && w1 + w2 == w){
            check++;
        }
        i += 2;
    }
    if(check > 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}