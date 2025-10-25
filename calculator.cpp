#include <iostream>
using namespace std; 

int add(int a, int b){
    return a + b;
}

int main(){
    int first;
    cin >> first ;
    int second;
    cin>> second;

    cout<< add(first, second)<< endl;



    return 0;
}