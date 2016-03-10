//pat_b1042
#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;

int Alpha[26] = { 0 };

int main(){
	vector<char> vec_C;
	char c;
	string line;
	getline(cin, line);
	stringstream ss(line);
	while (ss >> c){
		if (isalpha(c)){
			vec_C.push_back(tolower(c));
		}
	}
	for (int i = 0; i < vec_C.size(); i++){
		Alpha[vec_C[i] - 'a']++;
	}
	int x = 0;
	for (int i = 0; i < 26; i++)
		if (Alpha[x] < Alpha[i]) x = i;
	printf("%c %d\n", x + 97, Alpha[x]);

	return 0;
}