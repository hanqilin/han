#include<stdio.h>
#include<math.h>

double benjin=0,W=0;
double year=0;
int N=1;
double lilv;

void danli(){
    system("cls");
    printf("请输入要存入的本金：");
    scanf("%lf",&benjin);
    printf("请输入年利率：");
    scanf("%lf",&lilv);
    printf("请输入年限：");
    scanf("%lf",&year);
    W=benjin+benjin*lilv*year;
    printf("输出最终值为：%.2lf\n",W);


}

void fuli(){
    system("cls");
    printf("请输入要存入的本金：");
    scanf("%lf",&benjin);
    printf("请输入年利率：");
    scanf("%lf",&lilv);
    printf("请输入年限：");
    scanf("%lf",&year);
    printf("请输入年复利次数:");
    scanf("%d",&N);
    lilv=pow((1+lilv/N),N)-1;
    W=benjin*pow((1+lilv),year);
    printf("输出最终值为：%.2lf\n",W);

}

void benjinjisuan(){
    system("cls");
    printf("请输入最后收益：");
    scanf("%lf",&W);
    printf("请输入年利率：");
    scanf("%lf",&lilv);
    printf("请输入年限：");
    scanf("%lf",&year);
    printf("请输入年复利次数:");
    scanf("%d",&N);
    lilv=pow((1+lilv/N),N)-1;
    benjin=W/pow((1+lilv),year);
    printf("本金为：%.2lf\n",benjin);

}

void TZtime(){
    system("cls");
    printf("请输入要存入的本金：");
    scanf("%lf",&benjin);
    printf("请输入年利率：");
    scanf("%lf",&lilv);
    printf("请输入年复利次数:");
    scanf("%d",&N);
    printf("请输入最后收益：");
    scanf("%lf",&W);
    lilv=pow((1+lilv/N),N)-1;
    year= log(W/benjin)/log(1+lilv);
    printf("投资年限估计为%.2lf年\n",year);

}

void BestProject(){
    system("cls");
    printf("请输入要存入的本金：");
    scanf("%lf",&benjin);
    printf("请输入年限：");
    scanf("%lf",&year);
    printf("请输入年复利次数:");
    scanf("%d",&N);
    printf("请输入最后收益：");
    scanf("%lf",&W);
    lilv=pow((pow((W/benjin),(1.0/year))-1+1),(1.0/N))*N-N;
    printf("投资项目利率估计为：%.2lf\n",lilv);
}

void dingqi(){
    system("cls");
    printf("请输入年投入:");
    scanf("%lf",&benjin);
    printf("请输入年增长率:");
    scanf("%lf",&lilv);
    printf("请输入持续投入年数:");
    scanf("%lf",&year);
    W=benjin*(1.0+lilv)*(pow((1.0+lilv),year)-1)/lilv;
    printf("最后收益：%.2lf\n",W);
}




main(){
    int num=0;
    while(1){
        benjin=0;
        W=0;
        year=0;
        N=1;
        lilv=0;
        
        printf("***********复利计算器(3.0)*************\n");
        printf("|---------------------------------|\n");
        printf("|      1.单利                     |\n");
        printf("|      2.复利                     |\n");
        printf("|      3.计算本金                 |\n");
        printf("|      4.投资年限估计             |\n");
        printf("|      5.投资项目利率估计         |\n");
        printf("|      6.定期投资                 |\n");
        printf("|      0.退出                     |\n");
        printf("|---------------------------------|\n");
        printf("请输入选择：");
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
            printf("谢谢使用！\n");
            return 0;
        default:
            return 0;
        }
    }
       else{
           printf("输入错误，请重新输入！");
           goto AA;
           
           
       }
    }
    
}