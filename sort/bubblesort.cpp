#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

static int cnt1 = 0, cnt2 = 0;

void BubbleSort(int S[], int N){
	cnt1 = 0;
	cnt2 = 0;
  bool flag;
  do{
    flag = false;
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

int main(int argc, char* argv[])
{
	int* S;
	ifstream in("./data10.txt");
	int datanum;
	in >> datanum;
	S = new int[10];
	int i = 0;

	while(!in.eof()){
		int s;
		in >> s;
		if(in.eof()){
			break;
		}
		S[i] = s;
		i++;
	}
	in.close();

	BubbleSort(S, datanum);

  cout << "bubbleSort:" << cnt1 << ":" << cnt2 << endl;

	in.open("./data100.txt");
	in >> datanum;
	S = new int[100];
	i = 0;

	while(!in.eof()){
		int s;
		in >> s;
		if(in.eof()){
			break;
		}
		S[i] = s;
		i++;
	}
	in.close();

	BubbleSort(S, datanum);
	
  cout << "bubbleSort:" << cnt1 << ":" << cnt2 << endl;
	
	in.open("./data1000.txt");
	in >> datanum;
	S = new int[1000];
	i = 0;

	while(!in.eof()){
		int s;
		in >> s;
		if(in.eof()){
			break;
		}
		S[i] = s;
		i++;
	}
	in.close();

	BubbleSort(S, datanum);
	
  cout << "bubbleSort:" << cnt1 << ":" << cnt2 << endl;
	
	in.open("./data10000.txt");
	in >> datanum;
	S = new int[10000];
	i = 0;

	while(!in.eof()){
		int s;
		in >> s;
		if(in.eof()){
			break;
		}
		S[i] = s;
		i++;
	}
	in.close();

	BubbleSort(S, datanum);
	
  cout << "bubbleSort:" << cnt1 << ":" << cnt2 << endl;
	return 0;
}
