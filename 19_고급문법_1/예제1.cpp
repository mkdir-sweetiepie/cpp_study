#include <iostream>
#include <numeric> // std::iota
#include <vector>
#include <algorithm> // std::sort
using namespace std;

// 벡터의 정렬된 인덱스를 반환하는 함수
template <class T>
vector<int> index_with_sort(const vector<T>& v) {
    vector<int> index(v.size());
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&v](int i1, int i2) { return v[i1] < v[i2]; });
    return index;
}

// 정렬된 인덱스를 기반으로 다른 벡터를 정렬하는 함수
template <class T>
void sort_with_index(vector<T>& v, const vector<int>& index) {
    vector<T> sorted_v(v.size());
    for (size_t i = 0; i < index.size(); ++i) {
        sorted_v[i] = v[index[i]];
    }
    v = sorted_v; // 정렬된 값을 원래의 벡터에 복사
}

int main() {
    vector<char> src = { 'a', 'd', 'b', 'c' };
    vector<double> des = { 0.1, 0.4, 0.2, 0.3 };

    // 첫 번째 벡터를 정렬하여 정렬된 인덱스를 얻습니다.
    vector<int> idx = index_with_sort(des);

    // 두 번째 벡터를 정렬된 인덱스를 기반으로 정렬합니다.
    sort_with_index(src, idx);

    // 결과 출력
    cout << "Sorted src:" << endl;
    for (auto& item : src) {
        cout << item << " ";
    }
    cout << endl;

    cout << "Sorted des:" << endl;
    for (auto& item : des) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
