#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(int x, vector<int> S, int N)
{
    int count = 0;
	for(int i=0; i<N; i++){
        count++;
		if(S[i]==x){
            cout << "key：" << x << "\t走査回数：" << count << endl;
			return i;
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

	cout << LinearSearch(20293, S, num) << '\n';
	cout << LinearSearch(7789, S, num) << '\n';
	cout << LinearSearch(4021, S, num) << '\n';
	cout << LinearSearch(6586, S, num) << '\n';
	cout << LinearSearch(30000, S, num) << '\n';

	return 0;
}