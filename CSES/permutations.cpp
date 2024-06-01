#include <iostream>

int main() {
    int n {};
    std::cin >> n;

    if (n>=2 && n<=3)
        std::cout << "NO SOLUTION";
    else {
        /* First even due to exception: n=4 (1,3,2,4 is invalid) */
        for (int i=2; i<=n; i+=2) {
            std::cout << i << " ";
        }
        for (int i=1; i<=n; i+=2) {
            std::cout << i << " ";
        }
    }

}