int lonelyinteger(vector<int> a) {
    int target ;
    sort(a.begin() , a.end());
    for(int i = 0 ; i < a.size() ; i++){
        if(a[i] == a[i+1] && i < a.size() - 1) i = i+1;
        else {
            target = a[i];
            break;
        }
    }
    return  target ;
}
