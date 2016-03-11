//pat_b1038
#include<iostream>
using namespace std;

const int maxn = 101;
int scoreCount[maxn] = { 0 };

int main(){
	int N;
	cin >> N;
	while (N--){
		int iScore=0;
		cin >> iScore;
		scoreCount[iScore]++;
	}

	int K;
	cin >> K;
	while (K--){
		int searchScore;
		cin >> searchScore;
		if (K != 0) cout << scoreCount[searchScore] << " ";
		else cout << scoreCount[searchScore] << endl;
	}
	return 0;
}
