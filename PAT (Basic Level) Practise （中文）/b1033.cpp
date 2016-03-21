//pat_b1033
#include<iostream>
#include<string>
#include<set>
using namespace std;

const int maxn = 100000 + 5;
char str[maxn];

int main(){
	string strBadKey, strInput;
	set<char> BadKey;
	getline(cin,strBadKey);
	cin >> strInput;
	for (int i = 0; i < strBadKey.size(); i++){
		BadKey.insert(strBadKey[i]);
		if (isalpha(strBadKey[i]))
			BadKey.insert(tolower(strBadKey[i]));
	}
	int index = 0;
	for (int i = 0; i < strInput.size(); i++){
		if (!BadKey.count(strInput[i])){
			if (isupper(strInput[i]) && BadKey.count('+'))
				continue;
			str[index] = strInput[i];
			index++;
		}
	}
	printf("%s\n", str);
	return 0;
}