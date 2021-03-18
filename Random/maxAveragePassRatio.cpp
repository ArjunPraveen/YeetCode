class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        auto comp=[](pair<int,int> A,pair<int,int> B)
        {
            double d1=((double)A.first+1)/(A.second+1)-(double)A.first/A.second;
            double d2=((double)B.first+1)/(B.second+1)-(double)B.first/B.second;
            return d1<d2;
        };
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(comp)> pq(comp);
        double ans=0;
        vector<int> c;
        for(vector<int> i: classes)
        {
            pq.push(make_pair(i[0],i[1]));
        }
        while(extraStudents>0)
        {
            pair<int,int> p=pq.top();
            pq.pop();
            pq.push(make_pair(p.first+1,p.second+1));
            extraStudents--;
        }
        while(!pq.empty())
        {
            pair<int,int> p=pq.top();
            pq.pop();
            ans+=(double)p.first/p.second;
        }
        return ans/classes.size();
    }
};