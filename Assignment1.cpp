/*-------------------------
1st Pattern Matching
Algorithm:
1.	[Initialize ] Set K=1 and Max = S-R+1.
2.	Repeat step 3 to 5 while K-max.
3.	Repeat for L=1 to R: If P[1], then go to step 5
4.	[Success] Set INDEX = K and Exit
5.	Set K=K+1
6.	[Failure ] set K=K+1
7.	Exit
----------------------------- */

#include <stdio.h>
#include <string.h>
void search(char *pat, char *txt){
    int M = strlen(pat);
    int N = strlen(txt);
    for (int i = 0; i <= N - M; i++){
        int j;
        for (j = 0; j < M; j++){
            if (txt[i + j] != pat[j])
                break;
        }
        if (j == M){
            printf("Pattern found at index %d \n", i);
        }
    }
}
int main(){
    char *txt = "AABAACAADAABAAABAA";
    char *pat = "AABA";
    search(pat, txt);
    return 0;
}