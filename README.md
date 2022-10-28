# 2022-c
資傳一甲 程式設計 程式倉庫

# Week06
## step01-0
考試99乘法表
```cpp
#include<stdio.h>
int main(void)
{
for(int i=1;i<=9;i++)
{
for(int j=1;j<=9;j++)
{
printf("%d*%d=%2d",j,i,i*j);
}
printf("\n");
}
}

```

## step01-1_畫星星-金字塔

```cpp
#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        int star= i*2-1;
        printf("鷹架:%d樓 %d星\n", i, star);
    }
}

```

## step01-2_畫星星加空格-金字塔
```cpp
#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        int space= 5-i;
        int star= i*2-1;
        for(int k=0; k<space; k++);
        {
            printf(" ");
        }
        for(int k=0; k<star; k++)
        {
            printf("*");
        }
        printf("鷹架:%d樓 %d星\n", i, star);
    }
}

```

## step01-3_最大公因數-暴力迴圈法
```cpp
#include<stdio.h>
int main()
{
    ("請輸入2個數: ");
    int a, b, ans;
    scanf("%d %d", &a, &b);

    for(int i=1; i<a; i++)
    {
        if( a%i==0 && b%i==0)
        ans=i;
    }
    printf("找到ans:%d", ans);
}

```

## step01-4_最大公因數-輾轉相除法
```cpp
#include<stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a, b, c;
    scanf("%d %d", &a, &b);

    while(1)
    {
        c= a%b;
        printf("a:%d b:%d c:%d\n", a, b, c);
        if( c==0 ) break;
        a = b;
        b = c;
    }
}

```

##step01-5_所有的數值幾乎都成立, 只有 0 是不成意
```cpp
#include<stdio.h>
int main()
{
    int a=10;

    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(-0) printf("0不成立,所以什麼都沒印\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(4) printf("4成立\n");
    if(999) printf("999成立\n");
    if( "a==0" ) printf("不管什麼東西,幾乎都都成立\n");
}

```

# Week08
## step01-1 2個 while迴圈 來畫出直角三角形
```cpp

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++)
	{
		for(int k=1; k<=n; k++)
		{
			if( k<=n-i )
			printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}

```

# Week08
## step01-2 2個for迴圈 來畫出直角三角形
```cpp
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int i=1;
	while(i<=n)
	{
		int k=1;
		while(k<=n)
		{
			if( k<=n-i )
			printf(" ");
			else printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}

```

# Week08
## step01-3 有質數判別
```cpp
#include<stdio.h>
int main()
{
    printf("要判斷輸入的是否為質數:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2; i<n; i++)
    {
        if( n%i==0 )
        bad=1;
    }
    if(bad==0)
    printf("%d是質數", n);
    else
    printf("%d不是質數",n);
}

```

# Week08
## step01-4 質數判斷
```cpp
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);

	for(int n=2; n<=a; n++)
	{
		int bad=0;
		for(int i=2; i<n; i++)
		{
			if(n%i==0)
			bad=1;
		}
		if(bad==0)
		printf("%d ",n);
	}
}

```
