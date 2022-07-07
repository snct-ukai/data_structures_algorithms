#include <iostream>
#include <vector>
using namespace std;

void QuickSort(vector<int>& S, int B, int T)
{
	if(B>=T)
		return;

	int div = S[B];

	int i = B;
	int j = T;
	while(i<j){
		while(i<=j && S[i]<=div){
			i++;
		}
		while(i<=j && S[j]>div){
			j--;
		}

		if(i<j){
			int tmp = S[i];
			S[i] = S[j];
			S[j] = tmp;
		}
	}

	int tmp = S[B];
	S[B] = S[j];
	S[j] = tmp;

	QuickSort(S, B, j-1);
	QuickSort(S, j+1, T);
}

int BinarySearch(int x, vector<int> S, int N)
{
	int B = 0;
	int T = N-1;

  int count = 0;
	while(count++, B<=T){
		int mid = (B+T)/2;

		if(S[mid]==x){
      cout << "key：" << x << "\t走査回数：" << count << endl;
			return mid;
		}
		else if(S[mid]<x){
			B = mid+1;
		}
		else{
			T = mid-1;
		}
	}

  cout << "key：" << x << "\t走査回数：" << count << endl;

	return -1;
}

int main()
{
	vector<int> S;
  int num = 0;
  cin >> num;
  while(cin){
      int n = 0;
      cin >> n;
      S.push_back(n);
  }

  QuickSort(S, 0, S.size());

	cout << BinarySearch(20293, S, num) << '\n';
	cout << BinarySearch(7789, S, num) << '\n';
	cout << BinarySearch(4021, S, num) << '\n';
	cout << BinarySearch(6586, S, num) << '\n';
	cout << BinarySearch(30000, S, num) << '\n';

	return 0;
}