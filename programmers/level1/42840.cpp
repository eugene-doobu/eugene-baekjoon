#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> rst;
	vector<int> supo1 = { 1,2,3,4,5 };
	vector<int> supo2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
	vector<int> supo3 = { 3,3,1,1,2,2,4,4,5,5 };
	vector<int> correct(4, 0);
	int mx = 0;
	for (int i = 0; i < answers.size(); ++i) {
		if (answers[i] == supo1[i % supo1.size()]) correct[1]++;
		if (answers[i] == supo2[i % supo2.size()]) correct[2]++;
		if (answers[i] == supo3[i % supo3.size()]) correct[3]++;
	}
	mx = max(correct[1], max(correct[2], correct[3]));
	for (int i = 1; i <= 3; i++) {
		if (correct[i] == mx) rst.push_back(i);
	}
	return rst;
}