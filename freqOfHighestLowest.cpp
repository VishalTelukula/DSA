/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    unordered_map<int,int> map;

    for(int i=0;i<n; i++){
        map[arr[i]]++;
    }
    int mincount=o;maxcount=0;minEle=0;maxEle=0
    for(auto it : map){
        int count = it.fisrt;
        int ele = it.second;
        if(count>maxcount){
            maxEle = ele;
            maxcount=count;
        }
        else if ( count < minEle){
            minEle = ele;
            mincount = count;
        }
    }

    return 0;
}