#include<bits/stdc++.h>

void even_or_odd(int n){
    if(n%2==0){
        std::cout << "Even";
    }
    else{
        std::cout << "Odd";
    }
}

void is_prime(int n){
    int flag = 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        std::cout << "Prime";
    }
    else{
        std::cout << "Not Prime";
    }
}

int main(){
    int n;
    std::cin >> n;
    std::cout << "Prime or Not Prime: ";
    is_prime(n);
    std::cout << "\nEven or Odd: ";
    even_or_odd(n);

    return 0;
}