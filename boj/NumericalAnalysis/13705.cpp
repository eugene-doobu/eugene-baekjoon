#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
const __float128 PI = 3.1415926535897932384626433832795028841971693993751058209749445923L;
__float128 a, b, c;

__float128 Sin128(__float128 x)
{
	while (x > PI) { x -= 2 * PI; }
	while (x < -PI) { x += 2 * PI; }
	if (x > PI / 2) { x = PI - x; }
	if (x < -PI / 2) { x = -PI - x; }
	__float128 ans = x;
	__float128 term = x, n = 1, sign = 1;
	for (int iter = 0; iter <= 30; ++iter)
	{
		n += 2;
		term *= x / (n - 1) * x / n;
		sign *= -1;
		ans += term * sign;
	}
	return ans;
}

__float128 Func(__float128 num)
{
	return (a * num) + (b * Sin128(num)) - c;
}

int main() {
	fastio;

	// __float128에 대한 cin 불가능
	long double A, B, C;
	cin >> A >> B >> C; a = A, b = B, c = C;

	__float128 left = (c - b) / a - 1;
	__float128 right = (c + b) / a + 1;
	__float128 mid, fmid, fright;

	for (long long i = 0; i < 100000; ++i)
	{
		mid  = (right + left) / 2;
		fmid = Func(mid);
		if (fmid > 0)      right = mid;
		else if (fmid < 0) left = mid;
		else break;
	}

	__float128 ans = (right + left) / 2;
	__float128 tmp = (long long)(ans * (__float128)1e7) / (__float128)1e7;

	long x = tmp * 1e7;
	printf("%.6lf", (x - x % 10 + (x % 10 >= 5) * 10) / 1e7);
}