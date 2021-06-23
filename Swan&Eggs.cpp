#include <iostream>

using namespace std;
int main()
{
    int n, a[20];
    int total = 0;
    cin >> n;
    if(n > 0){

        for(int i = 0; i < n; i++){
            cin >> a[i];
            int egg;
            if(a[i] == 0){
                cout << "Error";
            }else{
                if(a[i] == 49){
                egg = 4;
            }else if(a[i] == 50){
                egg = 8;
            }else if(a[i] == 51){
                egg = 12;
            }else if(a[i] >= 52){
                egg = 16;
            }else if(a[i] < 49 || a[i] > 0){
                egg = 0;
            }else{
                cout << "Error";
                break;
            }
            total += egg;
            }

        }
        cout << total;
    }else if(n == 0){
        cout << n;
    }else{
        cout << "Error";
    }

    return 0;
}
