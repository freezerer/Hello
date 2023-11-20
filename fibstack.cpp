#include<iostream>
#include<stack>
using namespace std;
int fibstack(int n)
{
    stack<int> f;
    f.push(n);
    while(!f.empty())
    {
        int m =f.top();
        f.pop();
        if(m==0)
            return 0;
        else if(m==1)
            return 1;
        else
        {
            f.push(m-1);
            f.push(m-2);
        }
    }
}
int main()
{
    int n=10;
    int result=fibstack(n);
    cout<<result<<endl;
}