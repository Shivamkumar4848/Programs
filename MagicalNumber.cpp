#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


void magiCal()
{
    int n, a[20];
    cin >> n;

	int q=1, p=1;
	if(n > 0){
	for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i] <= 0){
            cout << "Error" << " ";
        }else{
            string num = to_string(a[i]);
            for(int j = 0; j < num.size(); j++){
                if(j % 2 == 0){
                    q *= int(num[j]);
                }else{
                    p *= int(num[j]);
                }
            }
        if(p >= q){
            cout << "Dominant" << " ";
        }else{
            cout << "Magical" << " ";
        }
	}

	}
	}else{
	    cout << "Error";

	}
}


int main()
{
	magiCal();
	return 0;
}
