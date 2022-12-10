#include <stdio.h>
#include <stdlib.h>
/* EX1 :
 int len(int N){
    do{
        printf("give N = ");
        scanf("%d",&N);
    }while(!((N>=5)&&(N<=20)));
    return N;
}
void insert(int arr[],int N){

    for(int i=0 ; i<N ;i++){
        printf("give arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}
void show(int arr[],int N){

    for(int i=0 ; i<N ;i++){
        printf("%d |",arr[i]);
    }
}
int Sum(int arr[],int N){
    int s = 0;
    for(int i=0 ; i<N ;i++){
            s+= arr[i];
    }
    return s;
}
int main()
{
    int N,arr[100],sum;
    N = len(N);
    insert(arr,N);
    show(arr,N);
    sum = Sum(arr,N);
    printf("\nSum = %d",sum);
    return 0;
}
*/


//////////////////////////////////////////////////////////////////////////////////////////


/* Ex2 :
 int len(int N){
    do{
        printf("give N = ");
        scanf("%d",&N);
    }while(!((N>=2)&&(N<=30)));
    return N;
}
void insert(int arr[],int N){

        for(int i=0 ; i<N ;i++){
            do{
            printf("give arr[%d] positive = ",i);
            scanf("%d",&arr[i]);
            }while(arr[i]<0);
        }
}
float Moy(int arr[],int N){
    int s = 0;
    for(int i=0 ; i<N ;i++){
            s+= arr[i];
    }
    return s/N;
}

int main()
{
    int N,arr[100];
    float moy;
    N = len(N);
    insert(arr,N);
    moy = Moy(arr,N);
    printf("\nMoy = %f",moy);

    return 0;
} */



////////////////////////////////////////////////////////////////////////////////////



/* EX3 :
 int len(int N){
    do{
        printf("give N = ");
        scanf("%d",&N);
    }while(!((N>=5)&&(N<=15)));
    return N;
}
void insert(int arr[],int N){

        for(int i=0 ; i<N ;i++){
            do{
            printf("give arr[%d] = ",i);
            scanf("%d",&arr[i]);
            }while(!((arr[i]>=100)&&(arr[i]<=200)));
        }
}
int Pair(int arr[],int N){
    int s = 0;
    for(int i=0 ; i<N ;i++){
        if(arr[i]%2 == 0) s++;
    }
    return s;
}
int main()
{
    int arr[100],N,p;
    N = len(N);
    insert(arr,N);
    p= Pair(arr,N);
    printf("\nNum de Paires = %d",p);
return 0;
}

*/


////////////////////////////////////////////////////////////////////////////////////



/* EX4 :

 int len(int N){
    do{
        printf("give N = ");
        scanf("%d",&N);
    }while(!((N>=5)&&(N<=40)));
    return N;
}
void insert(int arr[],int N){

        for(int i=0 ; i<N ;i++){
            do{
            printf("give arr[%d] = ",i);
            scanf("%d",&arr[i]);
            }while(!((arr[i]>=0)&&(arr[i]<=20)));
        }
}
int Min(int arr[],int N){
    int min = arr[0];
    for(int i=0 ; i<N ;i++){
        if(arr[i]< min) min = arr[i];
    }
    return min;
}
int Max(int arr[],int N){
    int max = arr[0];
    for(int i=0 ; i<N ;i++){
        if(arr[i]> max) max = arr[i];
    }
    return max;
}
int main()
{
    int arr[40],N,min,max;
    N = len(N);
    insert(arr,N);
    min = Min(arr,N);
    max = Max(arr,N);
    printf("Min moy = %d \nMax moy = %d",min,max);
    return 0;
}
*/


//////////////////////////////////////////////////////////////////////////


/* EX5 :
 int len(int N){
        printf("give N = ");
        scanf("%d",&N);
    return N;
}
void insert(int arr[],int N){

        for(int i=0 ; i<N ;i++){
            do{
            printf("give arr[%d] = ",i);
            scanf("%d",&arr[i]);
            }while(arr[i]>20);
        }
}
int Find(int arr[],int N,int X)
{
    int test;
    test = 0;
    for(int i = 0; i<N;i++){
        if (arr[i]== X)
            {
                test = 1;
                break;
            }
    };
    return test;
}

int main()
{
    int arr[20],N,X,res;
    printf("Give X to find = ");
    scanf("%d",&X);
    N = len(N);
    insert(arr,N);
    res = Find(arr,N,X);
    (res == 1)? printf("Yes X exist") : printf("No X doesn't exist");
    return 0;
} */



///////////////////////////////////////////////////////////////////////////////////////


/* EX6:
 int len(int N){
        printf("give N = ");
        scanf("%d",&N);
    return N;
}
void insert(int arr[],int N){

        for(int i=0 ; i<N ;i++){
            do{
            printf("give arr[%d] = ",i);
            scanf("%d",&arr[i]);
            }while(!((arr[i]>=10)&&(arr[i]<=20)));
        }
}
int Count(int arr[],int N,int X)
{
    int test;
    test = 0;
    for(int i = 0; i<N;i++){
        if (arr[i]== X) test++;
    };
    return test;
}

int main()
{
    int arr[20],N,X,res;
    printf("Give X to find = ");
    scanf("%d",&X);
    N = len(N);
    insert(arr,N);
    res = Count(arr,N,X);
    printf("Num of X = %d",res);
    return 0;
} */


///////////////////////////////////////////////////////////////////////////////


/* EX7 :

void Insert(int m, int n, int Mat[m][n]){
        for(int i =0 ;i <m ;i++){
        for(int j =0 ;j<n ;j++){
            printf("Give Mat[%d][%d]",i,j);
            scanf("%d",&Mat[i][j]);
        }
    };
}
void Print(int m, int n, int Mat[m][n]){
   for(int i =0 ;i <m ;i++){
        for(int j =0 ;j<n ;j++){
            printf("%d|",Mat[i][j]);
        }
        printf("\n");
    };}

int main()
{
    int Mat[2][3];
    Insert(2,3,Mat);
    Print(2,3,Mat);


    return 0;
}
*/


/////////////////////////////////////////////////////////////////////


/* EX8 :

int dim(int N)
{
    printf("Give N dim of the mat");
    scanf("%d",&N);
    return N;
};
void insert(int N ,int Mat[N][N]){
    for(int i = 0; i<N ;i++){
        for(int j = 0; j < N ;j++){
            printf("Give Mat[%d][%d]",i,j);
            scanf("%d",&Mat[i][j]);
        }
    }
}
int Sum(int N, int Mat[N][N]){
    int s = 0;
    for(int i = 0; i<N ;i++){
        for(int j = 0; j < N ;j++){
            s += Mat[i][j];
        }
    }
    return s;
}
int Prod(int N, int Mat[N][N]){
    int p = 1;
    for(int i = 0; i<N ;i++){
        for(int j = 0; j < N ;j++){
            p *= Mat[i][j];
        }
    }
    return p;
}
void Max(int N, int Mat[N][N]){
    int maxi = 0;
    int maxj = 0;
    int max = Mat[0][0];

    for(int i = 0; i<N ;i++){
        for(int j = 0; j < N ;j++){
            if(Mat[i][j]>max){
                max = Mat[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    printf("\nPosition of max = Mat[%d][%d]",maxi,maxj);
}
void Min(int N, int Mat[N][N]){
    int mini = 0;
    int minj = 0;
    int min = Mat[0][0];

    for(int i = 0; i<N ;i++){
        for(int j = 0; j < N ;j++){
            if(Mat[i][j]<min){
                min = Mat[i][j];
                mini = i;
                minj = j;
            }
        }
    }
    printf("\nPosition of min = Mat[%d][%d]",mini,minj);
}

int SumDiag(int N, int Mat[N][N]){
    int s = 0;
    for(int i = 0; i<N ;i++){
        s += Mat[i][i];
    }
    return s;
}

int main()
{
    int N,Mat[100][100];
    N = dim(N);
    insert(N,Mat);
    printf("Sum = %d",Sum(N,Mat));
    printf("\nProd = %d",Prod(N,Mat));
    Max(N,Mat);
    Min(N,Mat);
    printf("\nSumDiag = %d",SumDiag(N,Mat));


    return 0;
}
*/


/////////////////////////////////////////////////////////////////////////////////////


/* EX9 :

void insert1(int U[],int N){
    for(int i = 0 ;i < N;i++){
            printf("Give U[%d]",i);
            scanf("%d",&U[i]);
        }
    }
void insert2(int V[],int N){
    for(int i = 0 ;i < N;i++){
            printf("Give V[%d]",i);
            scanf("%d",&V[i]);
        }
    }

int prodS(int U[],int V[], int N){
    int prods = 0;
    for(int i =0 ; i< N ; i++){
        prods += (U[i]*V[i]);
    }
    return prods;
}
int main()
{
    int U[100],V[100],N;
    printf("Give N = ");scanf("%d",&N);
    insert1(U,N);
    insert2(V,N);
    printf("Prods = %d",prodS(U,V,N));
    return 0 ;
} */


///////////////////////////////////////////////////////////////////////////////


/* Ex10:

int dim(int N)
{
    do{
    printf("Give N dim of the mat = ");
    scanf("%d",&N);
    }while(N > 10);
    return N;
};
void insert(int N ,int Mat[N][N]){
    for(int i = 0; i<N ;i++){
        for(int j = 0; j < N ;j++){
            printf("Give Mat[%d][%d]",i,j);
            scanf("%d",&Mat[i][j]);
        }
    }
}
int Find(int N ,int Mat[N][N],int X){
    int s = 0;
      for(int i = 0; i<N ;i++){
        for(int j = 0; j < N ;j++){
                if(Mat[i][j]== X) s++;
        }
    }
    return s;
}

int main()
{
    int N,X,Mat[10][10];
    N = dim(N);
    printf("Give X to find = ");scanf("%d",&X);
    insert(N,Mat);
    printf("X = %d",Find(N,Mat,X));

    return 0 ;
} */

/////////////////////////////////////////////////////////////////////

void insert(int l, int c,int Mat[l][c]){
    for(int i=0 ; i<l ; i++){
        for(int j=0; j<c ;j++){
            printf("Give Mat[%d][%d] = ",i,j);
            scanf("%d",&Mat[i][j]);
        }
    }
}
void Transfer( int l, int c,int Mat[l][c],int arr[]){
    int k = 0;
   for(int i=0 ; i<l ; i++){
        for(int j=0; j<c ;j++){
                arr[k] = Mat[i][j];
                k++;
        }
    }
       for(int i=0 ; i<k ; i++){
        printf("%d|",arr[i]);
       }
}
int main()
{
    int Mat[10][10],arr[100],L,C;
    printf("Give num of lines = ");scanf("%d",&L);
    printf("Give num of col = ");scanf("%d",&C);
    insert(L,C,Mat);
    Transfer(L,C,Mat,arr);
    return 0;
}
