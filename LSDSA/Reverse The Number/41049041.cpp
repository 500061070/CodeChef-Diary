#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
    scanf("%d", &t);

    while( t-- ) {
        int n, m = 0;
        scanf("%d", &n);
        while(n) {
            int t = n % 10;
            m = m * 10 + t;
            n = n / 10;
        }
        printf("%d\n", m);
    }
    return 0;
}
