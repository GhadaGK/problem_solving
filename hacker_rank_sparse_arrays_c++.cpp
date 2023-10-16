vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
        vector <int> c;
    for(int i =0 ; i<queries.size() ;i++){
        int counter = std::count(strings.begin(), strings.end(), queries[i]);
        c.push_back(counter);
    }

    return c;
}
