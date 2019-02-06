int a[10];
int *pa;

void fun(int cnt);

int main(void)
{
   printf("&a[0] = 0x%08X\n", &a[0]);
   printf("&pa = 0x%08X\n", &pa);
   printf("pa = 0x%08X\n", pa);
   printf("fun= 0x%08X\n", (int) fun);
}

void fun(int cnt)
{
   pa = a;

   while (cnt) {
      *pa = cnt;
       pa++;
       cnt--;
   }
}
