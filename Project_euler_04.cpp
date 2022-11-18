#include <iostream>
using namespace std;
int ispal(int n1){
    int tmp = 0;
    while(n1 != 0){
     
        tmp = (tmp*10)+n1%10;
        n1 /= 10;
    }
    return tmp;
}
int main() {
    // Write C++ code here
    int res = 0;
    
    for(int i = 999; i > 100; i--){
        for(int j = i; j > 100; j--){
            int n = i*j;
            if(ispal(n) == n){
                cout<<n<<endl;
            }
        }
    }

    return 0;
}