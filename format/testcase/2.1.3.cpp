/// 2.1.3 哪里不应该使用空格
struct A
{
    int a;
} sa;
typedef struct A* APtr;
APtr saPtr = &sa;

// 1. 不要在引用操作符前后使用空格。
//  引用操作符指 `.` 和 `->`，以及 `[]`。
// 4. `;` 前不能有空格。
/*
void f(void)
{
    int arr[5] = {0};
    sa.a;
    saPtr->a;
}
*/
void f(void)
{
    int arr [5] = {0} ;
    sa . a ;
    saPtr -> a ;
}

// 2. 不要在 :: 前后使用空格。
/*
std::nullptr_t;
*/
std:: nullptr_t;
// std :: nullptr_t; // 暂不能处理 `::` 前的空格


// 3. 不要在一元操作符和其操作对象之间使用空格，
//  一元操作符包括 ++、--、!、&、* 等。
// 4. `;` 前不能有空格。
/*
void g(void)
{
    *saPtr;
    &sa;
    saPtr++;
    saPtr--;
    !true == false;
}
*/
void g(void)
{
    * saPtr         ;
    & sa            ;
    saPtr ++        ;
    saPtr --        ;
    ! true==false   ;
}
