//pat_b1014
#include<iostream>
#include<string>
using namespace std;

const char Day[7][4] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

int main(){
	string str1, str2, str3, str4;
	int dayIndex = 0, HH = 0, MM = 0;
	cin >> str1 >> str2 >> str3 >> str4;
	int i = 0, j = 0;
	for (; i < str1.length() && i < str2.length(); i++)
		if (str1[i] == str2[i] && isupper(str1[i])&&str1[i]<='G'){
			dayIndex = str1[i] - 'A';
			i++;
			break;
		}
	for (; i < str1.length() && i < str2.length(); i++){
		if (str1[i] == str2[i]){
			if (isupper(str1[i])&&str1[i]<='N'){
				HH = str1[i] - 'A' + 10;
				break;
			}
			else if (isalnum(str1[i]) && !isalpha(str1[i])){
    				HH = str1[i] - '0';
				break;
			}
		}
	}
	for (; j < str3.length() && j < str4.length(); j++)
		if (str3[j] == str4[j] && isalpha(str3[j])){
			MM = j; 
			break;
		}
	printf("%s %02d:%02d\n", Day[dayIndex], HH, MM);
	return 0;
}