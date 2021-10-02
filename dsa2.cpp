#include <iostream>
#include <vector>

using namespace std;

void push(vector<int>&a){
    a.push_back(10);
    a.push_back(20);
}

void top(vector<int>&a){
    int k;
    k = a[a.size()-1];
    cout<<k<<endl;
}

bool isEmpty(vector<int>&a){
    return a.size()==0;
}

void pop(vector<int>&a)
{
    if(!isEmpty(a))
        a.pop_back();
}


int main()
{
    vector<int>a;
    
    push(a);
    top(a);
    pop(a);
    top(a);
    
    
    return 0;
}
}

//kadanes algo
