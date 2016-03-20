//pat_b1040
#include<iostream>
#include<string>
using namespace std;

int main(){
	int NumT = 0, NumAT = 0, NumPAT = 0;
	string strPAT;
	cin >> strPAT;
	for (int i = strPAT.size() - 1; i >= 0; --i){
		if (strPAT[i] == 'T')
			NumT++;
		else if (strPAT[i] == 'A')
			NumAT = (NumAT + NumT) % 1000000007;
		else
			NumPAT = (NumPAT + NumAT) % 1000000007;
	}
	cout << NumPAT << endl;
	return 0;
}