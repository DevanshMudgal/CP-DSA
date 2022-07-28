#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    //so we find max of y and w
    int a = max(w,y);
    //to find all possible values of the die dot/3rd person can get
    int p = 6+1-a; //as we have to consider number 'a' as well
    //now we need to find GCD of p and 6
    int d = __gcd(p,6);
    cout<<p/d<<'/'<<6/d; 
    return 0;
}