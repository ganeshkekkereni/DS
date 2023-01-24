class Solution {
public:
    int countPrimes(int n) {
        int count = 0 ;
        vector<bool> prime(n+1,true);
          prime [0] = prime [1] = false ; 
        for(int i=2 ; i<n ; i++)
            if(prime[i]){
                count++;
                for(int j=i*i ; j<n ; j=j+i){
                    prime[j]=false;
                }
            }return count++; 
       /* bool* isprime = new bool[n];
        for(int i=2; i<n; i++)
              isprime[i] = true;
        for(int i=2; i*i<n; i++)
        {
            if(!isprime)continue;
            for(int j=i*i; j<n; j+=i)
            {
                isprime[j] = false;
            }
        }
        int count = 0;
        for(int i=2; i<n; i++)
            if(isprime)count++;
        return count; 
        */
    }
};
