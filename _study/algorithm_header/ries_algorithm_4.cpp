#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	// partition
	// 분리시 원래 있던 값의 순서를 지키지는 않음
	cout << "-- Example1 ------------ \n";
	[] {
		array<int, 8> arr = { 5, 7, 2, 4, 6, 1, 9, 5 };

		auto p = partition(arr.begin(), arr.end(), [](int n) {
			return n >= 5;
			});

		for (auto i = arr.begin(); i != p; i++) {
			cout << *i << " ";
		};
		cout << "\n";
		for (auto i = p; i != arr.end(); i++) {
			cout << *i << " ";
		};
		cout << "\n";
	}();

	// partition
	// 분리시 원래 있던 값의 순서를 유지
	cout << "-- Example2 ------------ \n";
	[] {
		array<int, 8> arr = { 5, 7, 2, 4, 6, 1, 9, 5 };

		auto p = stable_partition(arr.begin(), arr.end(), [](int n) {
			return n >= 5;
			});

		for (auto i = arr.begin(); i != p; i++) {
			cout << *i << " ";
		};
		cout << "\n";
		for (auto i = p; i != arr.end(); i++) {
			cout << *i << " ";
		};
		cout << "\n";
	}();

	// sort
	cout << "-- Example3 ------------ \n";
	[] {
		array<int, 8> arr = { 15, 7, 2, 4, 6, 1, 9, 5 };

		// 오름차순 정렬
		// 내부적으로 < 연산자 사용
		sort(arr.begin(), arr.end());
		for (auto i = arr.begin(); i != arr.end(); i++) {
			cout << *i << " ";
		};
		cout << "\n";

		// 내림차순 정렬
		sort(arr.begin(), arr.end(), [](int a, int b) {
			return a > b;
			});
		for (auto i = arr.begin(); i != arr.end(); i++) {
			cout << *i << " ";
		};
		cout << "\n";
	}();

	// binary_search
	cout << "-- Example4 ------------ \n";
	[] {
		array<int, 8> arr = { 1, 2, 4, 5, 6, 7, 9, 15 };

		if (binary_search(arr.begin(), arr.end(), 5)) cout << "찾았습니다.\n";
		else cout << "없습니다\n";

		if (binary_search(arr.begin(), arr.end(), 3)) cout << "찾았습니다.\n";
		else cout << "없습니다.\n";

		cout << "\n";
	}();

	// lower_bound, upper_bound
	// binary_search 기반
	cout << "-- Example5 ------------ \n";
	[] {
		array<int, 8> arr = { 1, 2, 4, 5, 6, 7, 9, 15 };
		cout << "lower 5: " << *lower_bound(arr.begin(), arr.end(), 5)
			<< "\nupper 5: " << *upper_bound(arr.begin(), arr.end(), 5)
			<< "\nlower 8: " << *lower_bound(arr.begin(), arr.end(), 8)
			<< "\nupper 8: " << *upper_bound(arr.begin(), arr.end(), 8) << "\n";
	}();

	// merge
	// 값이 정렬되어 있을 때 사용
	cout << "-- Example6 ------------ \n";
	[] {
		array<int, 5> arr1 = { 1, 2, 4, 5, 6 };
		array<int, 5> arr2 = { 3, 4, 5, 8, 10 };
		array<int, 10> arr = { 0 };
		merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr.begin());
		for (auto i : arr) {
			cout << i << " ";
		}
		cout << "\n";
	}();

	// set funcs
	// 값이 정렬되고 중복x
	// union: 합집합
	// intersection: 교집합
	// difference: 차집합
	// symmetric_difference: 대칭 차집합
	cout << "-- Example7 ------------ \n";
	[] {
		array<int, 5> arr1 = { 1, 2, 4, 5, 6 };
		array<int, 5> arr2 = { 3, 4, 5, 8, 10 };
		array<int, 10> arr = { 0 };

		auto p = set_union(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr.begin());
		cout << "Union: ";
		for (auto i = arr.begin(); i != p; i++) {
			cout << *i << " ";
		};
		cout << "\n";

		p = set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr.begin());
		cout << "Intersection: ";
		for (auto i = arr.begin(); i != p; i++) {
			cout << *i << " ";
		};
		cout << "\n";

		p = set_difference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr.begin());
		cout << "Difference: ";
		for (auto i = arr.begin(); i != p; i++) {
			cout << *i << " ";
		};
		cout << "\n";

		p = set_symmetric_difference(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr.begin());
		cout << "Symmetric_difference: ";
		for (auto i = arr.begin(); i != p; i++) {
			cout << *i << " ";
		};
		cout << "\n";
	}();

	return 0;
}