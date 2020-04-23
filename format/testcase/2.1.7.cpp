/// 2.1.7 一行只写一条语句或标号
/// > 一行只写一条程序语句或标号
/*
void f(void)
{
    int x = 0;
    while (true)
    {
        x++;
    }
}
*/
void f(void) { int x=0; while (true) {x++;}}

/*
void g(void)
{
    int x = 0;
    switch (x)
    {
        case 0:
        case 1:
        case 2:
            break;
        default:
            break;
    }
}
*/
void g(void) {
    int x=0;
    switch(x) {
        case 0: case 1: case 2: break;
        default: break;
    }
}
