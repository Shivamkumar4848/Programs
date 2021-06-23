#include <iostream>
#include <iomanip>
using namespace std;

void grocery(){
    float x, y, z, t, w;
    int month, year;
    cin >> x >> y >> z >> t >> w >> month >> year;
    float num = x + y + z + t + w;
    float avg;

    if (x > y || z > y || t > y || w > y || x < 1 || y < 1 || z < 1 || t < 1 || w < 1){
        cout << "Error" << endl;
    }else if(month > 12 || month < 1 || year < 1){
        cout << "Error";
    }else{
        switch(month){
        case 1:
            avg = num * 31;
            cout << num << " " << avg << endl;
            break;
        case 2:
            if(year % 4 == 0){
                avg = num * 29;
                cout << num << " " << avg << endl;
            }else{
                 avg = num * 28;
                cout << num << " " << avg << endl;
            }
            break;

        case 3:
             avg = num * 31;
            cout << num << " " << avg << endl;
            break;
        case 5:
             avg = num * 31;
            cout << num << " " << avg << endl;
            break;
        case 7:
             avg = num * 31;
            cout << num << " " << avg << endl;
            break;
        case 8:
             avg = num * 31;
            cout << num << " " << avg << endl;
            break;
        case 10:
             avg = num * 31;
            cout << num << " " << avg << endl;
            break;
        case 12:
             avg = num * 31;
            cout << num << " " << avg << endl;
            break;
        default:
             avg = num * 30;
            cout << num << " " << avg << endl;
            break;
        }

    }

}

int main()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    grocery();
    return 0;
}
