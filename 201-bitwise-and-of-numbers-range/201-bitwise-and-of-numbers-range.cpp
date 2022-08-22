class Solution {
public:
   int rangeBitwiseAnd(int m, int n) {
	if (m == n)
		return m;

	long ret = m;
	for (long i = m + 1; i <= n; i++) {
		ret &= i;
		if (ret == 0)
			break;
	}
	return ret;
}
};