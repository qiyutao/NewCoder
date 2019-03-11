#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main() {
    int n = 256;
    for(int i = 1;i<n;i++) {
        int tmp = i*i; 
        char num[10];
        sprintf(num,"%d",tmp);
        int end = strlen(num);
    
        int med = end/2;
  
        int begin;
        for(begin = 0;begin<med;begin++) {
            if(num[begin]!=num[end-begin-1]) {
                break;
            }
        }

        if(begin == med)
        cout<<i<<endl;
    }
}
