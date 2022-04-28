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

int main(int argc, char* argv[])
{
	if(argc != 2){
		cerr << "ファイルを選択してください";
		return -1;
	}

	ifstream in(argv[1]);
	int datanum = 0;
	in >> datanum;
	vector<int> S;

	while(!in.eof()){
		int s;
		in >> s;
		S.push_back(s);
	}

	QuickSort(S, 0, datanum - 1);
	for(auto s : S){
		cout << s << " ";
	}
	cout << endl;
	cout << "quickSort:" << cnt1 << ":" << cnt2 << endl;

	return 0;
}
