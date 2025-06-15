#include <iostream>
#include <set>
using namespace std;

int main(){



    set<int> st;

    st.insert(932);
    st.insert(38);
    st.insert(397);
    st.insert(8387);


      if(st.count(38) == 1){
        cout<<"found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
/*
if(st.find(38) != st.end()){
    cout<<"found"<<endl;
}else{
    cout<<"Not found"<<endl;
}
*/
/*
st.erase(st.begin(), st.end());
cout<<st.size()<<endl;
*/

/*
set<int> :: iterator it = st.begin();

while(it != st.end()){
        cout<<*it<<endl;
        it++;
    }

    
    cout<<st.size()<<endl;
    st.clear();
    cout<<st.size()<<endl;
    
    

    
    
    if(st.empty()){
        cout<<"Set is empty."<<endl;
    }else{
        cout<<"Set is not empty";
    }

*/

    return 0;
}