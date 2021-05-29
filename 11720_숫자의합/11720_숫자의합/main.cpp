//
//  main.cpp
//  11720_숫자의합
//
//  Created by 전주하 on 2021/05/29.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {
    string input;
    int N;
    cin >> N;
    cin >> input;
    
    char check[100];
    strcpy(check,input.c_str());
    
    int answer = 0;
    
    for(int i=0;i<N;i++)
    {
        answer += (int)check[i] - 48;
    }
    cout << answer;
    return 0;
}
