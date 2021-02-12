#include<iostream>
int main(){
    int answer;
    std::cout << "Please enter an integer: ";
    std::cin >> answer;
    while (answer > 100 || answer < 0){
        std::cout << "Please re-enter: ";
        std::cin << answer;
    }
    std::cout << "Number squared is " << answer * answer;
}