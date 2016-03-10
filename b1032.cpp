//pat_b1032
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 100000 + 5;
int iScore[maxn] = { 0 };

int main(){
	int N;
	cin >> N;
	while (N--){
		int trem, score;
		cin >> trem >> score;
		iScore[trem] += score;
	}

	int index = 0;
	for (int i = 0; i < maxn; i++){
		if (iScore[index] < iScore[i])
			index = i;
	}

	cout << index << " " << iScore[index] << endl;
	return 0;
}