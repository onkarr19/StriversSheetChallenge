/*

Problem Link: https://www.codingninjas.com/codestudio/problems/sort-0-1-2_8230695?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int zero=0, one=0, two=n;
   while (one < two) {
     if (arr[one]==0)
       swap(arr[one++], arr[zero++]);
     else if (arr[one] == 2)
       swap(arr[one], arr[--two]);
     else
       one++;
   }
}
