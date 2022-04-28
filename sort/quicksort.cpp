#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

static int cnt1 = 0, cnt2 = 0;

void QuickSort(vector<int> S, int B, int T)
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

		if(cnt1++, i<j){
			cnt2++;
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

int main()
{
	int datanum = 0;
	cin >> datanum;
	vector<int> S;
  for(int i = 0; i < datanum; i++){
    int s;
    cin >> s;
    S.push_back(s);
  }

	QuickSort(S, 0, datanum - 1);

	cout << "quickSort:" << cnt1 << ":" << cnt2 << endl;

	return 0;
}
