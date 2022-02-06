#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while (T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
		cout << nouppercase << showbase << left << hex << (unsigned long long)A << endl;
		cout << nouppercase << showpos << right << setfill('_') << fixed << setprecision(2) << setw(15) << B << endl;
		cout << uppercase << noshowpos << scientific << setprecision(9) << C << endl;
	}
	return 0;

}