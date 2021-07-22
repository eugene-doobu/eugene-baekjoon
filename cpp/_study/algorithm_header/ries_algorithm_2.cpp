#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	// reverse
	cout << "-- Example1 ------------ \n";
	[] {
		array<int, 5> arrA = { 1, 2, 3, 4, 5 };
		array<int, 5> arrB = { 6, 7, 8, 9, 10 };
		reverse(arrA.begin(), arrA.end());
		reverse(arrB.begin() + 1, arrB.end() - 1);

		cout << "a: ";
		for (auto el_A : arrA) {
			cout << el_A << " ";
		}
		cout << "b: ";
		for (auto el_B : arrB) {
			cout << el_B << " ";
		}
		cout << "\n";
	}();

	// rotate
	cout << "-- Example2 ------------ \n";
	[] {
		array<int, 5> arrA = { 1, 2, 3, 4, 5 };
		array<int, 5> arrB = { 6, 7, 8, 9, 10 };
		// 시작점, 끝점, 옮겨질 위치
		rotate(arrA.begin(), arrA.begin() + 2, arrA.end());
		rotate(arrB.begin() + 1, arrB.begin() + 2, arrB.begin() + 4);

		cout << "a: ";
		for (auto el_A : arrA) {
			cout << el_A << " ";
		}
		cout << "b: ";
		for (auto el_B : arrB) {
			cout << el_B << " ";
		}
		cout << "\n";
	}();

	// for_each
	cout << "-- Example3 ------------ \n";
	[] {
		array<int, 5> arr = { 1, 2, 3, 4, 5 };
		for_each(arr.begin(), arr.end(), [](int n) {
			cout << n << " ";
			});
		cout << "\n";
	}();

	// transform
	cout << "-- Example4 ------------ \n";
	[] {
		array<int, 5> arr = { 1, 2, 3, 4, 5 };
		transform(arr.begin(), arr.end(), arr.begin(), [](int n) {
			return n * n;
			});
		for_each(arr.begin(), arr.end(), [](int n) {
			cout << n << " ";
			});
		cout << "\n";
	}();

	// transform
	cout << "-- Example5 ------------ \n";
	[] {
		array<int, 5> arr1 = { 1, 2, 3, 4, 5 };
		array<int, 5> arr2 = { 6, 7, 8, 9, 10 };
		array<int, 5> arr3 = { 0, 0, 0, 0, 0 };
		transform(arr1.begin(), arr1.end(), arr2.begin(), arr3.begin(), [](int n, int m) {
			return n * m;
			});
		for_each(arr3.begin(), arr3.end(), [](int n) {
			cout << n << " ";
			});
		cout << "\n";
	}();

	// generate
	cout << "-- Example6 ------------ \n";
	[] {
		array<int, 5> arr = { 1, 2, 3, 4, 5 };
		generate(arr.begin(), arr.end(), []() {
			static int n = 1;
			return n++;
			});
		for_each(arr.begin(), arr.end(), [](int n) {
			cout << n << " ";
			});
		cout << "\n";
	}();

	// find
	cout << "-- Example7 ------------ \n";
	[] {
		array<int, 5> arr = { 5, 7, 2, 4, 6 };

		// find()에서 값을 못찾으면 .end()을 리턴
		[arr] {
			auto p = find(arr.begin(), arr.end(), 2);
			if (p == arr.end()) cout << "값 2가 없습니다\n";
			else cout << "값 2가[" << p - arr.begin() << "]번째 있습니다.\n";
		} ();
		[arr] {
			auto p = find(arr.begin(), arr.end(), 3);
			if (p == arr.end()) cout << "값 3가 없습니다\n";
			else cout << "값 3가[" << p - arr.begin() << "]번째 있습니다.\n";
		} ();
		[arr] {
			auto p = find(arr.begin(), arr.end(), 6);
			if (p == arr.end()) cout << "값 6가 없습니다\n";
			else cout << "값 6가[" << p - arr.begin() << "]번째 있습니다.\n";
		} ();

		cout << "\n";
	}();

	return 0;
}