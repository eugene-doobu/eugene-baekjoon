#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b)
        if(a>c)
        { //a�� ���� ũ��.
            if(b>c)printf("%d",b);
            else printf("%d",c);
        }
        else printf("%d",a);
        
   else//(a<b)
       if(a<c)//a�� ���� �۴�.
       {
           if(b<c) printf("%d",b);
           else printf("%d",c);
        }
       else printf("%d",a);
}