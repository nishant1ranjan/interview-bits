bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
vector<pair<int,int>> ans;
for(int i=0;i<arrive.size();i++){
ans.push_back(make_pair(arrive[i],1));
ans.push_back(make_pair(depart[i],0));
}

int max_active = 0,count =0;
sort(ans.begin(),ans.end())
for(int i=0;i<ans.size();i++){
if(ans[i].second == 1){
count++;
max_active = max(max_active,count);
if(max>K){
return false
}
}
else{
count--;
}
}
return true;




}
