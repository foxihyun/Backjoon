//314->11001100
//2진수로 변환하는 서식 문자열은 없다!
//1.8진수->10진수->2진수로 변환? 
//2.문자열로 보고 각 자리를 변환해서 출력해주면됨. 단, 맨앞의 0은 어떻게 처리할 것인가?
//000 001 010 
#include <stdio.h>

int main(){

    char x[1000000];//8진수 입력 
    scanf("%s",x); //문자열 8진수 입력
    for(int i=0; x[i] != '\0'; i++) // ★"\0"은 널 문자를 담은 문자열으로 char * type이다!!
    {
        if(i==0) // i가 0일때만 예외처리해주고 나머지 , 단 입력이 0인 경우는 출력해주기
        {
            if(x[i]=='0' && x[i+1] == '\0') {printf("0"); break;} //입력이 0인경우
            if(x[i]=='0') continue;
            if(x[i]=='1') {printf("1"); continue;}
            if(x[i]=='2') {printf("10"); continue;}
            if(x[i]=='3') {printf("11"); continue;}
            if(x[i]=='4') {printf("100"); continue;}
            if(x[i]=='5') {printf("101"); continue;}
            if(x[i]=='6') {printf("110"); continue;}
            if(x[i]=='7') {printf("111"); continue;}
        }

        if(x[i]=='0') {printf("000"); continue;}
        if(x[i]=='1') {printf("001"); continue;}
        if(x[i]=='2') {printf("010"); continue;}
        if(x[i]=='3') {printf("011"); continue;}
        if(x[i]=='4') {printf("100"); continue;}
        if(x[i]=='5') {printf("101"); continue;}
        if(x[i]=='6') {printf("110"); continue;}
        if(x[i]=='7') {printf("111"); continue;}
    }
}