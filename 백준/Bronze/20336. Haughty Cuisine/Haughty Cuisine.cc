#define fastio cin.tie(0)->sync_with_stdio(0)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    fastio;
    int n; cin >> n;

    int recommend_d; cin >> recommend_d;
    vector<string> recommend_dishes(recommend_d);
    for (int i = 0; i < recommend_d; ++i) {
        cin >> recommend_dishes[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        int temp_d;
        cin >> temp_d;
        for (int j = 0; j < temp_d; ++j) {
            string temp_dish;
            cin >> temp_dish;
        }
    }

    cout << recommend_d << "\n";
    for (int i = 0; i < recommend_d; ++i)
        cout << recommend_dishes[i] << "\n";

    return 0;
}