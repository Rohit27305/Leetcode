class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if(n<2){
            return n;
        }
        priority_queue<int, vector<int>, greater<int> > pq;
        for (int i = 0; i < n; i++) {
            pq.push(arr[i]);
        }
        set<int> temp;
        while(!pq.empty()){
            temp.insert(pq.top());
            pq.pop();
        }
        set<int>::iterator itr = temp.begin();
        int i=0 , size = temp.size();
        cout<<size;
        for(;itr!=temp.end();itr++){
            arr[i] = *itr;
            i++;
        }
        int an = 1, ans = 1;
        for(int i=1;i<size;i++){
            if(arr[i-1]+1 == arr[i] || arr[i-1] == arr[i]){
                an++;
            }else{
                an = 1;
            }
            ans = max(ans , an);
        }
        return ans;
    }
};