#include <iostream>
using namespace std;

int arr[1000001];

int main() {
	int N;
	cin >> N;
	int A;
	long long cnt = 0;
	for (int i = 1; i <= N; i++) {
		cin >> A;
		arr[i] = A;
	}

	int B, C;
	cin >> B >> C;

	for (int i = 1; i <= N; i++) {
		arr[i] = arr[i] - B;
		cnt++;

		if (arr[i] > 0) {
			if (arr[i] % C == 0) {
				cnt += (arr[i] / C);
			}
			else {
				cnt += (arr[i] / C) + 1;
			}
		}
	}

	/*
	for (int i = 1; i <= N; i++) {
		if (arr[i] > 0) {
			if (arr[i] % C != 0) {
				cnt = cnt + (arr[i] / C) + 1;
			}
			else if (arr[i] % C == 0) {
				cnt = cnt + (arr[i] / C);
			}
		}
	}
	*/

	cout << cnt;
	return 0;
}