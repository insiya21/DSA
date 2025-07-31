class solution{
public:
    void removeoccRE(string &s,string &part){
        int found=s.find(part);
        if(found!=string::npos){
            string left_part=s.substr(0,found);
            string right_part=s.substr(found+part.size(),s.size());
            s=left_part+right_part;
            removeoccRE(s,part);
        }
        else{
            return;
        }
    }
    string removeOccurrences(string s, string part) {
        removeoccRE(s,part);
        return s;
    }
};