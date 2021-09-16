bool isValid(string s) {
        stack<char> store;
        char x, y;

        bool result = true;
        int i = 0;
        while(s[i] != '\0'){
               if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                       store.push(s[i]);
               }else{
                       if(store.size()){
                               x = store.top();
                               if((s[i] == ')' && x == '(') || (s[i] == '}' && x == '{') || (s[i] == ']' && x == '[') ){
                                      store.pop();
                               }else{
                                       return false;
                               }
                       }else{
                               return false;
                       }
               }
               i++;
        }
        return !store.size();
}
