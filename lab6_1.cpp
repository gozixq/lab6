#include<iostream>
using namespace std;

int main(){
    int i=-1,x;
    int e=0;
    int o=0;
    while (i<0)
    {
        cout << "Enter an integer: ";
        cin >> x;
        if(x==0)
        {
            i=1;

        }
        else
        {
            if(x%2==0)
            {
                e++;
                //e = e+1;
            }
            else
            {
                o++;
            }
        }
    }
    
    cout << "#Even numbers = " << e << endl;
    cout << "#Odd numbers = " << o << endl;
    return 0;
}
