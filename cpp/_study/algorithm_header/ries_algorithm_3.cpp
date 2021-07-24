#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	// find 응용
	cout << "-- Example1 ------------ \n";
	[]
	{
		array<int, 8> arr = {5, 7, 2, 5, 6, 5, 9, 5};

		[arr]
		{
			auto i = arr.begin();
			while (true)
			{
				auto p = find(i, arr.end(), 5);
				if (p == arr.end())
				{
					cout << "탐색이 종료되었습니다.";
					return;
				}
				else
					cout << "값 5가[" << p - arr.begin() << "]번째 있습니다.\n";
				i = ++p;
			}
		}();

		cout << "\n";
	}();

	// find_if
	cout << "-- Example2 ------------ \n";
	[]
	{
		array<int, 8> arr = {5, 7, 2, 5, 6, 5, 9, 5};

		[arr]
		{
			auto i = arr.begin();
			while (true)
			{
				auto p = find_if(i, arr.end(), [](int n)
								 { return n > 5; });
				if (p == arr.end())
				{
					cout << "탐색이 종료되었습니다.";
					return;
				}
				else
					cout << "5보다 큰 값" << *p << "가 있습니다.\n";
				i = ++p;
			}
		}();

		cout << "\n";
	}();

	// count, count_if
	cout << "-- Example3 ------------ \n";
	[]
	{
		array<int, 8> arr = {5, 7, 2, 5, 6, 5, 9, 5};

		cout << "5의 갯수: " << count(arr.begin(), arr.end(), 5) << "\n";
		cout << "5 이상의 갯수: " << count_if(arr.begin(), arr.end(), [](int n)
											  { return n > 5; });

		cout << "\n";
	}();

	// replace
	cout << "-- Example4 ------------ \n";
	[]
	{
		array<int, 8> arr = {5, 7, 2, 5, 6, 5, 9, 5};

		replace(arr.begin(), arr.end(), 5, 9);
		for (auto i = arr.begin(); i != arr.end(); ++i)
		{
			cout << *i << " ";
		}
		cout << "\n";
	}();

	// replace_if
	cout << "-- Example5 ------------ \n";
	[]
	{
		array<int, 8> arr = {5, 7, 2, 5, 6, 5, 9, 5};

		replace_if(
			arr.begin(),
			arr.end(),
			[](int n)
			{
				return n > 3;
			},
			3);
		for (auto i = arr.begin(); i != arr.end(); ++i)
		{
			cout << *i << " ";
		}
		cout << "\n";
	}();

	// remove, remove_if
	// 배열베이스 자료구조의 중간에서 사용할 때는 성능에 주의하자
	cout << "-- Example6 ------------ \n";
	[]
	{
		array<int, 8> arr1 = {5, 7, 2, 5, 6, 5, 9, 5};
		array<int, 8> arr2 = arr1;

		auto p = remove(arr1.begin(), arr1.end(), 5);
		for (auto i = arr1.begin(); i != p; ++i)
		{
			cout << *i << " ";
		}
		cout << ",제거된 원소 수: " << arr1.end() - p << "\n";

		p = remove_if(arr2.begin(), arr2.end(), [](int n)
					  { return n < 3; });
		for (auto i = arr2.begin(); i != p; ++i)
		{
			cout << *i << " ";
		}
		cout << ",제거된 원소 수: " << arr2.end() - p << "\n";
	}();

	// equal
	cout << "-- Example7 ------------ \n";
	[]
	{
		array<int, 5> arr1 = {1, 2, 3, 4, 5};
		array<int, 5> arr2 = {1, 2, 3, 4, 5};
		array<int, 5> arr3 = {1, 2, 3, 7, 9};

		cout << "배열 1, 2 equal: " << equal(arr1.begin(), arr1.end(), arr2.begin()) << "\n";
		cout << "배열 1, 3 equal: " << equal(arr1.begin(), arr1.end(), arr3.begin()) << "\n";
		cout << "배열 1, 3 일부 : " << equal(arr1.begin(), arr1.begin() + 3, arr3.begin()) << "\n";
	}();

	// mismatch
	cout << "-- Example8 ------------ \n";
	[]
	{
		array<int, 5> arr1 = {1, 2, 3, 4, 5};
		array<int, 5> arr2 = {1, 2, 3, 4, 5};
		array<int, 5> arr3 = {1, 2, 3, 7, 9};

		auto p = mismatch(arr1.begin(), arr1.end(), arr2.begin());
		auto q = mismatch(arr1.begin(), arr1.end(), arr3.begin());

		cout << "p: ";
		if (p.first == arr1.end())
			cout << "equal\n";
		else
			cout << p.first - arr1.begin() << "difer\n";

		cout << "q: ";
		if (q.first == arr1.end())
			cout << "equal\n";
		else
			cout << q.first - arr1.begin() << "difer\n";
	}();

	// adjacent_find
	cout << "-- Example9 ------------ \n";
	[]
	{
		array<int, 8> arr = {1, 2, 3, 4, 5, 5, 6, 7};
		cout << "adjacent value: " << *adjacent_find(arr.begin(), arr.end()) << "\n";
	}();

	// unique
	cout << "-- Example10 ------------ \n";
	[]
	{
		array<int, 8> arr = {1, 2, 3, 4, 5, 5, 6, 7};
		auto p = unique(arr.begin(), arr.end());
		for (auto i = arr.begin(); i != p; ++i)
		{
			cout << *i << " ";
		}
		cout << "\n";
	}();

	return 0;
}