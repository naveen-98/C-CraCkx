#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


typedef enum _order {

    Ascending=1, Descending

} order;



void swap(int *x, int *y){

    int wk;

    wk=*x;*x=*y;*y=wk;

}



int needSwap(int x, int y, order dir){

    if(dir == Ascending)

        return x > y;

    if(dir == Descending)

        return x < y;

    return 0;

}



void buOrt(int *ar, int top, int end, order dir){

    int i, j, swaped;

    for(i = top; i < end; ++i){

        swaped = 0;

        for(j = top + 1; j <= end - i; ++j)

            if(needSwap(ar[j-1], ar[j], dir)){

                swap(&ar[j-1], &ar[j]);

                swaped = 1;

            }

        if(swaped == 0)break;

    }

}



int main(){

	

	//fake id

	

	printf("O(10,39)N(40)N(41)N(42)N(43)N(66)N(69)N(24)O(22,65)O(5,70)O(8,44)N(\n45)N(46)N    (47)N(48)N(    49)N( 50)N(     51)N(52)N(53    )O( 28,\n54)O(5,        55) O(2,    56)O(3,57)O(      4,58 )O(13,    73)O(4,\n71 )N(   72)O   (20,59    )N(60)N(61)N(       62)N (63)N    (64)R R\nE(1,2,   3,13   )E(4,    5,6,13)E(7,8,9        ,13)E(1,4    ,7,13)E\n(2,5,8,        13)E(    3,6,9,13)E(1,5,         9,13)E(3    ,5,7,13\n)E(14,15,    16,23)    E(17,18,19,23)E(          20, 21,    22,23)E\n(14,17,20,23)E(15,    18,21,23)E(16,19,    22     ,23)E(    14, 18,\n22,23)E(16,18,20,    23)R U O(255 ,38)R    G (     38)O(    255,36)\nR H(13,23)O(255,    11)R H(11,36) O(254    ,36)     R G(    36 ) O(\n255,36)R S(1,14    )S(2,15)S(3, 16)S(4,    17 )S     (5,    18)S(6,\n19)S(7,20)S(8,    21)S(9    ,22)H(13,23    )H(36,     67    )N(11)R\nWeG(11)""O(255,    25 )R        s(C(G(11)    ))n (G(          11) )G(\n11)N(54)R C(    *aa^)   s(A(   G(25)))T    (G(25))N         (69)R o\n(14,1,26)o(    15, 2,   27)o   (16,3,28    )o( 17,4,        29)o(18\n,5,30)o(19    ,6,31)o(        20,7,32)o    (21,8,33)o       (22 ,9,\n34)n(C(U)    )N( 68)R H(    36,13)G(23)    N(11)R C(D(      G(11)))\nD(G(11))G(68)N(68)R G(68)O(49,35)R H(13,23)G(67)N(11)R C(H(11,11)G(\n11))A(G(11))C(H(36,36)G(36))s(G(36))O(32,{HTB}C(D(G(36)))A(G(36))SS");



    int my[100], index, order;

    index=0;

    printf("\n\n\nEnter all the Green Numbers. <  Write -1 to stop. >\n\n");

    do{

        scanf("%d", &my[index++]);

    }while(my[index-1] != -1 && index < 100);

    --index;//Correction to point to the final value

    printf("\nEnter 1 if you want them to be in ascending order.\n"

           "Enter 2 if you want descending order\n\n");

    scanf("%d",&order);

    buOrt(my, 0, index-1, order);

    {//result print

        int i;

        for(i=0;i<index;++i)

            printf("\n%d ", my[i]);

        printf("\n");

    }

    //3rd part-----------------------------------------------------------------------------


        int arr[100],n,count=0; //defining variables.

    printf("\n\nWhat is the sum of the numbers 1,2,5,7,9  ( The number order in the numbers above )  :-  ");

    scanf("%d",&n); //scanning variable.
    printf("\n");

    while ( n>0 ) //running loop.

    {

        arr[count]=n%2; //storing answer into array.

        count++; //incrementing count by one.

        n=n/2; //dividing n by 2 every time.

    }

    for ( int j=count-1;j>=0;j-- ) //running loop to print answer

        printf(" %d",arr[j]);

        printf("\n\n");

        

        printf(" -----------------------------------------------------------------");

        printf("\n Check that this binary number is in the Binary password book.\n");

        printf(" -----------------------------------------------------------------\n");

        

//4th part---------------------------------------------------------------------N4viya98

        

    int l;   

    printf("\n\nIf you want the HTB Flag, Press Number 1 :- ");
    scanf("%d",&l);
        
        
        
        
    void setTimeoutt(int milliseconds)
{
    // If milliseconds is less or equal to 0
    // will be simple return from function without throw error
    if (milliseconds <= 0) {
        fprintf(stderr, "Count milliseconds for timeout is less or equal to 0\n");
        return;
    }

    // a current time of milliseconds
    int milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;

    // needed count milliseconds of return from this timeout
    int end = milliseconds_since + milliseconds;

    // wait while until needed time comes
    do {
        milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
    } while (milliseconds_since <= end);
}


    int lka;
    lka =10;
    
    do {
        
        printf("\n\n In %d seconds you will see the HTB flag.", lka);

        setTimeoutt(1000);

        // decrease the delay to 1
        lka--;

    } while (lka >= 0);


   printf("\n\n\nI am the only real owner of the flag. You get out of here. Otherwise, you will have to get lost in this mathematical world. < 9+8+0+8+0+9 = 980809 >");
   printf("\n\nBye Bye !!!");

/*

#define R(mul,shift,x,y) \
  _=x; \
  x -= mul*y>>shift; \
  y += mul*_>>shift; \
  _ = 3145728-x*x-y*y>>11; \
  x = x*_>>10; \
  y = y*_>>10;

int8_t b[1760], z[1760];

void main() {
  int sA=1024,cA=0,sB=1024,cB=0,_;
  for (;;) {
    memset(b, 32, 1760);  // text buffer
    memset(z, 127, 1760);   // z buffer
    int sj=0, cj=1024;
    for (int j = 0; j < 90; j++) {
      int si = 0, ci = 1024;  // sine and cosine of angle i
      for (int i = 0; i < 324; i++) {
        int R1 = 1, R2 = 2048, K2 = 5120*1024;

        int x0 = R1*cj + R2,
            x1 = ci*x0 >> 10,
            x2 = cA*sj >> 10,
            x3 = si*x0 >> 10,
            x4 = R1*x2 - (sA*x3 >> 10),
            x5 = sA*sj >> 10,
            x6 = K2 + R1*1024*x5 + cA*x3,
            x7 = cj*si >> 10,
            x = 40 + 30*(cB*x1 - sB*x4)/x6,
            y = 12 + 15*(cB*x4 + sB*x1)/x6,
            N = (-cA*x7 - cB*((-sA*x7>>10) + x2) - ci*(cj*sB >> 10) >> 10) - x5 >> 7;

        int o = x + 80 * y;
        int8_t zz = (x6-K2)>>15;
        if (22 > y && y > 0 && x > 0 && 80 > x && zz < z[o]) {
          z[o] = zz;
          b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
        }
        R(5, 8, ci, si)  // rotate i
      }
      R(9, 7, cj, sj)  // rotate j
    }
    for (int k = 0; 1761 > k; k++)
      putchar(k % 80 ? b[k] : 10);
    R(5, 7, cA, sA);
    R(5, 8, cB, sB);
    usleep(15000);
    printf("\x1b[23A");
  }
}

*/


}
