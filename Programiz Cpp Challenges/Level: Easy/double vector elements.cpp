vector<int> doubleVectorElements(vector<int>& vec) {
    for(int i=0;i<vec.size();++i){
        vec[i]*=2;
    }
    return vec;
}
