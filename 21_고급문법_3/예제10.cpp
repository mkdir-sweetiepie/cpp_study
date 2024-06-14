#include <iostream>
#include <array>
using namespace std;
int main() {
	size_t nRow = 4;
	size_t nCol = 5;
	array<array<int, nCol>, nRow> arValue{};
	// 값 할당
	for (size_t i = 0; i < nRow; ++i) {
		for (size_t j = 0; j < nCol; ++j) {
			arValue[i][j] = i * j;
		}
	}
	// 값 출력
	for (const auto& row : arValue) {
		for (const auto& item : row) {
			cout << item << " ";
		}
		cout << endl;
	}
}