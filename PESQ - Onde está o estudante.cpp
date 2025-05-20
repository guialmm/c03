#include <iostream> 
using namespace std;

int main(){

    int n;
    cin >> n;
    int matricula;
    int y = -1;
    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> matricula;
        y++;
    }

    cin >> x;

    if (x == matricula)
    cout << "Corredor " << y << endl;
    else
    cout << "Nao localizado" << endl;

    return 0;
}