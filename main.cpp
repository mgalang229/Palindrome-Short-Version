#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char arr[100];
    int n, counter = 0;
    cin.getline(arr, 80);
    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] != arr[strlen(arr)-i]){
            counter++;
        }
    }
    if(counter != strlen(arr)){
        cout << "Not a palindrome";
    } else{
        cout << "Palindrome";
    }
    return 0;
}
