//pat_b1028
#include<iostream>
#include<string>
using namespace std;

const int Today = 20140906;

int main(){
	int N,iCount=0;
	string oldestPersonName, youngestPersonName;
	int oldestPersonAge = -1, youngestPersonAge = 2000001;
	cin >> N;
	while (N--){
		string strName;
		int year, month, day;
		cin >> strName;
		scanf("%d/%d/%d", &year, &month, &day);
		int Age = Today - (year * 10000 + month * 100 + day);
		if (Age >= 0 && Age <= 2000000){
			iCount++;
			if (Age > oldestPersonAge){
				oldestPersonAge = Age;
				oldestPersonName = strName;
			}
			if (Age < youngestPersonAge){
				youngestPersonAge = Age;
				youngestPersonName = strName;
			}
		}
	}
	if (iCount == 0)
		cout << "0" ;
	else
		cout << iCount << " " << oldestPersonName << " " << youngestPersonName;
	cout << endl;
	return 0;
}