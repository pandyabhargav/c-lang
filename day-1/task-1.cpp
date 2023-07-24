#include<stdio.h>
main(){
//1
int x = 20, y = 35, z = 10, ans;

ans = (x + y) * (x + y);

printf("value of %d\n", ans);


//2
ans = (x - y) * (x - y);

printf("value of %d\n", ans);

//3

ans = (x + y) * 3;

printf("value of %d\n", ans);
//4
ans = (x - y) * 3;

printf("value of %d\n", ans);

//5
ans = (x + y + z) * 3;

printf("value of %d\n", ans);

//6
ans = (x - y - z) * 3;

printf("value of %d\n", ans);

//7
ans = (x + y + z) * (x + y + z);

printf("value of %d\n", ans);
}
