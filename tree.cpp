int solve(int N, vector<int> p){
        vector<int> v(N, 0);
        
        for (int i = 1; i < N; i++){
          v[p[i]]++;  
        }
        //ANAND KUMAR
        int count = 0;
        for (int i = 1; i < N; i++){
         if (v[i] == 0)
            count++;   
        }
        
        return (N - count - 1); 
        
    }
