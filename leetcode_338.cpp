class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> countsVector(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            countsVector[i] = countsVector[i >> 1] + (i & 1);
        }

        return countsVector;
    }
};
