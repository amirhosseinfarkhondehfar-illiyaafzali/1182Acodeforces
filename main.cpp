#include <iostream>
#include<math.h>
using namespace std;
int main (){
    int a;
    cin >> a;
    if (a%2==1){
        cout<<0<<endl;
    }
    else{
        int bb=pow(2,a/2);
        cout<<bb<<endl;
    }
}