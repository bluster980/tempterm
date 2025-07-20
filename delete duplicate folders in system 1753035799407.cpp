unordered_map<string, Trie*> links;// other variant uses map
string id = "";// folder name
bool mark = 0;// record the subtree is marked or not
Trie(string id = "") : id(id) {}// constructor