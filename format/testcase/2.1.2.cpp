/// 2.1.2 哪里应该使用空格

/// 1. 在使用赋值运算符、关系运算符、逻辑运算符、位运算符、算术运算符等二元操作符时，在其两边各加一个空格。
/*
int iCount = 2;
int iSum = (1 < 2) || (1 << 32) + 1;
*/
int iCount=2;
int iSum=(1<2)||(1<<32)+1;

/// 2. 三目运算符的 ? 和 : 前后均各加 1 个空格。
/* 
int _ = true ? 1 : 0;
*/
int _ = true?1:0;

/// 3. 函数的各参数间、数组初始化列表的各个初始值间，要用 `,` 和后续一个空格隔开
/*
void GetDate(int x, int y);
int iArr[] = {1, 2, 3};
*/
void GetDate(int x,int y);
void GetDate(int x ,int y);
void GetDate(int x , int y);
int iArr[]={1,2,3};

/// 4. 控制语句 if, for, while, switch 和之后的 ( 之间加一个空格。
/// 5. 控制语句 if, for, while, switch 之后的 ) 与 {
/// 之间加一个空格（同行的情况下）。

/// 目前的设定 `{}` 全部独占一行。故无需测试同行情况
/*
void f(void)
{
    int i = 0;

    if (true) { i++; }
    else { for(;;) { i++; }}

    while (i!=0) { i--; }

    switch (i)
    {
        case 0:
        case 1: 
            // no code
            break;
        
        default:
            break;
    }
}
*/