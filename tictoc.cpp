#include <iostream>
#include <string.h>
using namespace std;

char a1[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

class tic {
	int x;
	int y;
public:
	void settic(int, int);
	void print1(int, int, char);
};

void tic::settic(int a, int b) {
	x = a;
	y = b;
}


void print1(int a, int b, char c) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == a && j == b) { a1[i][j] = c; }
			cout << a1[i][j] << " | ";
		}
		cout << endl;
	}
}
int check() {
	for (int i = 0; i < 3; i++)
		if (a1[i][0] == a1[i][1] && a1[i][0] == a1[i][2] || a1[0][i] == a1[1][i] && a1[0][i] == a1[2][i]) {
			return 1;
		}
		if (a1[0][0] == a1[1][1] && a1[0][0] == a1[2][2] || a1[0][2] == a1[1][1] && a1[0][2] == a1[2][0]) {
			return 1;
		}
	return 0;
}
void cl() {
	for (int i = 0; i < 100; i++) {
		cout << "          " << endl;
	}
}


int main() {
	tic a;
	int sw = 0, num;
	char b = 'X', b1 = 'O';
	cout << "welocom to tic toc toe" << endl;
	cout << "player one play with X " << endl;
	cout << "player tow play with O " << endl;
	int x = -1, y = -1;
	print1(x, y, 'O');
	while ((check() == 0)) {
		cout << b << " : " << endl;
			cin >> num;
			switch (num) {

			case 1:x = 0; y = 0; break;
			case 2:x = 0; y = 1; break;
			case 3:x = 0; y = 2; break;
			case 4:x = 1; y = 0; break;
			case 5:x = 1; y = 1; break;
			case 6:x = 1; y = 2; break;
			case 7:x = 2; y = 0; break;
			case 8:x = 2; y = 1; break;
			case 9:x = 2; y = 2; break;
			}
			cl();
			print1(x, y, 'X');
			if (check() == 1) {
				cl();
				cout << "X win";
				break;
			}
			cout << b1 << " : " << endl;
			cin >> num;
			switch (num) {

			case 1:x = 0; y = 0; break;
			case 2:x = 0; y = 1; break;
			case 3:x = 0; y = 2; break;
			case 4:x = 1; y = 0; break;
			case 5:x = 1; y = 1; break;
			case 6:x = 1; y = 2; break;
			case 7:x = 2; y = 0; break;
			case 8:x = 2; y = 1; break;
			case 9:x = 2; y = 2; break;
			}
			cl();
			print1(x, y, 'O');
			if (check() == 1) {
				cl();
				cout << "O win";
				break;
			}
	}

}
