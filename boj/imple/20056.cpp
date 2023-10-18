#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m, k;
set<pair<int, int>> spii;

class Fireball
{
public:
	int r;
	int c;
	int mass;
	int speed;
	int direction;

	void Move()
	{
		static const int dx[8] = { -1,-1,0,1,1,1,0,-1 };
		static const int dy[8] = { 0,1,1,1,0,-1,-1,-1 };

		r += dx[direction] * speed;
		c += dy[direction] * speed;

		while (r < 1) r += n;
		while (r > n) r -= n;
		while (c < 1) c += n;
		while (c > n) c -= n;

		spii.insert({ r, c });
	}

	void Dead()
	{
		r = -1000;
		c = -1000;
	}

	bool IsDead() const
	{
		return r == -1000 || c == -1000;
	}
};

int dirsWhenSameType[] = { 0, 2, 4, 6 };
int dirsWhenOtherType[] = { 1, 3, 5, 7 };

vector<Fireball> fireballs;

void boom(vector<Fireball*>& duplicated, vector<Fireball>& temp)
{
	bool isAllOdd = true;
	bool isAllEven = true;

	int allMass = 0;
	int allSpeed = 0;

	int r = duplicated[0]->r;
	int c = duplicated[0]->c;

	for (auto& fireball : duplicated)
	{
		bool isOdd = fireball->direction % 2;
		isAllOdd &= isOdd;
		isAllEven &= !isOdd;

		allMass += fireball->mass;
		allSpeed += fireball->speed;
		fireball->Dead();
	}

	int sz = (int)duplicated.size();
	bool isSameType = isAllOdd || isAllEven;
	int mass = allMass / 5;
	int speed = allSpeed / sz;

	if (mass > 0)
	{
		for (int i = 0; i < 4; ++i)
		{
			int d = isSameType ? dirsWhenSameType[i] : dirsWhenOtherType[i];
			temp.push_back({ r, c, mass, speed, d });
		}
	}
}

vector<Fireball> check()
{
	vector<Fireball> temp;
	for (auto pii : spii)
	{
		vector<Fireball*> duplicated;
		for (auto& fireball : fireballs)
			if (fireball.r == pii.first && fireball.c == pii.second)
				duplicated.push_back(&fireball);
		if (duplicated.size() >= 2)
			boom(duplicated, temp);
		else
		{
			for (const auto& fireball : duplicated)
				temp.push_back(*fireball);
		}
	}
	spii.clear();
	return temp;
}

int main()
{
	fastio;
	cin >> n >> m >> k;
	while(m--)
	{
		int r, c, m, s, d;
		cin >> r >> c >> m >> s >> d;
		fireballs.push_back({ r, c, m, s, d });
	}

	while(k--)
	{
		for (auto& fireball : fireballs)
			fireball.Move();
		fireballs = check();
	}

	int rst = 0;
	for (const auto& fireball : fireballs)
		rst += fireball.mass;
	cout << rst;
}
