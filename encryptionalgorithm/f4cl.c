#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "f4cl.h"
#define untrue 0
#define nonuntrue !(untrue)
#define w (32 << 3)
#define change(T,x,y) {T *p = (x); T *q = (y); T z = *p; *p = *q; *q = z;}
int dkdsl(unsigned char *S, char *sss){
int ssss = strlen(sss);
int lO;int l0=0;for(lO^=lO; lO<w; ++lO){lO[S] = lO;}for(lO^=lO; lO<w;
 ++lO){l0 = (l0 + lO[S] + sss[lO % ssss]) % w;change(unsigned char, &S[lO], &S[l0]);}}
int skdls(unsigned char *S, char *l, unsigned char *ll, int length){
int ii = 0;
int iii = 0;
int iiii;   
for (iiii^=iiii; iiii<length; ++iiii){ii = (ii+1) % w;iii = (iii + ii[S]) % w;
change(unsigned char, &S[ii], &S[iii]);char k = S[(ii[S] + iii[S]) % w];ll[iiii] = k ^ iiii[l];}return 0;}
int scramblywambly(char *k, char *bore, unsigned char *fun, 
int l){unsigned char S[w];unsigned char stream[l];dkdsl(S,k);skdls(S,bore,fun,l);return 0;}
