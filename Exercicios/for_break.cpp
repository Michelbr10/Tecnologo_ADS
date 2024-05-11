#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i < 10; i++){
        if(i>=5){
            cout << "Numero maior ou igual a 5!" << endl;
            break;
        }
        else{
            cout << "Continue!" << endl;
        }
    }
    return 0;
}