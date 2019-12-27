#include <bits/stdc++.h>

using namespace std;

int main() {
	while(1) {  
        system("data > input.txt");  
        system("sb < input.txt > sboutput.txt");  
        system("me < input.txt > meoutput.txt");  
        if(system("fc sboutput.txt meoutput.txt"))   break;  
    }  
	cout << "Here is error." << endl;
	return 0;
}