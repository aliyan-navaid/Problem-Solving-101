#include <iostream>

/* input won't exceed 2^31 but calculations can */
void weird(long long n) {
    if (n==1) {
        std::cout << n;
        return;
    }
    else if (n%2==0) {
        std::cout << n << " ";
        weird(n/2);
    }
    else {
        std::cout << n << " ";
        weird(3*n+1);
    }
}

int main() {
    int n {};
    std::cin >> n;
    weird(n);
}