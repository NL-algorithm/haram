#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> card(N);
    for (int i = 0; i < N; i++)
    {
        cin >> card[i];
    }

    int res = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int val = card[i] + card[j] + card[k];
                if (val > M)
                    continue;
                else if (val > res)
                    res = val;
            }
        }
    }

    cout << res;
}

// 동적 할당 or vector!!
/*
#include <vector>
- vector<자료형> 변수명
    ex) vector<int> v;

- 요소 삽입
    - v.push_back(): 끝에 요소 추가
    - v.pop_back(): 마지막 부분 제거
    - v.insert(삽입할 위치, 변수 값): 원하는 위치에 요소 삽입
    - v.clear(): 모든 요소 제거
    - v.resize(수정 값): 벡터 사이즈 조정
    - v.erase(삭제할 위치): 사용자가 원하는 index값의 요소 삭제
    - v.swap(벡터 변수): 벡터 <-> 벡터
*/