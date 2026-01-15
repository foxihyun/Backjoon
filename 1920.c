// 각 배열을 정렬하고 하나씩 앞으로 보내기? 근데 그럼 출력을 어떻게 해줘
//for문 0~m까지.
//y[0]이 x[0~마지막까지] 있으면 printf("1");
//else printf(0)


#include <stdio.h>
#include <stdlib.h> // qsort 사용하기 위한 것 

int binary_search(int x[],int n, int target);
int compare(const void* a, const void* b)
{
    int x = *(int*)a;
    int y = *(int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;

} //반환값 < 0 이면 a가 b보다 앞
int main(){
    int x[100000];
    int y[100000];
    int i=0;

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    int num;
    scanf("%d",&num);
    x[i]= num; 
    } // 두번 째 줄까지 입력

    qsort(x, n, sizeof(int), compare); //x배열 정렬

    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
    int num;
    scanf("%d",&num);
    y[i]= num; 
    }
    
    for(int i=0;i<m;i++)
    {
        if(binary_search(x,n,y[i]))
        printf("1\n");

        else
        printf("0\n");
    }

    /*
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
*/
}

int binary_search(int x[],int n, int target) 
{
    int left = 0;
    int right = n-1;

    while(left <= right)
    {
        int mid = (left+right) / 2;

        if (x[mid]== target)
        {
            return 1;
        }

        else if(x[mid]<target) //타겟이 중앙값보다 큼
        {
            left = mid +1;
        }
        
        else//타겟이 중앙값보다 작음
        {
            right = mid - 1;
        }
    }
    return 0; //못찾았으므로 return 0
}


//1차 제출 -> 시간 초과(완전 탐색으로 했는데 10^5 * 10^5 = 10^10 O(N^2)꼴)
//-> 그러면 찾는 이중 루프 함수를 그냥 binary search로 바꿔줘보자
//binary search는 어떻게 하느냐? 정렬된 함수 기준 절반으로 잡기