//pat_b1003
#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int N;
	cin >> N;
	while (N--){
		cin >> str;
		int NumberOfA1 = 0, NumberOfA2 = 0, NumberOfA3 = 0;
		int a = str.find('P'), b = str.find('T');
		for (int i = 0; i < a; i++)
			if (str[i] == 'A')
				NumberOfA1++;
		for (int i = a ; i < b; i++)
			if (str[i] == 'A')
				NumberOfA2++;
		for (int i = b; i < str.length(); i++)
			if (str[i] == 'A')
				NumberOfA3++;
		if (NumberOfA2&&NumberOfA1*NumberOfA2 == NumberOfA3){
			if (NumberOfA1 + NumberOfA2 + NumberOfA3 + 2 == str.length())
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}