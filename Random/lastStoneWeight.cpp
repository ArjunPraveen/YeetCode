class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==0)
            return 0;
        if(stones.size()==1)
            return stones[0];
        priority_queue<int,vector<int>> pq;
        for(int i=0;i<stones.size();i++)
            pq.push(stones[i]);
        int x,y;
        while(pq.size()>1)
        {
            y=pq.top();
            pq.pop();
            x=pq.top();
            pq.pop();
            if(y>x)
                pq.push(y-x);
        }
        if(pq.empty())
            return 0;
        return pq.top();
        
    }
};
