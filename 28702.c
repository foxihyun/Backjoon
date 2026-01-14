
//서로 변환하는 것이 중요할 것 같음.
//if i%3==0 && i%5 == 0 ->FizzBuzz
//if i%3==0 && i%5 != 0 ->Fizz
//if i%3!=0 && i%5 == 0 ->Buzz
//else i=> i
//scanf로 3개의 문자열을 입력받음
//(1) 문자열을 어떻게 입력받지? 포인터 배열?
//특수한 경우부터 생각해보자.★
//입력 받는 세 수 중 숫자가 있다.-> 그 자리에서 더해서 변환해서 풀력해주면됨,
//입력 받는 세 수 중 숫자가 없다.> 그런 케이스는 없음
//그렇다면 입력1 숫자 / 입력2 숫자 / 입력3 숫자 케이스나누면 됨.
//c언어에 문자열/숫자 판별 함수가 있나?
//boolean으로 판별해보고자 했음.
/*
c언어에서 boolean형을 쓰면 예를 들어
 문자열 - 정수형 같은 말도 안되는 계산도 
 그냥 false 취급해? 아니면 그냥 오류로 판단해?
 ->알아서 false 취급 안해줌.
*/
//그러면 숫자를 입력받았는데 어떻게 판단하지?
//일단 그냥 입력이 적으니 char 배열 3개를 받아서 일일이 판단하기
#include <stdio.h>
#include <stdbool.h> //bool 타입 쓰기 위한 용어
#include <stdlib.h>
int main()
{
    char input1[10];
    char input2[10];
    char input3[10];
    bool isNumber = true;
    int num;
    int result;
    scanf("%s",input1); //배열의 이름은 이미 주소
    scanf("%s",input2);
    scanf("%s",input3);

    //문자열 판별하기 각 배열마다
    for(int i=0;input1[i] !='\0';i++)
    {
        if('0'>input1[i] || input1[i] >'9') // 숫자가 아닌 것 발견하면 바로 break
        {
            isNumber = false;
            break; 
        }
        //for문 통과했다면 숫자인것임. -> 숫자로 변환하기
        
    } 
    if(isNumber==true) 
    {
        num = atoi(input1);
        result = num+3;
    }
    isNumber = true; // 초기화 해주기
    for(int i=0;input2[i] !='\0';i++)
    {
        if('0'>input2[i] || input2[i] >'9') // 숫자가 아닌 것 발견하면 바로 break
        {

            isNumber = false;
            break;
        }
        //for문 통과했다면 숫자인것임. -> 숫자로 변환하기
    }

    if(isNumber==true) 
    {
        num = atoi(input2);
        result = num+2;
    }

    isNumber = true; // 초기화 해주기
    for(int i=0;input3[i] !='\0';i++)
    {
        if('0'>input3[i] || input3[i] >'9') // 숫자가 아닌 것 발견하면 바로 break
        {
            isNumber = false;
            break;
        }
        //for문 통과했다면 숫자인것임. -> 숫자로 변환하기
    }
      if(isNumber==true) 
    {
        num = atoi(input3);
        result = num+1;
    }
    
    //판별 끝. 결과에 따라서 출력해주기
    if(result%3==0 && result%5 == 0) printf("FizzBuzz");
    if(result%3==0 && result%5 != 0) printf("Fizz");
    if(result%3!=0 && result%5 == 0) printf("Buzz");    
    if(result%3!=0 && result%5 != 0)printf("%d",result);// else는 위의 if랑만 연결된다는 사실。

}