
void positive(int poi)
{
	assert(poi > 0);
	cout << poi << " 는 양의 정수" << endl;
}
int main()
{
	int num;
	cout << "Input a positive number : ";
	cin >> num;
	positive(num);
	return 0;
}