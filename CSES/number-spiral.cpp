#include <iostream>

int main() {
    int t {};
    std::cin >> t;

    long long x{}, y{};
    while(t--){
        std::cin >> y >> x;
        if (x==y) { std::cout << x*y-x+1; }
        else if (y>x) { 
            int sign = y%2==0?1:-1;
            std::cout <<  y*y-(y-1) + sign*(y-x);
        }
        else {
            int sign = x%2==0?-1:1;
            std::cout << x*x-(x-1) + sign*(x-y);
        }
        
        std::cout << "\n";
    }
    



}