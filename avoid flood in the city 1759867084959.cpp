class UnionFind{
public:
    vector<int> root;
    UnionFind(int n): root(n+1){
        iota(root.begin(), root.end(), 0);
    }
    int Find(int x){// path compression
        return (x==root[x])?x:root[x]=Find(root[x]);
    }
    void UnionNext(int x){
        root[x]=Find(x+1);// union x & x+1
    }

};