#include<iostream>
using namespace std;

void segmentedSieve(long long L, long long R){
    // step 1 - prepare the sample 
    long long limit = sqrt(R);
    vector<bool> isSmallPrime(limit+1,true);
    isSmallPrime[0] = isSmallPrime[1] = false;

    // small sieve find all primes upto sqrt(R)
    for(long long i=2;i*i<=limit;i++){
        if(isSmallPrime[i]){
            for(long long j=i*i;j<=limit;j+=i){
                isSmallPrime[j] = false;
            }
        }
    }

    // collect all the strikers
    vector<long long>strikers;
    for(long long i=2;i<=limit;i++){
        if(isSmallPrime[i]){
            strikers.push_back(i);
        }
    }

    // step 2 map the new area
    vector<bool>newArea(R-L+1,true);

    // step 3 search and destroy 
    for(long long p:strikers){
        // find the first multiple 
        long long start = (L/p)*p;
        if(start<L)start = start + p;
        
        // don't kill the first striker
        if(start<p*p)start = p*p;

        // march and jump along the multiples
        for(long long i=start;i<=R;i+=p){
            //map the new number with the local index
            newArea[i-L] = false;
        }
    }

    // step 4 - report it 
    cout<<"Primes in Range - " << L << " and " << R << endl;
    bool foundAny = false;

    for(long long i=0;i<=R-L;i++){
        //Actual number is L+i
        //we will check with >1 because 1 is never prime
        if(newArea[i]&&(L+i)>1){
            cout<<(L+i)<<" ";
            foundAny=true;
        }
    }

    if(!foundAny)cout<<"No prime found"<<endl;
    cout << endl;
}

int main(){
    long long L,R;cin>>L>>R;
    segmentedSieve(L, R);
    return 0;
}