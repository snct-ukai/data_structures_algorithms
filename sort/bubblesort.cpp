#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

static int cnt1 = 0, cnt2 = 0;

void BubbleSort(vector<int>* S, int N){
  bool flag;
  do{
    flag = false;
    for(int i = 0; i < N - 1; i++){
      if(cnt1++, (*S)[i] > (*S)[i + 1]){
        cnt2++;
        int tmp = (*S)[i];
        (*S)[i] = (*S)[i + 1];
        (*S)[i + 1] = tmp;

        flag = true;
      }
    }
  }while(flag);
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
		if(in.eof()){
			break;
		}
		S.push_back(s);
	}

	BubbleSort(&S, 10);

  cout << "bubbleSort:" << cnt1 << ":" << cnt2 << endl;
	return 0;
}
