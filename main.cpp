#include "mbed.h"   //call mbed library

int nth_term = 9;   //set the Fibonacci sequence length to 9
int term_1, term_2; //set integers named term_1 and term_2     
int next_term = 0;  //set integer next_term to 0

int main() {        //start main program using a simple for loop
    term_1 = 0;       //set term_1 to 0
    term_2 = 1;       //set term_\2 to 1
    printf("Fibonacci Number sequence length is %d \r\n", nth_term);    //print  information and number of terms
    printf("0, 1, ");                                     //print 0,1 always for sequence start
        for(int i = 2; i<nth_term;i++) {  //set i to 2 and increase by 1 for sequence, start for loop
        next_term = term_1+term_2;          //add two terms and store as next_term
        printf("%d, ",next_term);           //print the next_term value , without going to new line
        term_1 = term_2;                      //set term_1 to new vale for next sequence step
        term_2 = next_term;                   //set term_2 to new value for next sequence step
        }                               //end for loop
        printf("....\r\n");      //print 4 periods after for loop finishes
}                   //End main program loop