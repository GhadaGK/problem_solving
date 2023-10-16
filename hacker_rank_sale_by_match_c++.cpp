int sockMerchant(int n, vector<int> ar) {
        int i =0 , result = 0;
        stack<int> s ;
        sort(ar.begin() , ar.end());
        while( i < n ){
            s.push(ar[i]);
            if(s.top() == ar[i+1]) 
            {
                s.pop();
                if(i < ar.size() -1) i = i + 2;
                else i++ ;
            }
            else 
            {
                i++;            
            }
        }
        return result = (n - s.size())/2;   
}
