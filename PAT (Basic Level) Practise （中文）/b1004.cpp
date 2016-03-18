//pat_b1004
#include<iostream>
#include<string>
using namespace std;

typedef struct studentInfo{
	string Name;
	string Number;
	int Score;
};
const int maxn = 100 + 5;
studentInfo StuInfo[maxn];

int main(){
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> StuInfo[i].Name >> StuInfo[i].Number >> StuInfo[i].Score;
	int maxI = 0, minI = 0;
	for (int i = 0; i < N; i++){
		if (StuInfo[i].Score > StuInfo[maxI].Score) maxI = i;
		if (StuInfo[i].Score < StuInfo[minI].Score) minI = i;
	}
	cout << StuInfo[maxI].Name << " " << StuInfo[maxI].Number << endl;
	cout << StuInfo[minI].Name << " " << StuInfo[minI].Number << endl;
	return 0;
}