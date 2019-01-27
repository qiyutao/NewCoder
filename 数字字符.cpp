#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string in;// = "1234567890111213141516171819";
    cin>>in;

    //string in = "1234";
    list<int> lt_in;
    for(int i = 0;i<in.length();i++) {
        //cout<<<<endl;
        lt_in.push_back(in.at(i)-'0');
    }
    // for(list<int>::iterator i = lt_in.begin();i!=lt_in.end();i++) {
    //     cout<<*i<<endl;
    // }
    vector<int> out;
    bool flag = false;
    for(int i = 1;i < 10;i++) {
        list<int>::iterator it;
        it = find(lt_in.begin(),lt_in.end(),i);
        if(it != lt_in.end()) {
            lt_in.erase(it);
        } else {
            out.push_back(i);
            flag = true;
            //cout<<lt_in.front()<<"    "<<i<<endl;
            break;
        }
    }
    if(!flag)
    out.push_back(1);
   while(!flag) {
      for(int i = 0;i < 10;i++) {
        list<int>::iterator it;
        it = find(lt_in.begin(),lt_in.end(),i);
        if(it != lt_in.end()) {
            lt_in.erase(it);
        } else {
            out.push_back(i);
            flag = true;
            break;
        }
    }
    if(!flag)
    out.push_back(0); 
   }


    for(int i = 0;i<out.size();i++) {
        cout<<out[i];
    }
    
}
