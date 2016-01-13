#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <cstring>
#include <queue>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int ii = 0;
	while(cin >> n && n != 0 ) {
		if(ii++!=0)
			printf("\n");
		int m = n*2;
		vector<int> p1;
		vector<int> p2;
		vector<int>::iterator it1;
		vector<int>::iterator it2;
		int score1 = 0, score2 = 0;
		while(m--) {
			int input;
			cin>>input;
			if(n-- > 0)
				p1.push_back(input);
			else
				p2.push_back(input);
		}
		for(it1 = p1.begin(), it2 = p2.begin(); it1 != p1.end()|| it2 != p2.end(); ++it1,++it2) {
			if(1 == *it1 && 2 == *it2) {
				score1 += 6;
			} else if(2 == *it1 && 1 == *it2) {
				score2 += 6;
			} else if(1 == *it1 - *it2) {
				score2 += *it1 + *it2;
			} else if(1 == *it2 - *it1) {
				score1 += *it1 + *it2;
			} else if(1 < *it1 - *it2) {
				score1 += *it1;
			} else if(1 < *it2 - *it1) {
				score2 += *it2;
			}
		}
		printf("A has %d points. B has %d points.\n",score1,score2);
	}
}
