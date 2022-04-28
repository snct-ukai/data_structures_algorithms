#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

static int cnt1 = 0, cnt2 = 0;

void BubbleSort(vector<int> S, int N){
  bool flag;
  do{
    for(int i = 0; i < N - 1; i++){
      if(cnt1++, S[i] > S[i + 1]){
        cnt2++;
        int tmp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = tmp;

        flag = true;
      }
    }
  }while(flag);
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

	BubbleSort(S, 10);

  cout << "bubbleSort:" << cnt1 << ":" << cnt2 << endl;
	return 0;
}
