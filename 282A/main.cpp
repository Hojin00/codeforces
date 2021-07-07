#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int start = 0;
	int num;
	string s; 

	cin >> num;

	for(int i = 0; i < num; i++){

		cin >> s;

		if(s[1] == '+'){
			start += 1;
		} else if (s[1] == '-'){
			start -= 1;
		} else {
			continue;
		}
	}

	cout << start;
	
	
}