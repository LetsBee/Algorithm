//
//  main.cpp
//  10809_알파벳찾기
//
//  Created by 전주하 on 2021/05/29.
//
#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    string input;
    cin >> input;
    char input_char[100] = {0,};
    int check_alph[26];
    fill_n(check_alph,26,-1);
    
    strcpy(input_char, input.c_str());
    
    for(int i=0;i<input.size();i++)
    {
        int a = (int)input_char[i] - 97;
        if(check_alph[a] < 0)
        {
            check_alph[a] = i;
        }
    }
    
    for(int i =0; i< 26 ; i++)
    {
        cout << check_alph[i] <<" ";
    }
    return 0;
}
