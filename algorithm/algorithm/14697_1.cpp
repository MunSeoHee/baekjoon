#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int room_limit[3];
	int student;
	
	for (int i = 0; i < 3; i++) {
		cin >> room_limit[i];
	}
	cin >> student;

	for (int a = 0; a <= 100; a++)
	{
		for (int b = 0; b <= 100; b++)
		{
			for (int c = 0; c <= 100; c++)
			{
				if (((a * room_limit[0]) + (b *room_limit[1]) + (c * room_limit[2])) == student)
				{
					cout << 1 << endl;
					return 0;
				}
			}
		}
	}
	cout << 0 << endl;
	system("PAUSE");


	return 0;
}