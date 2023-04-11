#include <iostream>
using namespace std;

long long int countNum(int num)
{
    if(num==0)
    {
        return 1;   
    }
    else
    {
        return num * countNum(num-1);
    }
}

int main() {
    int num;
    cin >> num;
    cout << countNum(num);
}
