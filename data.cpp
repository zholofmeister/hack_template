#include <bits/stdc++.h>
#include <chrono>
#include <random>

using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int randInt(int l, int r) {
	return (rng() % (r - l + 1)) + l;
}

int main() {
	
	return 0;
}