//pat_b1029
#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
	string strLine1, strLine2;
	set<char> setGoodKey;
	cin >> strLine1 >> strLine2;
	for (int i = 0; i < strLine2.size(); i++){
		if (isalpha(strLine2[i]))
			setGoodKey.insert(toupper(strLine2[i]));
		else
			setGoodKey.insert(strLine2[i]);
	}
	for (int i = 0; i < strLine1.size(); i++){
		char temp = strLine1[i];
		if (isalpha(temp))
			temp = toupper(temp);
		if (!setGoodKey.count(temp)){
			cout << temp;
			setGoodKey.insert(temp);
		}
	}
	cout << endl;
	return 0;
}