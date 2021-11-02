#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % divisor == 0)
            answer.push_back(arr[i]);
    }

    if (answer.empty())
        return {-1};

    return answer;
}