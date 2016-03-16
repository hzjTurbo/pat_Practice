//pat_b1010
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	int i=0, j=0;
	for (i = 0; i < s1.length(); i++){
		if (s1[i] != s2[j]){
			if (isalpha(s1[i])) cout << tolower(s1[i]);
			else cout << s1[i];
		}
		else j++;
	}
	cout << endl;
}
