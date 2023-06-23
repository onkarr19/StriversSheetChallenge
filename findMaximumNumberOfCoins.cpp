/*

Problem Link: https://www.codingninjas.com/studio/problems/find-minimum-number-of-coins_8230766?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> currency = {1,2,5,10,20,50,100,500,1000};
 
    int coins=0, i=8;
    while(amount && i>=0) {
        if(amount<currency[i]){
            i--;
            continue; 
        }
     
        coins++;
        amount-=currency[i];
    }
 
    return coins;
}

