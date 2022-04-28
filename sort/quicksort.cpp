#include <iostream>
using namespace std;

void QuickSort(int S[], int B, int T)
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

int main()
{
	int S[10] = {30, 100, 70, 90, 10, 50, 20, 60, 80, 40};

	for(int i=0; i<10; i++){
		cout << S[i] << ' ';
	}
	cout << '\n';

	QuickSort(S, 0, 9);

	for(int i=0; i<10; i++){
		cout << S[i] << ' ';
	}
	cout << '\n';

	return 0;
}
