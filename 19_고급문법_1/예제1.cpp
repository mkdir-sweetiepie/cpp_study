#include <iostream>
#include <numeric> // std::iota
#include <vector>
#include <algorithm> // std::sort
using namespace std;

// ������ ���ĵ� �ε����� ��ȯ�ϴ� �Լ�
template <class T>
vector<int> index_with_sort(const vector<T>& v) {
    vector<int> index(v.size());
    iota(index.begin(), index.end(), 0);
    sort(index.begin(), index.end(), [&v](int i1, int i2) { return v[i1] < v[i2]; });
    return index;
}

// ���ĵ� �ε����� ������� �ٸ� ���͸� �����ϴ� �Լ�
template <class T>
void sort_with_index(vector<T>& v, const vector<int>& index) {
    vector<T> sorted_v(v.size());
    for (size_t i = 0; i < index.size(); ++i) {
        sorted_v[i] = v[index[i]];
    }
    v = sorted_v; // ���ĵ� ���� ������ ���Ϳ� ����
}

int main() {
    vector<char> src = { 'a', 'd', 'b', 'c' };
    vector<double> des = { 0.1, 0.4, 0.2, 0.3 };

    // ù ��° ���͸� �����Ͽ� ���ĵ� �ε����� ����ϴ�.
    vector<int> idx = index_with_sort(des);

    // �� ��° ���͸� ���ĵ� �ε����� ������� �����մϴ�.
    sort_with_index(src, idx);

    // ��� ���
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
