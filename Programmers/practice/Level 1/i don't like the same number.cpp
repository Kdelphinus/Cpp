#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        if (answer[answer.size() - 1] != arr[i])
            answer.push_back(arr[i]);
    }

    // unique 함수를 사용한 풀이
    //arr.erase(unique(arr.begin(), arr.end()),arr.end());
    //vector<int> answer = arr;

    return answer;
}