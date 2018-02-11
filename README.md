### 算法面试是什么?
让大家在面对面试中的算法问题时,有一个合理的思考路径;<br>
- 不代表能够"正确"回答每一个算法问题,但是合理的思考方向其实更重要,也是正确完成算法面试的前提
- 算法面试优秀不意味着技术面试优秀
- 技术面试优秀不意味着能够拿到offer
### 什么是给出合理的思考路径
算法面试的目的不是给出一个"正确"答案,而是展示给面试官你思考问题的方式。<br>

### "正确"本身是一个相对概念
算法面试不是高考。<br>
把这个过程看作是和面试官一起探讨一个问题的解决方案。<br>
对于问题的细节和应用环境,可以和面试官沟通。<br>
这种沟通本身很重要,它暗示着你思考问题的方式。<br>

### 对一组数据进行排序
这组数据有什么样的特征?<br>
- 有没有可能包含有大量重复的元素?
- 如果有这种可能的话,三路快排是更好的选择。
- 是否大部分数据距离它正确的位置很近?是否近乎有序?
- 如果是这样的话,插入排序是更好地选择。
- 是否数据的取值范围非常有限?比如对学生成绩排序。
- 如果是这样的话,计数排序是更好地选择。
对排序有什么额外的要求?<br>
- 是否需要稳定排序?
- 如果是的话,归并排序是更好地选择。
数据的存储状况是怎样的?
- 是否是使用链表存储的?
- 如果是的话,归并排序是更好地选择。
- 数据的大小是否可以装载在内存里?
- 数据量大小,或者内存很小,不足以装载在内存里,需要使用外排序算法。

### 算法面试优秀并不意味着技术面试优秀
算法面试只是技术面试的一部分。<br>
根据你的简历和应聘职位的不同,势必要考察其他技术方面。<br>
项目经历和项目中遇到的实际问题<br>
你遇到的印象最深的bug是什么?<br>
面向对象<br>
设计模式<br>
网络相关;安全相关;内存相关;并发相关;...<br>
系统设计;scalability<br>

### 技术面试优秀并不意味着能够拿到offer
技术面试只是面试的一部分。面试不仅仅是考察你的技术水平,还是了解你的过去以及形成的思考行为方式。<br>

### 关于过去:参与项目至关重要
项目经历<br>
- 工作人士
- 研究生
- 本科生<br>
&emsp;1.毕业设计<br>
&emsp;2.其他课程设计<br>

创建自己的项目<br>
- 自己做小应用：计划表;备忘录;播放器...
- 自己解决小问题: 爬虫;数据分析;词频统计...
- "不是项目"的项目：一本优秀的技术书籍的代码整理等...
- 分享：自己的技术博客;github等等

通过过去了解你的思考行为方式<br>
- 遇到最大的挑战?
- 犯过的错误?
- 遭遇的失败?
- 最享受的工作内容?
- 遇到冲突的处理方式?
- 做的最与众不同的事儿?

准备好合适的问题问面试官<br>
- 整个小组的大概运行模式是怎样的?
- 整个项目的后续规划是如何的?
- 这个产品中的某个问题是如何解决的?
- 为什么会选择某些技术?标准?
- 我对某个技术很感兴趣,在你的小组中我会有怎样的机会深入这种技术?

### 算法面试并没有那么难
远远不需要啃完一本<<算法导论>><br>
- 强调理论证明
- 高级数据结构和算法面试提及的概率很低
- 远远不需要达到信息学竞赛的水平

### 算法面试的准备范围
不要轻视算法和数据结构,而只关注"有意思"的题目<br>
- 各种排序算法
- 基础数据结构和算法的实现：如堆、二叉树、图...
- 基础数据结构的使用：如链表、栈、队列、哈希表、图、Trie、并查集...
- 基础算法：深度优先、广度优先、二分查找、递归...
- 基本算法思想：递归、分治、回溯搜索、贪心、动态规划...

### 解决算法面试问题的整体思路
注意题目中的条件<br>
- 给定一个有序数组...
- 设计一个O(nlogn)的算法
- 无需考虑额外的空间
- 数据规模大概是10000

当没有思路的时候<br>
- 自己给自己几个简单的测试用例,试验一下<br>
- 不要忽略暴力解法。暴力解法通常是思考的起点。<br>

优化算法<br>
- 遍历常见的算法思路
- 遍历常见的数据结构
- 空间和时间的交换(哈希表)
- 预处理信息(排序)
- 在瓶颈处寻找答案:O(nlongn)+O(n^2);O(n^3)

实际编写问题<br>
- 极端条件的判断(数组为空?字符串为空?数量为0?指针为NULL?
- 变量名
- 模块化、复用性

### 面试中的事件复杂度问题
### 到底什么是大O
n表示数据规模<br>
O(f(n))表示运行算法所需要执行的指令数,和f(n)成正比。<br>
二分查找法O(logn)&emsp;&emsp;所需执行指令数:a\*logn<br>
寻找数组中的最大/最小值O(n)&emsp;&emsp;所需执行指令数:b\*n<br>
归并排序算法O(nlogn)&emsp;&emsp;所需指令数:c\*nlogn<br>
选择排序法O(n^2)&emsp;&emsp;所需指令数:d\*n^2<br>

在学术界,严格地讲,O(f(n))表示算法执行的上界<br>
归并排序算法的时间复杂度是O(nlogn)的,同时也是O(n^2)<br>
在业界,我们就使用O来表示算法执行的最低上界<br>
我们一般不会说归并排序是O(n^2)<br>

O(nlogn+n)=O(nlogn)<br>
O(nlogn+n^2)=O(n^2)<br>
### 一个时间复杂度的问题
有一个字符串数组,将数组中的每一个字符串按照字母序排序;之后再将整个字符串数组按照字典排序。整个操作的时间复杂度?<br>
O(n\*nlogn+nlogn)=O(n^2logn) 错误<br>
假设最长的字符串长度为s;数组中有n个字符串<br>
对每个字符串排序:O(slogs)<br>
将数组中的每一个字符串按照字母序排序:O(n\*slog(s))<br>
将整个字符串数组按照字典序排序:O(s\*nlog(n))<br>
O(n\*slog(s))+O(s\*nlog(n))=O(n\*s\*logs+s\*n\*logn)=O(n\*s\*(logs+logn))<br>

### 算法复杂度在有些情况是用例相关的
插入排序算法O(n^2)<br>
最差情况：O(n^2)<br>
最好情况：O(n)<br>
平均情况: O(n^2)<br>
快速排序算法O(nlogn)<br>
最差情况：O(n^2)<br>
最好情况：O(nlogn)<br>
平均情况：O(nlogn)<br>

### 对数据规模有一个概念
对10^5的数据进行选择排序,结果计算机假死?<br>
```C++
#include<iostream>
#include<cmath>
#include<ctime>

using namespace std;

int main() {
  for(int x = 1; x <= 9; x++){
    int n = pow(10, x);
    clock_t startTime = clock();
    int sum = 0;
    for(int i = 0; i < n; i++)
      sum += i;
    clock_t endTime = clock();
    cout<<"10^"<<x<<" : "<<double(endTime - startTime)/CLOCKS_PER_SEC<<" s"<<endl;
  }
  return 0;
}
```
```
[root@localhost chapter2]# ./a.out
10^1 : 0 s
10^2 : 0 s
10^3 : 0 s
10^4 : 0 s
10^5 : 0 s
10^6 : 0.01 s
10^7 : 0.05 s
10^8 : 0.4 s
10^9 : 3.88 s
```
如果要想在1s之内解决问题:<br>
O(n^2)的算法可以处理大约10^4级别的数据;<br>
O(n)的算法可以处理大约10^8级别的数据;<br>
O(nlogn)的算法可以处理大约10^7级别的数据;<br>

### 空间复杂度
多开一个辅助的数组：O(n)<br>
多开一个辅助的二维数组：O(n^2)<br>
多开常数空间：O(1)<br>
递归调用是有空间代价的<br>
空间复杂度O(1)<br>
```C++
int sum1(int n){
  assert(n >= 0);
  int ret = 0;
  for(int i = 0; i <= n; i++)
     ret += i;
  return ret;
}
```
空间复杂度O(n)<br>
```C++
int sum2(int n){
  assert(n >= 0);
  if(n == 0)
    return 0;
  return n + sum2(n - 1);
}
```
O(1)<br>
```C++
void swapTwoInts(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}
```
O(n)<br>
```C++
int sum(int n){
  int ret = 0;
  for(int i = 0; i <= n; i++)
    ret += i;
  return ret;
}
```
```C++
void reverse(string &s){
  int n = s.size();
  for(int i = 0; i < n/2; i++)
    swap(s[i],s[n-1-i]);
}
//1/2*n次swap操作：O(n)
```
O(n^2)<br>
```C++
void selectionSort(int arr[],int n){
  for(int i = 0; i < n; i++){
    int minIndex = i;
    for(int j = i + 1; j < n; j++)
      if(arr[j] < arr[minIndex])
        minIndex = j;
    swap(arr[i],arr[minIndex]);
  }
}
(n-1)+(n-2)+(n-3)+...+0
=(0+n-1)*n/2
=(1/2)n*(n-1)
=1/2*n^2-1/2*n
=O(n^2)
```
```C++
void printInformation(int n){
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= 30; j++)
      cout<<"Class "<<i<<" - "<<"No. "<<j<<endl;
  return;
}
//30n次基本操作：O(n)
```
O(logn)<br>
```C++
int binarySearch(int arr[], int n, int target){
  int l = 0, r = n - 1;
  while(l <= r){
    int mid = l + (r - l) / 2;
    if(arr[mid] == target)
      return mid;
    if(arr[mid] > target)
      r = mid - 1;
    else
      l = mid + 1;
  }
  return -1;
}
```
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/1.PNG)
```C++
string intToString(int num){
  string s = "";
  while(num){
    s += '0' + num%10;
    num /= 10;
  }
  reverse(s);
  return s;
}
n经过几次"除以10"操作后,等于0?
```
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/2.PNG)
```C++
void hello(int n){
  for(int sz = 1; sz < n; sz += sz)
    for(int i = 1; i < n; i++)
      cout<<"Hello,Algorithm!"<<endl;
//是nlog(n)级别的
```


