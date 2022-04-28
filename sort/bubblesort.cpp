#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void BubbleSort(int S[], int N){
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
  }while(flag);
}

int main(){
  int S[10] = {30, 100, 70, 90, 10, 50, 20, 60, 80, 40};
  for(int i=0; i<10; i++){
		cout << S[i] << ' ';
	}
	cout << '\n';

	BubbleSort(S, 10);

	for(int i=0; i<10; i++){
		cout << S[i] << ' ';
	}
	cout << '\n';

	return 0;
}
