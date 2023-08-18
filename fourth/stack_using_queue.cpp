#include<bits/stdc++.h>
using namespace std;
//method 1
class Stack_1{
    int N=0;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack(){
        N=0;
    }

    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop(){
        q1.pop();
        N--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return N;
    }
};

//method 2
class Stack_2{
    int N=0;
    queue<int> q1;
    queue<int> q2;

    public:
    stack(){
        N = 0;
    }
    void pop(){
        if(q1.empty()){
            return ;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void push(int val){
        q1.push(val);
        N++;
    }
    int top(){
       if(q1.empty()){
            return -1;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp; 

        return ans;
    }
    int size(){
        return N;
    }
};

int main()
{
    Stack_1 st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    
    cout<<st.size()<<endl;

     Stack_2 st2;
    st2.push(1);
    st2.push(2);
    st2.push(3);
    st2.push(4);
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
    st2.pop();
    st2.pop();
    st2.pop();
    
    cout<<st2.size()<<endl;

    
    return 0;
}