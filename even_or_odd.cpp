#include<bits/stdc++.h>

void even_or_odd(int n){
    if(n%2==0){
        std::cout << "Even";
    }
    else{
        std::cout << "Odd";
    }
}

int main(){
    int n;
    std::cin >> n;
    even_or_odd(n);
    return 0;
}