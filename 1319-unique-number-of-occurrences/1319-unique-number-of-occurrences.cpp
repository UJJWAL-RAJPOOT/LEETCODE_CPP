class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>freq;
        int cnt=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                cnt++;
            }
            else{
                freq.push_back(cnt);
                   cnt = 1;
            }
        }
        freq.push_back(cnt);
        sort(freq.begin(),freq.end());
        for(int i=1;i<freq.size();i++){
            if(freq[i]==freq[i-1]){
                return false;
            }   
        }
        return true;
        
    }
};