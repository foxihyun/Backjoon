#include <stdio.h>

int main()
{
   int n,m;
   scanf("%d",&n);//216
   int sum=0; 
   int count=0;
   for(int temp=n;temp>0;temp /= 10) //각 자리수 더하기
   {
    count++; //n의 자리수 더하기
    }
    if(n>=9) m = n- count*9; // 생성자의 최소값은 m-(자리수 * 9)이다. 얘보다 작으면 다 더해서 n이 안나오기때문
    else m=0;
   //->범위를 줄이는 발상법 !
   
   int condi = 0; //못찾았을 경우 0반환해야함!!
   for(m;m<n-1;m++)//196~215까지한다쳤을떄
   {
        sum = m; //sum 재선언. m에 더해주는거니까.
        //각자리수 더한 것이 n이랑 같을 시 생성자 인정 
        for(int temp=m;temp>0;temp /= 10){ //각 자리수 더하기
        sum += temp % 10;  //일의 자리만 남기기
        }  
            
        if(sum==n){ //다 더했는데 sum이랑 같으면 생성자. 최소니까 출력하고 종료
        printf("%d",m);
        condi = 1;
        break;
        }
    }
    if(condi == 0) printf("0");

}

