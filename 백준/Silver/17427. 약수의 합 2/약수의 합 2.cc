#include <iostream>
using namespace std;
int main()
{
    long long f=0;
    long long N=0;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
       f+=i*(N/i);
    }
    cout<<f<<endl;
}