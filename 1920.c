#include <stdio.h>
// 각 배열을 정렬하고 하나씩 앞으로 보내기? 근데 그럼 출력을 어떻게 해줘
//for문 0~m까지.
//y[0]이 x[0~마지막까지] 있으면 printf("1");
//else printf(0)
int main(){
    int x[100000];
    int y[100000];

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    int num;
    scanf("%d",&num);
    x[i]= num; 
    } // 두번 째 줄까지 입력

    int m;
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
    int num;
    scanf("%d",&num);
    y[i]= num; 
    }
    
    for(int i=0;i<m;i++)
    {
        int condi = 0; //찾으면 1로 해주기 및 해줄 때마다 초기화
        for(int j=0;j<n;j++)//x[0~마지막까지 돌리는 for문
        {
        if(y[i]==x[j]){condi=1; break;}//찾으면 바로 break
        }

        if(condi==1) printf("1\n");

        if(condi==0) printf("0\n");
    }

}


//1차 제출 -> 시간 초과(완전 탐색으로 했는데 10^5 * 10^5 = 10^10 O(N^2)꼴)