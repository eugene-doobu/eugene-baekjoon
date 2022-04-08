#include <iostream>
#include <deque>
using namespace std;

int main()
{
	// deque
	// 배열기반
	// vector는 새로운 원소 추가시 메모리 재할당 후 이전 원소를 복사하는 방식이라 삽입시 성능이 저하됨
	// deque는 vector의 단점을 보완하기 위해 여러개의 메모리 블록을 할당하고 하나의 블록처럼 여기는 기능 제공
	// 메모리 부족시 일정한 크기의 새로운 메모리 블록을 할당

	// 컨테이너 시작/끝 위치가 아닌 곳에서 삽입/제거 수행시 그 성능은 list에 비해 현저히 떨어짐
	// 메모리 부족시 새로운 chunk를 할당해 붙이는 방식이므로 vector에서 가능했던 원소들간 포인터 연산이 불가능

	deque<int> dq_empty;
	deque<int> dq_0for10(10);
	deque<int> dq_4for10(10, 4);
	deque<int> dq_copy(dq_empty);
	auto compare = dq_0for10 <= dq_4for10;
	cout << compare << "\n";

	deque<int> dq(10);
	dq.assign(4, 3);
	dq.at(2);
	dq[3];
	dq.front();
	dq.back();
	dq.clear();
	dq.push_front(3);
	dq.pop_front();
	dq.push_back(5);
	dq.pop_back();

	deque<int>::iterator iter;
	iter = dq.begin();
	iter = dq.end();

	deque<int>::reverse_iterator riter;
	riter = dq.rbegin();
	riter = dq.rend();

	dq.resize(12);
	dq.resize(14, 2);
	dq.size();
	dq.swap(dq_empty);

	// insert시 원소의 개수가 적은 쪽으로 미루어서 삽입
	dq.insert(dq.begin(), 2, 3); // 위치, 갯수, 값
	dq.insert(dq.begin(), 4); // 위치, 값
	dq.erase(dq.begin());
	dq.empty();

	[] {
		deque<int> dq;
		for (int i = 1; i <= 10; i++) {
			dq.push_back(i);
		}
		dq.push_front(0);
		cout << "\n";

		cout << "Forward iter\n";
		for (auto iter = dq.begin(); iter != dq.end(); iter++) {
			cout << *iter << " ";
		}
		cout << "\n\n";

		cout << "Reverse iter\n";
		for (auto iter = dq.rbegin(); iter != dq.rend(); iter++) {
			cout << *iter << " ";
		}
		cout << "\n\n";

		dq.clear();
	}();

	return 0;
}