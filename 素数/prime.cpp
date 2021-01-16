  #include <bits/stdc++.h>
  
  using namespace std;
  
  vector<int> Prime(int n) {  // 求解n以内(含n)的素数
     bool flag[n + 1];   // 标记数组,flag[i]==0表示i为素数,flag[i]==1表示i为合数
      memset(flag, 0, sizeof(flag));
      vector<int> prime;      int cnt = 0;    // 素数个数
    for (int i = 2; i <= n; ++i) {
         if (!flag[i]) {
           prime.push_back(i); // 将i加入素数表
            cnt++;
       }
         for (int j = 0; j < cnt; ++j) { // 保证每个合数只会被它的最小质因数筛去
            if (i * prime[j] > n)  break;
           flag[i * prime[j]] = 1;
            if (i % prime[j] == 0)  break;
       }
  }
     return prime;
 }
 int main(int argc, char const *argv[])
 {
     int n;
     while(1) {
         printf("请输入n,将输出n以内(含n)的素数:");
         scanf("%d", &n);
         if(n < 0) break;
         vector<int> prime = Prime(n);
         int cnt = prime.size();
         printf("一共有%d个素数:\n", cnt);
         for(int i = 0; i < cnt; i++) {
             printf("%3d ", prime[i]);
             if(i % 10 == 9) puts("");
         }
         puts("\n");
    }
     return 0;
 }