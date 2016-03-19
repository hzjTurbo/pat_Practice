#include<iostream>
using namespace std;

const int maxn = 1000 + 5;
double Inventory[maxn] = { 0 }, Price[maxn] = { 0 };//这里之前为int时测试点2总过不了
double UnitPrice[maxn] = { 0 }, Profit = 0;

inline int findMaxUnitPrice(double *numbers, int length){
	int maxNumber = 0;
	for (int i = 0; i < length; i++)
		if (numbers[maxNumber] < numbers[i])
			maxNumber = i;
	return maxNumber;
}

int main(){
	int N;
	double Demand;
	cin >> N >> Demand;
	for (int i = 0; i < N; i++)
		cin >> Inventory[i];
	for (int i = 0; i < N; i++){
		cin >> Price[i];
		UnitPrice[i] = (double)Price[i] / Inventory[i];
	}
	while (Demand>0){
		int temp = findMaxUnitPrice(UnitPrice, N);
		if (Inventory[temp] == 0) break;
		Demand -= Inventory[temp];
		if (Demand > 0){
			UnitPrice[temp] = 0.0;
			Inventory[temp] = 0;
			Profit += Price[temp];
		}
		else{
			Profit += (Inventory[temp] + Demand)*UnitPrice[temp];
		}
	}
	printf("%.2f\n", Profit);
	return 0;
}