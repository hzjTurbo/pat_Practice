//pat_b1019
#include<iostream>
#include<string>
#include<algorithm>
#include <iomanip>
using namespace std;

void fillZore(string& str){
	if (str.size() < 4){
		string s;
		s.assign(4 - str.size(), '0');
		str = s + str;
	}
	else
		return;
}
int main(){
	int Difference = 1,maxNum=0,minNum=0;
	char t[10];
	string str;
	cin >> str;
	fillZore(str);
	while (Difference!=6174){
		sort(str.rbegin(), str.rend());
		maxNum = atoi(str.c_str());
		sort(str.begin(), str.end());
		minNum = atoi(str.c_str());
		Difference = maxNum - minNum;
		if (Difference == 0){
			printf("%04d - %04d = 0000\n", maxNum, minNum);
			break;
		}
		printf("%04d - %04d = %04d\n", maxNum, minNum,Difference);
		sprintf(t, "%d", Difference);
		str = t;
		fillZore(str);
	}
	return 0;
}