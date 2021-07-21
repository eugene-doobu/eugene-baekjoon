#include <iostream>
#include <queue>
using namespace std;

int main()
{
	// priority_queue
	// Container Adapter

	// vector, deque container와 붙어서 사용 가능 (list 불가능, 배열기반이 핵심인듯)
	// 내부적으로 <algorithm>의 힙 관련 함수들을 사용하여 구현
	// default: vector, 최소 힙

	priority_queue<int> int_vec_less_pq;
	priority_queue<int, deque<int>> int_deque_less_pq;
	priority_queue<int, vector<int>, greater<int>> int_vec_greater_pq;

	priority_queue<int> pq;
	pq.push(0);
	pq.top(); // 삭제하는거 아님
	pq.pop();

	pq.empty();
	pq.size();

	[] {
		priority_queue<int, vector<int>, greater<int>> pq;
		pq.push(5);
		pq.push(3);
		pq.push(87);
		pq.push(72);
		pq.push(15);
		pq.push(57);
		pq.push(43);
		while (!pq.empty())
		{
			cout << pq.top() << "\n";
			pq.pop();
		}
	}();
	return 0;
}