#include <iostream>

int main(){
    std::string dna;
    std::cin >> dna;

    int sequence {1}; int longest{1};
    for (int i=1; i<dna.size(); i++) {
        if (dna[i]==dna[i-1]){
            sequence++;
        }
        else {
            sequence = 1;
        }

        longest = (sequence >longest ? sequence : longest);
    }
    std::cout << longest;
}