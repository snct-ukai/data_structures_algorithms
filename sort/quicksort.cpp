#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

static int cnt1 = 0, cnt2 = 0;

void QuickSort(int S[], int B, int T)
{
	if(B>=T)
		return;

	int div = S[B];

	int i = B;
	int j = T;
	while(i<j){
		while(cnt1++,i<=j && S[i]<=div){
			i++;
		}
		while(cnt1++,i<=j && S[j]>div){
			j--;
		}
		if(i<j){
			cnt2++;
			int tmp = S[i];
			S[i] = S[j];
			S[j] = tmp;
		}
	}

	cnt2++;
	int tmp = S[B];
	S[B] = S[j];
	S[j] = tmp;

	QuickSort(S, B, j-1);
	QuickSort(S, j+1, T);
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

	QuickSort(S, 0, datanum);

  cout << "QuickSort:" << cnt1 << ":" << cnt2 << endl;
	cnt1 = 0;
	cnt2 = 0;

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

	QuickSort(S, 0, datanum);
	
  cout << "QuickSort:" << cnt1 << ":" << cnt2 << endl;
	cnt1 = 0;
	cnt2 = 0;
	
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

	QuickSort(S, 0, datanum);
	
  cout << "QuickSort:" << cnt1 << ":" << cnt2 << endl;
	cnt1 = 0;
	cnt2 = 0;
	
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

	QuickSort(S, 0, datanum);
	
  cout << "QuickSort:" << cnt1 << ":" << cnt2 << endl;
	return 0;
}
