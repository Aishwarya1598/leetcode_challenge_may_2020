class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(int i=0;i<num.size();i++)
        {  
            while(k>0 && st.empty()!=1 && num[i]<st.top())
            {
                k=k-1;;
                st.pop();
            }
	// Don't push leading zeros
            if(st.empty()!=1 || num[i]!='0' )
            {
                st.push(num[i]);
            }
        }
        if(k>0)
        {
            while(k>0 && st.empty()!=1)
            {  st.pop();
                k--;
            }
        }
         if (st.empty())
             return "0";   
        int size=st.size();
        string s1="";
        while(st.empty()!=1)
        {
            s1=s1+st.top();
            st.pop();
        }
        string s2;
	// reverse string obtained from stack as it is first in first out
        for(int i=s1.size()-1;i>=0;i--)
            s2=s2+s1[i];
        return s2;
    }
};

Explaination:-
/* here we have used greedy approach ie. we are taking local optimals in order to reach global optimals, So, here we used a stack
in which the elements are pushed into if they are not leading zeros and if the current top element in stack is greater than the next element 
then the element in top of the stack is removed this process is continued till the k value becomes zero or string comes to an end. If k value 
still is non zero then the final top elements or the string last elements are removed till it becomes zero. In this process if all elements of 
the string become zero then zero is return else reverse of the string obtained from a stack is returned. */
