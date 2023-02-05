class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.length(), m=p.length();
	
    if(m>n)
	    return {};
	
	vector<int> pvv(26,0), svv(26,0), res;
    
    for(int l=0;l<m;l++)
        pvv[p[l]-'a']++;
    
    int i=0, j=0;
    
    while(j<n){
        svv[s[j]-'a']++;
        
		if((j-i+1)<m){            
            j++;
        }
        
        else if((j-i+1)==m){    

            if(pvv==svv)
                res.push_back(i);

            svv[s[i]-'a']--;

            i++;
            j++;
        }
    }
    return res; 
    }
};