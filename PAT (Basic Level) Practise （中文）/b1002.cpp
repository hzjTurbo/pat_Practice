//pat_b1002
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

const char pinyin[11][5] = { "ling", "yi", "er", "san", "si",
							"wu", "liu", "qi", "ba", "jiu", "shi" };

int main(){
	int sumOfNumbers = 0;
	string strNumbers;
	cin >> strNumbers;
	for (int i = 0; i < strNumbers.length(); i++)
		sumOfNumbers += strNumbers[i] - '0';
	int a = sumOfNumbers / 100;
	int b = (sumOfNumbers - a * 100) / 10;
	int c = sumOfNumbers % 10;
	if (sumOfNumbers>99)
		printf("%s %s %s", pinyin[a], pinyin[b], pinyin[c]);
	else if (sumOfNumbers > 9)
		printf("%s %s", pinyin[b], pinyin[c]);
	else
		printf("%s", pinyin[c]);
	printf("\n");
	return 0;
}