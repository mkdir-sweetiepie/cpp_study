
void positive(int poi)
{
	assert(poi > 0);
	cout << poi << " �� ���� ����" << endl;
}
int main()
{
	int num;
	cout << "Input a positive number : ";
	cin >> num;
	positive(num);
	return 0;
}