#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
struct Vals
{
    int bioVal;
    string dateVal;
};
int GetBioVal(string big, string small)
{
    int yearVal = pow((big[0] - small[0]), 2) +
        pow((big[1] - small[1]), 2) +
        pow((big[2] - small[2]), 2) +
        pow((big[3] - small[3]), 2);
    int monVal = pow((big[4] - small[4]), 2) +
        pow((big[5] - small[5]), 2);
    int dayVal = pow((big[6] - small[6]), 2) +
        pow((big[7] - small[7]), 2);
    return yearVal * monVal * dayVal;
}
int main() {
    fastio; string small; cin >> small; int t; cin >> t;
    vector<Vals> vals;
    while (t--)
    {
        string big; cin >> big; int bio = GetBioVal(big, small);
        vals.push_back(Vals{ bio, big });
    }
    sort(vals.begin(), vals.end(), [](Vals first, Vals second)
        {
            if (first.bioVal != second.bioVal)
                return first.bioVal > second.bioVal;
            return first.dateVal < second.dateVal;
        });

    cout << vals[0].dateVal << "\n";
}