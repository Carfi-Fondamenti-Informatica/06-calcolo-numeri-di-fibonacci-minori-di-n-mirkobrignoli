#include <iostream>

using namespace std;

int main()
{
    int n = 0,primo = 1,secondo = 1,terzo = 0;
    cin >> n;
    bool finito = true;
    
        cout << primo << endl;
        cout << secondo <<endl;
        while (n-2 > 0 && finito){
            terzo = primo + secondo;
            primo = secondo;
            secondo = terzo;
            if(terzo <= n){
                    cout << terzo << endl;
            }
            else{
                finito = false;
            }

            n--;
        } 
    return 0;
}
