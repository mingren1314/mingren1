#include<iostream>
using namespace std;

//int main()
//{
//	int p, e, i, d;
//	cin >> p >> e >> i >> d;
//	for (int k = d+1; k <= 21252; k++)
//	{
//		if ((k - p) % 23 == 0 && (k - e) % 28 == 0 && (k - i) % 33 == 0)
//			cout << k-d << endl;
//	}
//}

//�Ż�

//int main()
//{
//	int p,e,i, d;
//	cin >> p >> e >> i >> d;
//	int k;
//	for (k = d + 1; (k - p) % 23; k++);
//	for (; (k - e) % 28; k+=23);
//	for (; (k - i) % 33; k+=23*28);
//	cout << k - d;
//}