#include<iostream>
using namespace std;
void Han(int n, char x='A', char y = 'B', char z = 'C')
{
	if (n == 1)
	{
		cout << "Move disk from " << x << " to " << z << endl;
		return;
	}

	Han(n - 1, x, z, y);
	cout << "Move Disk from " << x << " to " << z << endl;
	Han(n - 1, y, x, z);
}
int main()
{
	int n;
	cout << "number of disks";
	cin >> n;
	Han(n);
	return 0;
}