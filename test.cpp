#include <bits/stdc++.h>
using namespace std;

int main(){
	char a[100];
	bool c;
	cin.getline(a, 99);
	for(int i = 0; i < strlen(a); ++i){
		if(a[i] != a[strlen(a) - i - 1]){
			c = 1;
			break;
		}
	}
	if(c == 1){
		cout << "Not palindrome";
	} else{
		cout << "Palindrome";
	}
	return 0;
}
