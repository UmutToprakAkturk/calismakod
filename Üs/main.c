#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int N=0,t=0,i=0,y=0,sonuc=0,ort=0,j=0,stdsp=0,toplam=0;
    printf("ogrenci sayisini giriniz \n");
    scanf("%d",&N);
    int x[N];

        for(i=0;i<N;i++)
        {
            printf("ogrenci notlarini giriniz");
            scanf("%d",&x[i]);
            toplam=toplam +x[i];
        }
        printf("%d toplam\n",toplam);
        ort=toplam/N;
        printf("%d ort \n",ort);
            for(i=0;i<N;i++)
            {   y=x[i]-ort;
                stdsp=stdsp+pow(y,2);
            }
        stdsp=pow(stdsp,0.5);
        sonuc=stdsp/(N-1);
        printf("%d",sonuc);
    return 0;
}

