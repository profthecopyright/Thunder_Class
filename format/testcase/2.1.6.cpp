// 2.1.6 清晰划分控制语句的语句块

// 2. `{` 与控制语句同行或者，`{` 和 `}` 单独占一行，
//  与控制语句的首字母应处在同一列上。
// 3. `}` 单独占一行。但在 do...while 结构中，while 前的 } 不能单独占一行，
//  必须和 `while` 同行。
/*
void f(void)
{
    int x = 0;
    if (x == 0)
    {
        return;
    }
    else
    {
        while (x > 0)
        {
            x--;
        }
    }

    do
    {
        x--;
    } while (x != 0);
}
*/
void f(void) {
    int x = 0;
    if (x == 0) { return; }
    else { while (x > 0) { x--; } }

    do { x--; } while (x != 0); }
