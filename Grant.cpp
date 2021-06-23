#include <iostream>

using namespace std;

void factors(){
    int n, a[100000], j=0;
    cin >> n;
    if(n >= 0){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            a[j++] = i;
            int factor = i;
            cout << factor << " ";
        }
    }


}else{
    cout << "Error";
}
}

int main(){
    factors();
    return 0;
}
