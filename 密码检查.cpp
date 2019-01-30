#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string lines[n];
    string results[n];
    for(int i=0;i<n;i++) {
        cin >> lines[i];
    }

    for(int i=0;i<n;i++) {
        if(lines[i].size() < 8 || (lines[i][0]>='0'&&lines[i][0]<='9')) {
            results[i] = "NO";
            continue;
        }
        int table[3] = {0,0,0};
        for(int j = 0;j<lines[i].size();j++) {
            if(lines[i].at(j)>='A'&&lines[i].at(j)<='Z') {
                table[0] = 1;
            } else if(lines[i].at(j)>='a'&&lines[i].at(j)<='z') {
                table[1] = 1;
            } else {
                table[2] = 1;
            }
        }
        int count = table[0] + table[1] + table[2];
        if(count <= 1) {
            results[i] = "NO";
            continue;
        }

        results[i] = "YES";   
    }

    for(int i=0;i<n;i++) {
        cout<< results[i] << endl;
    }
    return 0;
}
