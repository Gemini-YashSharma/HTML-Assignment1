
bool isStringValid(string inputstr) {
    
    if(inputstr.size()<3)
        return false;
    
    unordered_set<char> s;
    unordered_set<string> ss;
    
        ss.insert("gem");
        ss.insert("gini");
        ss.insert("mini");
        s.insert('g');
        s.insert('e');
        s.insert('m');
        s.insert('n');
        s.insert('i');
    
    int n=inputstr.size();
    for(int i=0; i<n; i++)
    {    
        if(s.find ( inputstr[i] ) == s.end())
            return false;
    }
    
    string t="";
    
    for(int i=0; i<inputstr.size();i++){
        if(t.size()>4)
            return false;
        
        if(ss.find(t)==ss.end())
            t+=inputstr[i];
        
        if(ss.find(t)!=ss.end())
            t="";
    }
    
    if(t!="")
        return false;
    
    return true;
}
