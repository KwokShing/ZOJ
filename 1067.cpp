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

void MinimumDisVec(int r, int g, int b,vector<vector<int> > & targetRGB,vector<int> & res) {
	double minDis = 65026;
	vector<vector<int> >::iterator it;
	vector<int>::iterator mit;
	for(it = targetRGB.begin(); it != targetRGB.end(); ++it) {
		double dis = sqrt(pow(r-(*it)[0],2) + pow(g-(*it)[1],2) + pow(b-(*it)[2],2));
		if(dis < minDis) {
			minDis = dis;
			res = *it;
		}
	}
}

int main()
{
	int r, g, b;
	int counter = 0;
	vector<vector<int> > targetRGB;
	vector<int> resVec;
	resVec.resize(3);
	while(cin>>r>>g>>b && -1 != r && -1 != g && -1 != b) {
		counter++;
		if(counter <= 16) {
			vector<int> tmp;
			tmp.push_back(r);
			tmp.push_back(g);
			tmp.push_back(b);
			targetRGB.push_back(tmp);
		} else {
			MinimumDisVec(r,g,b,targetRGB,resVec);
			printf("(%d,%d,%d) maps to (%d,%d,%d)\n", r,g,b,resVec[0],resVec[1],resVec[2]);
		}
	}
}
