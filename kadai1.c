//４つの整数値を読み込んで最小値を求める
#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  int min;

  printf("b1017240 田渕知明\n");

  printf("３つの整数の最小値を求めます。\n");
  printf("aの値:");   scanf("%d", &a);
  printf("bの値:");   scanf("%d", &b);
  printf("cの値:");   scanf("%d", &c);
  printf("dの値:");   scanf("%d", &d);

  min = a;
  if(b < min) min = b;
  if(c < min) min = c;
  if(d < min) min = d;
  printf("最小値は%dです。\n", min);

  
  //haha manami
  return 0;
}
