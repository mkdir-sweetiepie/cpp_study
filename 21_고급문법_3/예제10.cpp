#include <iostream>
#include <array>
using namespace std;
int main() {
	size_t nRow = 4;
	size_t nCol = 5;
	array<array<int, nCol>, nRow> arValue{};
	// �� �Ҵ�
	for (size_t i = 0; i < nRow; ++i) {
		for (size_t j = 0; j < nCol; ++j) {
			arValue[i][j] = i * j;
		}
	}
	// �� ���
	for (const auto& row : arValue) {
		for (const auto& item : row) {
			cout << item << " ";
		}
		cout << endl;
	}
}