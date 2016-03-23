//pat_b1048
#include<iostream>
#include<string>
using namespace std;

const char Numbers[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K' };

int main(){
	string strA, strB;
	cin >> strA >> strB;
	int ptrA = strA.size(), ptrB = strB.size();
	if (ptrA<ptrB){
		int c = ptrB - ptrA;
		while (c != 0){
			strA = '0' + strA;
			c--;
		}
	}
	else{
		int c = ptrA - ptrB;
		while (c != 0){
			strB = '0' + strB;
			c--;
		}
	}
	ptrA = strA.size(), ptrB = strB.size();
	bool isOdd = true;
	while (ptrA&&ptrB){
		int temp = 0;
		ptrA--; ptrB--;
		if (isOdd)
			temp = (strB[ptrB] - '0' + strA[ptrA] - '0') % 13;
		else{
			temp = strB[ptrB] - strA[ptrA];
			if (temp < 0)
				temp += 10;
		}
		strB[ptrB] = Numbers[temp];
		isOdd = !isOdd;
	}
	cout << strB << endl;
	return 0;
}