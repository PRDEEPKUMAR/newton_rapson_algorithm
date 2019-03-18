#include<iostream>
#include<math.h>
using namespace std;
float nrAlgorithm(float m,float n)
{
    if(n==0)
        return 0;
    float g=1,x=1;
    int i=0;
    while(true)
    {
        x=((m-1)*pow(x,m)+n)/(m*pow(x,m-1));
        if(x==g)
        {
            break;
        }
            g=x;
        i++;
    }
    cout<<"After ith iteration : "<<i<<endl;
    return g;

}
int main()
{
    float n;
    float m;
    cin>>n>>m;
    float y=nrAlgorithm(m,n);
    cout<<y;
    return 0;
}
