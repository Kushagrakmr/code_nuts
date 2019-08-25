#include <iostream>
using namespace std;

int main() 
{
    
    long long int T,N;
    long long int A[200000000],i;
    long double sum=0,mean;
    
    cin >> T;
    
    while(T != 0)
    {
        double res;
        cin >> N;
        sum=0;
        for(i=1;i<=N;i++)
        {
            cin >> A[i];
            sum = sum + A[i];
        }
        mean = sum / N;
        int count;
        count=0;
        for(i=1;i<=N;i++)
        {
            res = ((sum - A[i])/(N-1));
            
            if(mean == res)
            {
                count=1;
                cout << i<<endl;
                break;
            }
            
        }
        if(count == 0)
        {
            cout << "Impossible"<<endl;
        }
        
        T--;
    }
}