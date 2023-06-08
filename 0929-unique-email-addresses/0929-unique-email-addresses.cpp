class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
    set<string> s;
    for(string &email : emails) {
        string cleanEmail;
        for(char c : email) {
            if(c == '+' || c == '@') break;
            if(c == '.') continue;
            cleanEmail += c;
        }
        cleanEmail += email.substr(email.find('@'));
        s.insert(cleanEmail);
    }
    return s.size();
    }
};