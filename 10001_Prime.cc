#include<iostream>
using namespace std;

int main() {
    int check, n = 10001, c = 0;

    for(int i = 2 ;i <= 1000000; i++) {
        check = 0;

        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                check = 1;
                break;
            }
        }

        if(check == 0)
            c++;
        if(c == n) {
            cout << n << "st Prime Number is: " << i;
            cout << endl;
            break;
        }
    }
    return 0;
}
