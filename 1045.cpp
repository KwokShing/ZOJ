#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <cstring>
#include <queue>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
	double input;
	while(cin>>input && input != 0) {
		double sum = 0;
		int i = 2;
		for(; sum < input; ++i) {
			sum += 1.0/i;
		} 
		cout << i-2 <<" card(s)" << endl;
	}
}
