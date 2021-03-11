#include<iostream>

using namespace std;

int easySum(int l, int r)
{
    int sum=0;
    for(int i=l;i<=r;i++){
        
        sum+=i;
        i=-i;

    }
    return sum;
}
int main(){
    int a,b;
    cin >> a;
	cin >> b;
    a=-a;
    cout << easySum(a,b);
    return 0;
}
