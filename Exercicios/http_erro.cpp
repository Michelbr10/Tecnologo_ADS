#include <iostream>
using namespace std;

string http_error(int status)
{
    switch(status){
        case 400:
            return "bad request!";
            break;
        case 404:
            return "not found!";
            break;
        case 418:
            return "i'm a teapot!";
            break;
        default:
            return "something's wrong with the internet!";
    }
}


int main()
{
    cout << http_error(400) << endl;
    cout << http_error(404) << endl;
    cout << http_error(418) << endl;
    cout << http_error(500) << endl;
    return 0;
}