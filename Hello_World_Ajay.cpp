//
//  main.cpp
//  cpp3rd
//
//  Created by Ajay Maheshwari on 15/02/22.
//

//#include "cpp3rd.h"


//Hello World Printing !!

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // I am Using all  Data types and concepts I learnt so far to print " Hello World ! "
    
    //String data Type for Printing "H" Character
    string s="Axios put a lot of efforts to Help us learn and Grow";
    cout<<s[30];
    
    //Vector data Type for Printing "e" Character
    vector<char> v;
    v.push_back('E');
    v.push_back('Q');
    v.push_back('U');
    v.push_back('I');
    v.push_back('N');
    v.push_back('O');
    v.push_back('X');
    auto it=v.begin();                                         //Concept of iterators
    cout<<*it;
    
    //int(ASCII Values) data Type for Printing "l" Character
    int equinox=76;
    // int (points) ==> Points Scored by axios out of 1000
    for (float points=1.00 ; points <= 1000.00 ; points+=0.5)         //Concept of Loops
    {
        bool axios_Op=false;                                          //Bool Data Type
        if(points==999 || points==1000)                               //conditional Statements
        {
            axios_Op=true;
        }
        if(axios_Op)
        {
        cout<<char(equinox);
        }
    }
    
    
    //Set data Type for Printing "o" Character
    set<int> set{};
    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(5);
    auto ite=set.begin();
    int d=*ite;
    for(int i=1;i<=78;i++) {d++;}
    cout<<char(d);
    
    
    //C language for printing Blank Space
    char c=' ';
    printf("%c",c);
    
    //Maps for printing 'W'
    map<int,char> m;
    m.insert(pair<int, char>(1,'W'));
    m.insert(pair<int, char>(1,'O'));
    m.insert(pair<int, char>(1,'R'));
    m.insert(pair<int, char>(1,'L'));
    m.insert(pair<int, char>(1,'D'));
    m.insert(pair<int, char>(1,'M'));
    m.insert(pair<int, char>(1,'U'));
    m.insert(pair<int, char>(1,'N'));
    cout<<(m.begin())->second;
    
    //Stack For printing 'O'
    stack<char> st;
    st.push('E');
    st.push('Q');
    st.push('U');
    st.push('I');
    st.push('N');
    st.push('O');
    st.push('X');
    st.pop();
    cout<<st.top();
    
    //Array for printing 'R'
    char arr[]={'W','E',' ','A','R','E',' ','C','O','M','I','N','G',' ','T','O',' ','C','A','M','P','U','S'};
    cout<<arr[4];
    
    //Pointers for printing 'L'
    int j=65;
    int *p=&j;
    *p=76;
    cout<<char(*p);
    
    //Pair for printing 'D'
    pair<int, char> pair;
    pair.first=100;
    pair.second='D';
    cout<<pair.second;
    
    //String for printing Exclamation (!)
    s="Thank You Axios & Equinox !";
    cout<<s[26];
    
    
    cout<<"\n";
    return 0;
}


