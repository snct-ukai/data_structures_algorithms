#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

static int num = 0;

void BubbleSort(vector<int> S, int N){
  bool flag;
  do{
    for(int i = 0; i < N - 1; i++){
      if(S[i] > S[i + 1]){
        int tmp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = tmp;

        flag = true;
      }
    }
    num++;
  }while(flag);
}

int main(int argc, char* argv[])
{
  cout << argc << argv[1] << endl;
	if(argc != 2){
		cerr << "ファイルを選択してください";
		return -1;
	}

	ifstream in;
  in.open(argv[1]);
  cout << in.bad();
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

	BubbleSort(S, 10);

  cout << "bubbleSort:" << num << endl;
	return 0;
}
