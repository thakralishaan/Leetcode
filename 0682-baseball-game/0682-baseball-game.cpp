class Solution {
public:
    int calPoints(vector<string>& operations) {
        int val1;
        int val2;
        
        stack<int>st;
        
        for( string op:operations){
            
            switch(op[0]){
                
                case 'D':
                    st.push(st.top()*2);
                    break;
                
                case 'C':
                    st.pop();
                    break;
                
                case '+':
                
                    val1= st.top();
                    st.pop();
                    val2= st.top();
                    st.pop();
                
                    st.push(val2);            //be careful while adding values from stack take the later element first then move backward
                    st.push(val1);              //taken val2 before val1 as on top of stack default pop
                    st.push(val2+val1);
                    break;
                
                default:
                    st.push(stoi(op));
                    break;
            }
        }
        int total=0;
        
        while(!st.empty()){
            
            total=total+st.top();
            st.pop();
            
        }
        return total;
    }
};