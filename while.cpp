#include <iostream>

using namespace std;

int main()
{
    int counter=100;
    while(counter<=500){
        if(counter%3==0 && counter%5==0 &&counter%9==0){
                cout<<counter<<" is divisible by 3&5"<<endl;
        }
        counter++;
    }
    return 0;
}
