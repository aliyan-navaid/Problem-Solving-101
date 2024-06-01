#include <iostream>
#include <vector>

int main() {
    int n {};
    std::cin >> n;

    long long moves {};
    std::vector<long long> numbers(n);
    for (int i=0; i<n; i++) {
        std::cin >> numbers[i];
        if (i>0)
        {
            long long increment = numbers[i-1]>numbers[i]?numbers[i-1]-numbers[i]:0;
            moves += increment;
            numbers[i] = numbers[i-1];
        }
    }
    std::cout << moves;

}