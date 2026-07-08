#include<stdio.h>
#include<math.h>
int main()
{
    int age = 18;
    double height = 1.8;
    int grade = 100;
    char gender[20] = "male";
    char name[20];
    printf("姓名？");
    scanf("%s",name);
    printf("年龄？");
    scanf("%d",&age);
    printf("身高？");
    scanf("%lf",&height);
    printf("你好,%s!\n",name);
    printf("年龄：%d\n",age);
    printf("身高：%lf\n",height);
    printf("成绩：%d\n",grade);
    printf("性别：%s\n",gender);

    int a = 0;
    int b = 0;
    int c = 0;
    printf("下面我会交换两个数字,用空格隔开");
    scanf("%d %d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("%d %d\n",a,b);

    double weight = 0;
    printf("体重？(kg)");
    scanf("%lf",&weight);
    printf("BMI=%lf\n",weight/pow(height,2));

    double temperature = 0;
    printf("摄氏度？");
    scanf("%lf",&temperature);
    printf("华氏度：%lf\n",temperature*9.0/5.0+32);
    return 0;
}