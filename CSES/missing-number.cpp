#include <iostream>

int main() {
    /* long long due for summation can lead to overflow */
    long long n {}; 
    std::cin >> n;

    long long givenSum {};
    for (int i=0; i<n-1; i++) {
        int x {};
        std::cin >> x;
        givenSum += x;
    }

    /* Summation formula for i=1->n is n(n+1)/2*/
    std::cout << n*(n+1)/2-givenSum;
}