#include<iostream>
using namespace std;

int cnt = 0;

void fn(){
    if(cnt == 4) return; //base step
    else{
        cout << cnt << endl;
        cnt++;
        fn(); //function calling itself
    }
}

int main(){
    fn();//first call
    return 0;
}