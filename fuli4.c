#include<stdio.h>
#include<math.h>

double benjin=0,W=0;
double year=0;
int N=1;
double lilv;

void danli(){
    system("cls");
    printf("������Ҫ����ı���");
    scanf("%lf",&benjin);
    printf("�����������ʣ�");
    scanf("%lf",&lilv);
    printf("���������ޣ�");
    scanf("%lf",&year);
    W=benjin+benjin*lilv*year;
    printf("�������ֵΪ��%.2lf\n",W);


}

void fuli(){
    system("cls");
    printf("������Ҫ����ı���");
    scanf("%lf",&benjin);
    printf("�����������ʣ�");
    scanf("%lf",&lilv);
    printf("���������ޣ�");
    scanf("%lf",&year);
    printf("�������긴������:");
    scanf("%d",&N);
    lilv=pow((1+lilv/N),N)-1;
    W=benjin*pow((1+lilv),year);
    printf("�������ֵΪ��%.2lf\n",W);

}

void benjinjisuan(){
    system("cls");
    printf("������������棺");
    scanf("%lf",&W);
    printf("�����������ʣ�");
    scanf("%lf",&lilv);
    printf("���������ޣ�");
    scanf("%lf",&year);
    printf("�������긴������:");
    scanf("%d",&N);
    lilv=pow((1+lilv/N),N)-1;
    benjin=W/pow((1+lilv),year);
    printf("����Ϊ��%.2lf\n",benjin);

}

void TZtime(){
    system("cls");
    printf("������Ҫ����ı���");
    scanf("%lf",&benjin);
    printf("�����������ʣ�");
    scanf("%lf",&lilv);
    printf("�������긴������:");
    scanf("%d",&N);
    printf("������������棺");
    scanf("%lf",&W);
    lilv=pow((1+lilv/N),N)-1;
    year= log(W/benjin)/log(1+lilv);
    printf("Ͷ�����޹���Ϊ%.2lf��\n",year);

}

void BestProject(){
    system("cls");
    printf("������Ҫ����ı���");
    scanf("%lf",&benjin);
    printf("���������ޣ�");
    scanf("%lf",&year);
    printf("�������긴������:");
    scanf("%d",&N);
    printf("������������棺");
    scanf("%lf",&W);
    lilv=pow((pow((W/benjin),(1.0/year))-1+1),(1.0/N))*N-N;
    printf("Ͷ����Ŀ���ʹ���Ϊ��%.2lf\n",lilv);
}

void dingqi(){
    system("cls");
    printf("��������Ͷ��:");
    scanf("%lf",&benjin);
    printf("��������������:");
    scanf("%lf",&lilv);
    printf("���������Ͷ������:");
    scanf("%lf",&year);
    W=benjin*(1.0+lilv)*(pow((1.0+lilv),year)-1)/lilv;
    printf("������棺%.2lf\n",W);
}




main(){
    int num=0;
    while(1){
        benjin=0;
        W=0;
        year=0;
        N=1;
        lilv=0;
        
        printf("***********����������(3.0)*************\n");
        printf("|---------------------------------|\n");
        printf("|      1.����                     |\n");
        printf("|      2.����                     |\n");
        printf("|      3.���㱾��                 |\n");
        printf("|      4.Ͷ�����޹���             |\n");
        printf("|      5.Ͷ����Ŀ���ʹ���         |\n");
        printf("|      6.����Ͷ��                 |\n");
        printf("|      0.�˳�                     |\n");
        printf("|---------------------------------|\n");
        printf("������ѡ��");
AA: scanf("%d",&num);
    if(num>=0 && num<7){
        switch(num){
        case 1:
            danli();
            break;
        case 2:
            fuli();
            break;
        case 3:
            benjinjisuan();
            break;
        case 4:
            TZtime();
            break;
        case 5:
            BestProject();
        case 6:
            dingqi();
            break;
        case 0:
            printf("ллʹ�ã�\n");
            return 0;
        default:
            return 0;
        }
    }
       else{
           printf("����������������룡");
           goto AA;
           
           
       }
    }
    
}