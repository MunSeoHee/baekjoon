#include<iostream>
#include <string>
using namespace std;
inline std::string& ltrim(std::string& s, const char* t = " \t\n\r\f\v") { 
	s.erase(0, s.find_first_not_of(t)); return s; 
} 
inline std::string& rtrim(std::string& s, const char* t = " \t\n\r\f\v") {
	s.erase(s.find_last_not_of(t) + 1); return s; 
}
inline std::string& trim(std::string& s, const char* t = " \t\n\r\f\v") {
	return ltrim(rtrim(s, t), t); 
} 


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int count = 1;
	string str;

	getline(cin, str);

	//cout << str;
	trim(str);
	if (str[0] == '\0') {
		cout << 0;
	}
	else {
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] == ' ') {
				count++;
			}
		}


		cout << count;
	}

	

	system("PAUSE");


	return 0;
}