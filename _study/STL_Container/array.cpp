#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
	// array
	// 고정 길이 배열 + 멤버 함수

	// 초기화를 안하면 쓰레기값이 들어감
	array<int, 5> arr1;
	array<int, 5> arr2 = { 1, 2, 3 };
	array<int, 4> arr3 = { 1 }; // 첫번째 원소만 1, 나머지는 0
	array<int, 4> arr4;
	arr4 = { 1,2,3,4 }; // 복사라 생성과 동시에 초기화하는 것 보다 성능에 안좋음

	array<int, 5> arr = { 1,2,3,4,5 };
	arr.begin();
	arr.end();
	arr.rbegin();
	arr.rbegin();
	arr.cbegin(); // const begin, iterator를 이용해 원소 수정 불가
	arr.cend();
	arr.crbegin();
	arr.crend();

	arr.front();
	arr.back();
	arr.data(); // 배열의 첫번째 주소를 반환

	arr.fill(2); // 모든 원소를 2로 변경
	arr.swap(arr2); // arr2의 인자와 arr의 인자를 스왑

	arr.at(0);
	arr[0];

	arr.empty();
	arr.max_size();
	arr.size(); // max_size와 같음, Vector와 같은 컨테이너와 일관성을 위해 제공

	[] {
		array<int, 5> arr = { 1,2,4,3,5 };
		// 전위 증감연산자를 사용하자.
		for (auto iter = arr.cbegin(); iter != arr.cend(); ++iter) {
			cout << *iter << " ";
		}
		cout << "\ndata(): " << arr.data() << "\n\n";

		sort(arr.begin(), arr.end());
		for (auto iter = arr.cbegin(); iter != arr.cend(); ++iter) {
			cout << *iter << " ";
		}
		cout << "\n*data(): " << *arr.data();
		cout << "\nSize: " << arr.size() << "\n\n";

		arr.fill(7);
		for (auto iter = arr.crbegin(); iter != arr.crend(); ++iter) {
			cout << *iter << " ";
		}
		cout << "\n*(data()+2): " << *(arr.data() + 2);
		cout << "\nMax Size: " << arr.max_size();
	}();
	return 0;
}