//编写程序，实现如下功能：任意输入两个整数，输出两个整数之和。
#include<stdio.h>
int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);

    return 0;

}
//编写一个程序，参考图1的格式输出自己的学号、姓名、性别、年龄及专业。
#include<stdio.h>
int main(void)
{
    printf("学生信息\n");
    printf("==============\n");
    printf("学号:20161496\n");
    printf("姓名：张岩松\n");
    printf("性别：男\n");
    printf("年龄：19\n");
    printf("专业：工程管理\n");

    return 0;

}
//编写一个程序，将560分钟转换成小时和分钟表示，并按 “xx小时xx分钟”的格式进行输出。
#include<stdio.h>
int main(void)
{
   
    int a,b,c;
    a=560;
    b=a/60;
    c=a%60;
    printf("%d分钟为%d小时%d分钟\n",a,b,c);

    return 0;

}

//编写程序，已知华氏温度f的值为59，用 公式，根据已知的华氏温度计算对应的摄氏温度C的值。
#include<stdio.h>
int main(void)
{
   
    int f;
    double c;
    f=59;
    c=(f-32)*5.0/9;
    printf("摄氏温度为%.2lf",c);
    
    return 0;

}
//编写程序，若三角形三条边长分别为3、4、6，请按下面的三角形面积公式，计算三角形面积，输出时面积保留两位小数。
#include<stdio.h>
#include<math.h>
int main(void)
{
   
    int x,y,z;
    double c,s;
    x=3,y=4,z=6;
    c=1.0/2*(x+y+z);
    s=sqrt(c*(c-x)*(c-y)*(c-z));
    printf("%.2lf",s);
    
    return 0;

}
//（1）	编写程序：输入x的值，计算分段函数y的值。
#include<stdio.h>
#include<math.h>
int main(void)
{
   
    double x,y;
    printf("输入x的值:");
    scanf("%lf",&x);
    if(x<2)
        printf("y=%lf",abs(3*x+5));
    else if(x>=2&&x<12)
        printf("y=%lf",exp(x));
    else if(x>=12)
        printf("y=%lf",4*x-7);

    return 0;

}
//（2）	编写程序：任意输入一个四位自然数，把这个数的千位数与百位数对调，个位数与十位数对调，输出对调后的数。例如：输入1234，输出2143。
#include<stdio.h>
#include<math.h>
int main(void)
{
   int s;
    scanf("%d",&s);
    printf("%d%d%d%d",((s/100)%10),(s/1000),(s%10),((s/10)%10));

    return 0;
  
}
//（3）	苹果店有4个等级的苹果，一级5.5元/kg，二级4.3元/kg，三级3.0元/kg，四级2.5元/kg。请分别用if…else if和switch语句编写程序，输入苹果的等级、数量和付款金额，输出显示苹果的等级、数量以及应付款和找给顾客的钱数。当输入的钱款不够，通知顾客“钱款不足”。
#include<stdio.h>
int main(void)
{
    int a,b;
    double c,d;
    printf("输入苹果的等级、数量和付款金额:");
    scanf("%d%d%lf",&a,&b,&c);
    if(a==1)
    {
        d=5.5*b;
        if(d>c)
        {
            printf("钱款不足\n");
        }
        else
            printf("苹果的等级%d、数量%d以及应付款%lf和找给顾客的钱数%lf\n",a,b,d,c-d);
    }
    else if(a==2)
    {
        d=4.3*b;
        if(d>c)
        {
            printf("钱款不足\n");
        }
        else
            printf("苹果的等级%d、数量%d以及应付款%lf和找给顾客的钱数%lf\n",a,b,d,c-d);
    }
       else if(a==3)
    {
        d=3.0*b;
        if(d>c)
        {
            printf("钱款不足\n");
        }
        else
            printf("苹果的等级%d、数量%d以及应付款%lf和找给顾客的钱数%lf\n",a,b,d,c-d);
    }
    else if(a==4)
    {
        d=2.5*b;
        if(d>c)
        {
            printf("钱款不足\n");
        }
        else
            printf("苹果的等级%d、数量%d以及应付款%lf和找给顾客的钱数%lf\n",a,b,d,c-d);
    }

    return 0;
  
}
//switch 用法
#include<stdio.h>
int main(void)
{
    int a,b;
    double c,d;
    printf("输入苹果的等级、数量和付款金额:");
    scanf("%d%d%lf",&a,&b,&c);
    switch(a<5)
    {
        case 1:d=5.5*b;
            if(d>c)
            {
                printf("钱款不足\n");
            }
            else
                printf("苹果的等级%d、数量%d以及应付款%lf和找给顾客的钱数%lf\n",a,b,d,c-d);
        break;
        case 2:d=4.3*b;
            if(d>c)
            {
                printf("钱款不足\n");
            }
            else
                printf("苹果的等级%d、数量%d以及应付款%lf和找给顾客的钱数%lf\n",a,b,d,c-d);
        break;
        case 3:
            if(d>c)
            {      
                printf("钱款不足\n");
            }
        else
            printf("苹果的等级%d、数量%d以及应付款%lf和找给顾客的钱数%lf\n",a,b,d,c-d);
        break;
        case 4:
            d=2.5*b;
        if(d>c)
            {
                printf("钱款不足\n");
            }
        else
            printf("苹果的等级%d、数量%d以及应付款%lf和找给顾客的钱数%lf\n",a,b,d,c-d);
        break;
    }
      return 0;
}
//（4）	编写程序模拟计算器实现算术的加（＋）、减（－）、乘（＊）、除（／）四则运算。根据用户键入的两个操作数和一个运算符，由计算机输出运算结果。提示：用switch语句判断运算符，然后输出运算值。当输入的运算符不是+,-,*,/时请给出“输入的运算符错误”提示
#include<stdio.h>
int main(void)
{
    int a,c;
    char b;
    scanf("%d %c %d",&a,&b,&c);        
    switch(b)
    {
        case '+':
            printf("%d",a+c);
            break;
        case '-':
            printf("%d",a-c);
            break;
        case '*':
            printf("%d",a*c);
            break;
        case '/':
            if( c == 0 )       
                {
                    printf("c 的值不能为0");
                    return 1;
                 }
            printf("%f",a/(float)c);
            break;
        default:printf("输入错误");
            return 1;
    }
    return 0;

}

//（1）	编写程序输出所有的水仙花数。所谓的水仙花数，是指一个3位正整数，其各位数字的立方和等于该数本身。例如153=13+53+33
#include<stdio.h>
int main(void)
{
    int i,a,b,c;
    for(i=100;i<1000;i++)
    {
        a=i/100;
        b=(i/10)%10;
        c=i%10;
        if(a*a*a+b*b*b+c*c*c==i)
        {
            printf("%d是水仙花数\n",i);
        }
    }

    return 0;
}

//（2）
#include<stdio.h>
#include<math.h>
int main(void)
{

      int a,b,c;
      double sum1,sum2,sum3;
      sum1=sum3=0;
      sum2=1;
      for(a=1;a<=10;a++)
      {
          sum1+=1/a;
      }
      for(b=1;b<=6;b++)
      {
          sum2*=b;
      }
      for(c=1;c<=50;c++)
      {
          sum3+=(pow(-1,(double)c+1))*(2*c-1);
      }
      printf("%lf",sum1+sum2+sum3);

      return 0;
}
//（3）	（选做）键盘任意输入a和n的值（a和n都是正整数），求s=a+aa+aaa+……+aaa…aa之值。其中a是一个自然数，n为a的位数。
#include<stdio.h>
int main(void)
{
      int num=0,sum=0;
      int a,n,i;
      printf("输入 a，n\n");
      scanf("%d %d",&a,&n);
        for(i=1;i<=n;i++)
        {

            num=num*10+a;
            sum =sum+num;

        }

        printf("sum=%d\n",sum);

        return 0;

}
//（4）	编写程序：输入全班30名学生的小测验成绩（百分制），统计优秀、良好、中等、及格、不及格各等级人数。其中[90,100]分为优秀，[80,89]分为良好，[70,79]为中等，[60,69]为及格，60分以下为不及格。
#include<stdio.h>
int main(void)
{
    int a[30];
    int i,j,k,l,m,n;
    j=k=l=m=n=0;
    printf("输入30个人的成绩:\n");
    for(i=0;i<30;i++)
    {
        printf("输入第%d个人的成绩:\n",i+1);
        scanf("%d",&a[i]);
        if(a[i]<=100&&a[i]>=90)
        {
            j+=1;
        }
        else if(a[i]<=89&&a[i]>=80)
        {
            k+=1;
        }
        else if(a[i]<=79&&a[i]>=70)
        {
            l+=1;
        }
        else if(a[i]<=69&&a[i]>=60)
        {
            m+=1;
        }
        else if(a[i]<60)
        {
            n+=1;
        }

    }
     printf("优秀%d人 良好%d人 中等%d人 及格%d人 不及格%d人",j,k,l,m,n);

     return 0;

}

//（5）	（选做）编写程序，输出九九乘法表。
#include<stdio.h>
int main(void)
{
   int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d= %d ",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}
//任意输入N位学生的学号和数学成绩，参考如下样式输出，并求出这些学生的数学平均分。
#include<stdio.h>
int main(void)
{
   int i,j,n;
   double sum=0;
   int arr[100][100];
   double arrAve[2];
   printf("请输入人数：");
   scanf("%d",&n);
   printf("请先输入学号,再输入成绩\n");
   for(i=0;i<n;i++)
   {
       printf("第%d个同学的学号，成绩",i+1);
       for(j=0;j<2;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   for(i=1;i<2;i++)
   {
       for(j=0;j<n;j++)
       {
           sum+=(double)arr[j][i];
       }
       arrAve[0]=sum/n;
   }
   printf("学号\t\t数学成绩\n");
   for(i=0;i<n;i++)
   {
      for(j=0;j<2;j++)
      {
          printf("%d\t",arr[i][j]);
      }
      printf("\n");
   }
   
   printf("平均分：%lf",arrAve[0]);
   return 0;

}
//（选做）自行编写程序实现两个字符串的连接（不允许使用strcat函数）。
#include<stdio.h>
#include<string.h>
int main(void)
{
   char a[30],b[15];
   int m,n,i,j;
   printf("输入两个长度小于15的字符串\n");
   gets(a);
   gets(b);
   m=strlen(a);
   n=strlen(b);
   for(i=m,j=0;j<=n+1;i++,j++)
   {
       a[i]=b[j];
   }
   printf("结果是：\n");
   puts(a);

   return 0;

}




























