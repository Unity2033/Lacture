﻿#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define SIZE 8

class Graph
{
private:
    int degree[SIZE];
    queue<int> queue;
    vector<int> graph[SIZE];
};

int main()
{
#pragma region 위상 정렬
    // 방향 그래프에 존재하는 각 정점들의 선행 순서를 지키며,
    // 모든 정점을 차례대로 진행하는 알고리즘입니다.

    // 사이클이 발생하는 경우 위상 정렬을 수행할 수 없습니다.

    // DAG(Directed Acyclic Graph) : 사이클이 존재하지 않는 그래프

    // 시간 복잡도 : O(V + E)

    // 위상 정렬하는 방법

    // 1. 진입 차수가 0인 정점을 Queue에 삽입합니다.

    // 2. Queue에서 원소를 꺼내 연결된 모든 간선을 제거합니다.

    // 3. 간선 제거 이후에 진입 차수가 0이 된 정점을 Queue에 삽입합니다.

    // 4. Queue가 비어있을 때까지 2번 ~ 3번을 반복 수행합니다.



#pragma endregion


    return 0;
}

