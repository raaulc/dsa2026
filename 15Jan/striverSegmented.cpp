#include<iostream>
using namespace std;

long long segmentedSieve(long long L, long long R){
    // step 1 - prepare the sample 
    long long limit = sqrt(R);
    vector<bool>samplePrime(limit+1, true);
    samplePrime[0] = samplePrime[1] = false; 

    // normal sieve 
    for(int i=2;i*i<=limit;i++){
        if(samplePrime[i]){
            for(long long j=i*i;j<=limit;j+=i){
                samplePrime[j] = false; 
            }
        }
    }

    // collect all the primes from sample sieve 
    vector<long long>strikers;
    for(long long i;i<=limit;i++){
        if(samplePrime[i]){
            strikers.push_back(i);
        }
    }

    // map new area 
    vector<bool>newArea(R-L+1, true);

    // search and mark
    for(long long sp:strikers){
        // get the new start
        long long start = (L/sp)*sp;
        if(start<L){
            start = start+sp;
        }
        // don't mark itself 
        if(start<sp*sp)start = sp*sp;

        for(long long i=start;i<=R;i+=sp){
            newArea[i-L] = false;
        }
    }

    // show it 
    vector<int> result;
    for(long long i=0;i<=R-L;i++){
        if(newArea[i] and (L+i)>1){
            cout<<(L+i)<<endl;
            result.push_back(i);
        }
    }
    return result.size();
}

int main(){
    long long L,R;cin>>L>>R;
    cout << segmentedSieve(L,R) << endl;
    return 0;
}