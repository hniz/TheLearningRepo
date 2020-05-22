/*******************************************************************************
 * Name        : vanya_fences.cpp
 * Author      : Hamzah Nizami
 * Date        : 05/22/2020
 * Description : Problem: http://codeforces.com/problemset/problem/677/A
 ******************************************************************************/

#include <iostream> 
using namespace std;


int main(){
    int a, b, c, res = 0;
    cin >> a >> b;

    for(int i =0; i < a; i++){ 
        cin >> c; 
        if(c > b){ 
            res++;
        }
        res++;
    }
    cout << res;
}