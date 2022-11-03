#include <bits/stdc++.h>

using namespace std;

string path;
int cont = 0;
int mapa[7][7] = {0};

void back(int k, int x, int y) {
	if(k == 48) {
		if(x == 0 && y == 6)
			cont++;
	} else {
		if(x < 0 || y < 0 || x >= 7 || y >= 7)
			return;
		if(mapa[y][x])
			return;
		if(x == 0 && y == 6)
			return;
		if((y == 0 || y == 6) && x != 0 && x != 6)
			if(!mapa[y][x-1] && !mapa[y][x+1])
				return;
		if((x == 0 || x == 6) && y != 0 && y != 6)
			if(!mapa[y-1][x] && !mapa[y+1][x])
				return;
		if(x != 0 && y != 0 && x != 6 && y != 6) {
			if(mapa[y-1][x] && mapa[y+1][x] && !mapa[y][x-1] && !mapa[y][x+1])
				return;
			if(!mapa[y-1][x] && !mapa[y+1][x] && mapa[y][x-1] && mapa[y][x+1])
				return;
		}
		mapa[y][x] = 1;
		if(path[k] == '?' || path[k] == 'D')
			back(k+1, x, y+1);
		if(path[k] == '?' || path[k] == 'U')
			back(k+1, x, y-1);
		if(path[k] == '?' || path[k] == 'L')
			back(k+1, x-1, y);
		if(path[k] == '?' || path[k] == 'R')
			back(k+1, x+1, y);
		mapa[y][x] = 0;
	}
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> path;

	back(0, 0, 0);
	cout << cont << endl;
    return 0;
}
