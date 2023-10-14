class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &arr)
    {

        vector<vector<int>> result;

        if (size(arr) < 3)
            return result;
        sort(arr.begin(), arr.end());
        for (int x = 0; x < size(arr) - 2; x++)
            if (x == 0 || (x > 0 && arr[x] != arr[x - 1]))
            {
                {
                    int i = x + 1, j = size(arr) - 1;
                    while (i < j)
                    {
                        if (arr[x] + arr[i] + arr[j] == 0)
                        {
                            result.push_back({arr[x], arr[i], arr[j]});
                            while (i < j && arr[i] == arr[i + 1])
                            {
                                i++;
                            }
                            while (i < j && arr[j] == arr[j - 1])
                            {
                                j--;
                            }
                            i++;
                            j--;
                        }
                        else if (arr[x] + arr[i] + arr[j] < 0)
                        {
                            i++;
                        }
                        else
                        {
                            j--;
                        }
                    }
                }
            }
        return result;
    }
};