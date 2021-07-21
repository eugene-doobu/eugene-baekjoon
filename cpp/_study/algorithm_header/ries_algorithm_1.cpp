#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	// min, max
	cout << "-- Example1 ------------ \n";
	[] {
		int m = 2, n = 4;
		cout << "max: " << max(m, n) << "\n";
		cout << "min: " << min(m, n) << "\n";
	}();

	// min_el, max_el
	// 랜덤액세스가 가능한 형태에서 사용 가능
	// 문자열도 사용 가능
	cout << "-- Example2 ------------ \n";
	[] {
		array<int, 8> arr = { 4, 3, 8, 7, 1, 5, 2, 9 };
		cout << "max: " << *max_element(arr.begin(), arr.end()) << "\n";
		cout << "min: " << *min_element(arr.begin(), arr.end()) << "\n";
	}();

	// swap
	cout << "-- Example3 ------------ \n";
	[] {
		int a = 4, b = 6;
		swap(a, b);
		cout << "a: " << a << "\n";
		cout << "b: " << b << "\n";
	}();

	// swap_ranges
	cout << "-- Example4 ------------ \n";
	[] {
		array<int, 5> arrA = { 0 };
		array<int, 5> arrB = { 1, 2, 3, 4, 5 };
		swap_ranges(arrA.begin(), arrA.end() - 2, arrB.begin());
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

	// copy
	cout << "-- Example5 ------------ \n";
	[] {
		array<int, 5> arrA = { 0 };
		array<int, 5> arrB = { 1, 2, 3, 4, 5 };
		copy(arrA.begin(), arrA.end() - 2, arrB.begin());
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

	// fill
	cout << "-- Example6 ------------ \n";
	[] {
		array<int, 5> arrA = { 0 };
		array<int, 5> arrB = { 1, 2, 3, 4, 5 };
		fill(arrA.begin(), arrA.end(), 1);
		fill(arrB.begin()+1, arrB.end()-1, 3);

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
	return 0;
}