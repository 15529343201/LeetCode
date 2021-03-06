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
//是nlog(n)级别的,不是O(n^2)
```
O(sqrt(n))<br>
```C++
bool isPrime(int n){
  for(int x = 2; x*x <= n; x++)
    if(n%x == )
      return false;
  return true;
}
```

### 复杂度试验
我们自以为写出了一个O(nlogn)的算法,但实际是O(n^2)的算法?<br>
实验,观察趋势<br>
每次将数据规模提高两倍,看时间的变化<br>
MyAlgorithmTester.h:<br>
```C++
#ifndef INC_04_TIME_COMPLEXITY_EXPERIMENTS_MYALGORITHMTESTER_H
#define INC_04_TIME_COMPLEXITY_EXPERIMENTS_MYALGORITHMTESTER_H

#include<iostream>
#include<cassert>

using namespace std;

namespace MyAlgorithmTester{

  // O(logN)
  int binarySearch(int arr[],int n,int target){
    int l=0,r=n-1;
    while(l<=r){
      int mid=l+(r-l)/2;
      if(arr[mid]==target)
        return mid;
      if(arr[mid]>target)
        r=mid-1;
      else
        l=mid+1;
    }
    return -1;
  }

  // O(N)
  int findMax(int arr[],int n){
    assert(n>0);
    int res=arr[0];
    for(int i=1;i<n;i++)
      if(arr[i]>res)
        res=arr[i];
    return res;
  }

  // O(NlogN)
  void __merge(int arr[],int l,int mid,int r,int aux[]){
    int i=l,j=mid+1;
    for(int k=l;k<=r;k++){
      if(i>mid){
        arr[k]=aux[j];
        j++;
      }else if(j>r){
        arr[k]=aux[i];
        i++;
      }else if(aux[i]<aux[j]){
        arr[k]=aux[i];
        i++;
      }else{
        arr[k]=aux[j];
        j++;
      }
    }
  }
  void mergeSort(int arr[],int n){
    int *aux=new int[n];
    for(int i=0;i<n;i++)
      aux[i]=arr[i];
    for(int sz=1;sz<n;sz+=sz)
      for(int i=0;i<n;i+=sz+sz)
        __merge(arr,i,i+sz-1,min(i+sz+sz-1,n-1),aux);
    delete[] aux;
    return;
  }

  // O(N^2)
  void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
      int minIndex=i;
      for(int j=i+1;j<n;j++)
        if(arr[j]<arr[minIndex])
          minIndex=j;
      swap(arr[i],arr[minIndex]);
    }
    return;
  }
}

#endif
```

MyUtil.h:<br>
```C++
#include<iostream>
#include<ctime>
#include<assert.h>
#include<cstdlib>

using namespace std;

namespace MyUtil{
  int *generateRandomArray(int n,int rangeL,int rangeR){
    assert(n>0&&rangeL<=rangeR);
    int *arr=new int[n];
    srand(time(NULL));
    for(int i=0;i<n;i++)
      arr[i]=rand()%(rangeR-rangeL+1)+rangeL;
    return arr;
  }

  int *generateOrderedArray(int n){
    assert(n>0);
    int *arr=new int[n];
    for(int i=0;i<n;i++)
      arr[i]=i;
    return arr;
  }
}
```

main.cpp:<br>
```C++
#include<iostream>
#include<cmath>
#include<ctime>
#include "MyUtil.h"
#include "MyAlgorithmTester.h"

using namespace std;

int main(){
  // 数据规模倍乘测试findMax
  // O(n)
  cout<<"Test for findMax:"<<endl;
  for(int i=10;i<=26;i++){
    int n=pow(2,i);
    int *arr=MyUtil::generateRandomArray(n,0,100000000);
    clock_t startTime=clock();
    MyAlgorithmTester::findMax(arr,n);
    clock_t endTime=clock();
    cout<<"data size 2^"<<i<<" = "<<n<<"\t";
    cout<<"Time cost: "<<double(endTime-startTime)/CLOCKS_PER_SEC<<endl;
    delete[] arr;
  }
  return 0;
}
```
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/3.PNG)

main2.cpp:<br>
```C++
#include<iostream>
#include<cmath>
#include<ctime>
#include "MyUtil.h"
#include "MyAlgorithmTester.h"

using namespace std;

int main(){
  // 数据规模倍乘测试selectionSort
  // O(n^2)
  cout<<"Test for selectionSort:"<<endl;
  for(int i=10;i<=15;i++){
    int n=pow(2,i);
    int *arr=MyUtil::generateRandomArray(n,0,100000000);
    clock_t startTime=clock();
    MyAlgorithmTester::selectionSort(arr,n);
    clock_t endTime=clock();
    cout<<"data size 2^"<<i<<" = "<<n<<"\t";
    cout<<"Time cost: "<<double(endTime-startTime)/CLOCKS_PER_SEC<<endl;
    delete[] arr;
  }
  return 0;
}
```
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/4.PNG)

main3.cpp:<br>
```C++
#include<iostream>
#include<cmath>
#include<ctime>
#include "MyUtil.h"
#include "MyAlgorithmTester.h"

using namespace std;

int main(){
  // 数据规模倍乘测试binarySearch
  // O(logn)
  cout<<"Test for binarySearch:"<<endl;
  for(int i=10;i<=28;i++){
    int n=pow(2,i);
    int *arr=MyUtil::generateOrderedArray(n);
    clock_t startTime=clock();
    MyAlgorithmTester::binarySearch(arr,n,0);
    clock_t endTime=clock();
    cout<<"data size 2^"<<i<<" = "<<n<<"\t";
    cout<<"Time cost: "<<double(endTime-startTime)/CLOCKS_PER_SEC<<endl;
    delete[] arr;
  }
  return 0;
}
```
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/5.PNG)
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/6.PNG)

main4.cpp:<br>
```C++
#include<iostream>
#include<cmath>
#include<ctime>
#include "MyUtil.h"
#include "MyAlgorithmTester.h"

using namespace std;

int main(){
  // 数据规模倍乘测试mergeSort
  // O(nlogn)
  cout<<"Test for mergeSort:"<<endl;
  for(int i=10;i<=26;i++){
    int n=pow(2,i);
    int *arr=MyUtil::generateRandomArray(n,0,1<<30);
    clock_t startTime=clock();
    MyAlgorithmTester::mergeSort(arr,n);
    clock_t endTime=clock();
    cout<<"data size 2^"<<i<<" = "<<n<<"\t";
    cout<<"Time cost: "<<double(endTime-startTime)/CLOCKS_PER_SEC<<endl;
    delete[] arr;
  }
  return 0;
}
```
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/7.PNG)

### 递归算法的复杂度分析
不是有递归的函数就一定是O(nlogn)!<br>
递归中进行一次递归调用的复杂度分析<br>
```C++
int binarySearch(int arr[],int l,int r,int target){
  if(l>r)
    return -1;
  int mid=l+(r-l)/2;
  if(arr[mid]==target)
    return mid;
  else if(arr[mid]>target)
    return binarySearch(arr,l,mid-1,target);
  else
    return binarySearch(arr,mid+1,r,target);
}
//时间复杂度：O(logn)
```
如果递归函数中,只进行一次递归调用,递归深度为depth;<br>
在每个递归函数中,时间复杂的为T;则总体的时间复杂度为O(T\*depth)<br>
```C++
int sum(int n){
  assert(n>=0);
  if(n==0)
    return 0;
  return n+sum(n-1);
}
递归深度：n
时间复杂度：O(n)
```
```C++
double pow(double x,int n){
  assert(n>=0);
  if(n==0)
    return 1.0;
  double t=pow(x,n/2);
  if(n%2)
    return x*t*t;
  return t*t;
}
递归深度：logn
时间复杂度：O(logn)
```
递归中进行多次递归调用<br>
```C++
int f(int n){
  assert(n>=0);
  if(n==0)
    return 1;
  return f(n-1)+f(n-1);
}
```
计算调用次数<br>
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/8.PNG)
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/9.PNG)

### 均摊复杂度分析
动态数组(vector)<br>
MyVector.h:<br>
```C++
#ifndef MYVECTOR_H
#define MYVECTOR_H

#include<iostream>
#include<assert.h>

using namespace std;

template<typename T>
class MyVector{
  private:
    T* data;
    int capacity;//存储数组中可以容纳的最大的元素个数
    int size;//存储数组中的元素个数

    // O(n)
    void resize(int newCapacity){
      assert(newCapacity>=size);
      T *newData=new T[newCapacity];
      for(int i=0;i<size;i++)
        newData[i]=data[i];
      delete[] data;

      data=newData;
      capacity=newCapacity;
    }
  public:
    MyVector(){
      data=new T[10];
      capacity=10;
      size=0;
    }
    ~MyVector(){
      delete[] data;
    }
    // Average: O(1)
    void push_back(T e){
      // assert(size<capacity);
      if(size==capacity)
        resize(2*capacity);
      data[size++]=e;
    }
    // Average: O(1)
    T pop_back(){
      assert(size>0);
      T ret=data[size-1];
      size--;
      if(size==capacity/4)
        resize(capacity/2);
      return ret;
    }
};

#endif
```
main.cpp:<br>
```C++
#include<iostream>
#include<cmath>
#include<ctime>
#include "MyVector.h"

using namespace std;

int main(){
  for(int i=10;i<=26;i++){
    int n=pow(2,i);
    clock_t startTime=clock();
    MyVector<int> vec;
    for(int i=0;i<n;i++){
      vec.push_back(i);
    }
    clock_t endTime=clock();
    cout<<2*n<<" operations: \t";
    cout<<double(endTime-startTime)/CLOCKS_PER_SEC<<" s"<<endl;
  }
  return 0;
}
```
main2.cpp:<br>
```C++
#include<iostream>
#include<cmath>
#include<ctime>
#include "MyVector.h"

using namespace std;

int main(){
  for(int i=10;i<=26;i++){
    int n=pow(2,i);
    clock_t startTime=clock();
    MyVector<int> vec;
    for(int i=0;i<n;i++)
      vec.push_back(i);
    for(int i=0;i<n;i++)
      vec.pop_back();
    clock_t endTime=clock();
    cout<<2*n<<" operations: \t";
    cout<<double(endTime-startTime)/CLOCKS_PER_SEC<<" s"<<endl;
  }
  return 0;
}
```
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/10.PNG)
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/11.PNG)
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/12.PNG)
![image](https://github.com/15529343201/LeetCode/blob/chapter2/image/13.PNG)

### 数组中的问题其实最常见
- 排序:选择排序;插入排序;归并排序;快速排序
- 查找:二分查找法
- 数据结构:栈;队列;堆
- ......

### 二分查找法
对于有序数列,才能使用二分查找法(排序的作用)<br>
MyUtil.h:<br>
```C++
#ifndef BINARYSEARCH_MYUTIL_H
#define BINARYSEARCH_MYUTIL_H

#include<iostream>
#include<algorithm>
#include<cassert>

using namespace std;

namespace MyUtil{
  int *generateRandomArray(int n,int rangeL,int rangeR){
    assert(n>0 && rangeL<=rangeR);
    int *arr=new int[n];
    srand(time(NULL));
    for(int i=0;i<n;i++)
      arr[i]=rand()%(rangeR-rangeL+1)+rangeL;
    return arr;
  }

  int *generateOrderedArray(int n){
    assert(n>0);
    int *arr=new int[n];
    for(int i=0;i<n;i++)
      arr[i]=i;
    return arr;
  }
}

#endif
```
main.cpp:<br>
```C++
#include <iostream>
#include <cmath>
#include <cassert>
#include <ctime>
#include "MyUtil.h"

using namespace std;

template<typename T>
int binarySearch(T arr[],int n,T target){
  int l=0,r=n-1; //在[l...r]的范围里寻找target
  while(l<=r){ //当l==r时,区间[l...r]依然是有效的
    int mid=l+(r-l)/2;
    if(arr[mid]==target)
      return mid;
    if(target>arr[mid])
      l=mid+1; //target在[mid+1...r]中
    else //target<arr[mid]
      r=mid-1;
  }
  return -1;
}

int main(){
  int n=1000000;
  int *data=MyUtil::generateOrderedArray(n);
  clock_t startTime = clock();
  for(int i=0;i<n;i++)
    assert(i==binarySearch(data,n,i));
  clock_t endTime = clock();

  cout<<"binarySearch test complete."<<endl;
  cout<<"Time cost: "<<double(endTime-startTime)/CLOCKS_PER_SEC<<" s"<<endl;
  return 0;
}
```

### 283. Move Zeroes
![image](https://github.com/15529343201/LeetCode/blob/chapter3/image/14.PNG)<br>
给定一个数组nums,写一个函数,将数组中所有的0挪到数组的末尾,而维持其他所有非0元素的相对位置。<br>
```C++
class Solution {
  public:
    // 时间复杂度:O(n)
    // 空间复杂度:O(n)
    void moveZeroes(vector<int>& nums) {
      vector<int> nonZeroElements;
      for(int i = 0; i < nums.size(); i++)
        if(nums[i])
          nonZeroElements.push_back(nums[i]);

      for(int i = 0; i < nonZeroElements.size(); i++)
        nums[i] = nonZeroElements[i];

      for(int i = nonZeroElements.size(); i < nums.size(); i++)
        nums[i] = 0;
    }
};
```
```C++
class Solution {
  public:
    // 时间复杂度:O(n)
    // 空间复杂度:O(1)
    void moveZeroes(vector<int>& nums) {
      int k = 0; // nums中,[0...k)的元素均为非0元素

      // 遍历到第i个元素后,保证[0...i]中所有非0元素
      // 都按照顺序排列在[0...k)中
      for(int i = 0; i < nums.size(); i++)
        if(nums[i])
          nums[k++] = nums[i];

      // 将nums剩余的位置放置为0
      for(int i = k; i < nums.size(); i++)
        nums[i] = 0;
    }
};
```
```C++
class Solution {
  public:
    // 时间复杂度O(n)
    // 空间复杂度O(1)
    void moveZeroes(vector<int>& nums) {
      int k = 0; // nums中,[0...k)的元素均为非0元素

      // 遍历到第i个元素后,保证[0...i]中所有非0元素
      // 都按照顺序排列在[0...k)中
      // 同时,[k...i]为0
      for(int i = 0; i < nums.size(); i++)
        if(nums[i])
          if(i != k)
            swap(nums[k++], nums[i]);
          else // i == k
            k++;
    }
};
```

### 75 Sort Colors
给定一个有n个元素的数组,数组中元素的取值只有0,1,2三种可能。为这个数组排序。<br>
计数排序:分别统计0,1,2的元素个数,在把它们放回到原数组。<br>
```C++
class Solution {
  public:
    // 时间复杂度：O(n)
    // 空间复杂度：O(k),k为元素的取值范围,k=3 O(1)
    void sortColors(vector<int>& nums) {

      int count[3] = {0}; // 存放0,1,2三个元素的频率
      for(int i = 0; i < nums.size(); i++){
        assert(nums[i] >= 0 && nums[i] <= 2);
        count[nums[i]]++;
      }

      int index = 0;
      for(int i = 0; i < count[0]; i++)
        nums[index++] = 0;
      for(int i = 0; i < count[1]; i++)
        nums[index++] = 1;
      for(int i = 0; i < count[2]; i++)
        nums[index++] = 2;

    }
};
```
三路归并:<br>
![image](https://github.com/15529343201/LeetCode/blob/chapter3/image/15.PNG)<br>
```C++
class Solution {
  public:
    // 时间复杂度：O(n)
    // 空间复杂度：O(1)
    // 遍历一遍
    void sortColors(vector<int>& nums) {

      int zero = -1; // nums[0...zero] == 0
      int two = nums.size(); // num[two...n-1] == 2
      for(int i = 0; i < two;) {
        if(nums[i] == 1)
          i++;
        else if(nums[i] == 2) {
          swap(nums[i], nums[--two]);
        }else{ // nums[i] == 0
          assert(nums[i] == 0);
          swap(nums[++zero], nums[i++]);
        }
      }
    }
};
```

### 167 Two Sum II - Input array is sorted
给定一个有序整型数组和一个整数target,在其中寻找两个元素,使其和为target。返回这两个数的索引。<br>
- 如numbers = [2,7,11,15],target = 9
- 返回数字2,7的索引1,2(索引从1开始计算)
- 如果没有解怎样? 保证有解
- 如果有多个解怎样? 返回任意解

1.最直接的思考：暴力解法。双层遍历,O(n^2)<br>
2.二分搜索<br>
![image](https://github.com/15529343201/LeetCode/blob/chapter3/image/16.PNG)<br>
3.对撞指针,`nums[i]+nums[j] <|>|= target`<br>
```C++
// 时间复杂度:O(n)
// 空间复杂度:O(1)
class Solution {
public:
  vector<int> twoSum(vector<int>& numbers, int target) {

    assert(numbers.size() >= 2);

    int l = 0, r = numbers.size() - 1;
    while(l < r) {
      if(numbers[l] + numbers[r] == target) {
        int res[2] = {l+1, r+1};
        return vector<int>(res,res+2);
      }
      else if(numbers[l] + numbers[r] < target)
        l++;
      else
        r--;
    }
    throw invalid_argument("The input has no solution.");
  }
};
```

### 双索引技术 Two Pointer 滑动窗口
### Minimum Size Subarray Sum
给定一个整型数组和一个数字s,找到数组中最短的一个连续子数组,使得连续子数组的数字和sum>=s,返回这个最短的连续子数组的长度值。<br>
- 如,给定数组[2,3,1,2,4,3], s = 7
- 答案为[4,3],返回2
- 什么叫子数组
- 如果没有解怎么办? 返回0

暴力解:遍历所有的连续子数组[i...j],计算其和sum,验证sum>=s,时间复杂度O(n^3) 优化:O(n^2)?<br>
滑动窗口<br>
```C++
// 时间复杂度:O(n)
// 空间复杂度:O(1)
class Solution {
public:
  int minSubArrayLen(int s, vector<int>& nums) {
    int l = 0, r = -1; // nums[l...r]为我们的滑动窗口
    int sum = 0;
    int res = nums.size() + 1;

    while(l < nums.size()) {
      if(r+1 < nums.size() && sum < s) {
        sum += nums[++r];
      else
        sum -= nums[l++];
      if(sum >= s)
        res = min(res,r-l+1);
    }

    if(res == nums.size() + 1)
      return 0;
    return res;
  }
};
```

### 3.Longest Substring Without Repeating Characters
在一个字符串中寻找没有重复字母的最长字串<br>
- 字符集?只有字母?数字+字母? ASCII?
- 大小写是否敏感?

```C++
class Solution {
public:
  int lengthOfLongestSubstring(string s) {

    int freq[256] = {0};
    int l = 0,r = -1; // 滑动窗口为s[l...r]
    int res = 0;

    while(l < s.size()) {
      if(r + 1 < s.size() && freq[s[r+1]] == 0)
        freq[s[++r]]++;
      else
        freq[s[l++]]--;

      res = max(res,r-l+1);
    }

    return res;
  }
};
```

438.Find All Anagrams in a String<br>
74.Minimum Window Substring<br>

### 两类查找问题
查找有无<br>
- 元素'a'是否存在? set;集合

查找对应关系(键值对应)<br>
- 元素'a'出现了几次? map;字典

### 349.Intersection of Two Arrays
给定两个数组nums,求两个数组的公共元素。<br>
- 如nums1=[1,2,2,1],nums2=[2,2]
- 结果为[2]
- 结果中每个元素只能出现一次
- 出现的顺序可以是任意的

```C++
class Solution {
public:
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

    /*
    set<int> record;
    for(int i=0;i<nums1.size();i++)
      record.insert(nums1[i]);
    */
    set<int> record(nums1.begin(),nums1.end());

    set<int> resultSet;
    for(int i=0;i<nums2.size();i++)
      if(record.find(nums2[i])!=record.end())
        resultSet.insert(nums2[i]);

    /*
    vector<int> resultVector;
    for(set<int>::iterator iter=resultSet.begin();iter!=resultSet.end();iter++)
      resultVector.push_back(*iter);

    return resultVector;
    */
    return vector<int>(resultSet.begin(),resultSet.end());
  }
};
```

### 350.Intersection of Two Arrays
给定两个数组nums,求两个数组的交集。<br>
- 如nums1=[1,2,2,1],nums2=[2,2]
- 结果为[2,2]
- 出现的顺序可以是任意的

```C++
class Solution {
public:
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

    map<int,int> record;
    for(int i=0;i<nums1.size();i++)
      record[nums1[i]]++;

    vector<int> resultVector;
    for(int i=0;i<nums2.size();i++)
      if(record[nums2[i]]>0) {
        resultVector.push_back(nums2[i]);
        record[nums2[i]]--;
      }

    return resultVector;
  }
};
```

### 底层实现
&emsp;&emsp;普通数组实现&emsp;&emsp;顺序数组实现&emsp;&emsp;二分搜索树(平衡)&emsp;&emsp;哈希表<br>
插入&emsp;&emsp;O(1)&emsp;&emsp;O(n)&emsp;&emsp;O(logn)&emsp;&emsp;O(1)<br>
查找&emsp;&emsp;O(n)&emsp;&emsp;O(logn)&emsp;&emsp;O(logn)&emsp;&emsp;O(1)<br>
删除&emsp;&emsp;O(n)&emsp;&emsp;O(n)&emsp;&emsp;O(logn)&emsp;&emsp;O(1)<br>

### 数据的顺序性
- 数据集中的最大值和最小值
- 某个元素的前驱和后继
- 某个元素的floor和ceil
- 某个元素的排位rank
- 选择某个排位的元素select

map和set的底层实现为平衡二叉树<br>
unordered_map和unordered_set的底层实现为哈希表<br>

242.Valid Anagram<br>
202.Happy Number<br>
290.Word Pattern<br>
205.Isomorphic Strings<br>
451.Sort Characters By Frequency<br>

### 1.Two Sum
给出一个整型数组nums。返回这个数组中两个数字的索引值i和j,使得nums[i]+nums[j]等于一个给定的target值。两个索引不能相等。<br>
- 如nums=[2,7,11,15],target=9
- 返回[0,1]

- 暴力解法:O(n^2)<br>
- 排序后,使用双索引对撞:O(nlogn)+O(n)=O(nlogn)<br>
- 查找表。将所有元素放入查找表,之后对于每一个元素a,查找target-a是否存在。

```C++
// 时间复杂度：O(n)
// 空间复杂度：O(n)
class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int,int> record;
    for(int i=0;i<nums.size();i++){

      int complement=target-nums[i];
      if(record.find(complement)!=record.end()) {
        int res[2]={i,record[complement]};
        return vector<int>(res,res+2);
      }
      record[nums[i]]=i;
    }
    throw invalid_argument("the input has no solution");
  }
};
```

15.3Sum<br>
18.4Sum<br>
16.3Sum Closest<br>

### 454.4Sum II
给出四个整型数组A,B,C,D,寻找有多少i,j,k,l的组合,使得A[i]+B[j]+C[k]+D[l]==0.其中,A,B,C,D中均含有相同的元素个数N,且0<=N<=500.<br>
暴力解法:O(n^4) 500^4=62500000000<br>
将D中的元素放入查找表:O(n^3) 500^3=125000000<br>
将C+D的每一种可能放入查找表:O(n^2)<br>
```C++
class Solution {
public:
  int fourSumCount(vector<int>& A,vector<int>& B,vector<int>& C,vector<int>& D) {

   assert(A.size()==B.size() && B.size
   unordered_map<int,int> record;
   for(int i=0;i<C.size();i++)
     for(int j=0;j<D.size();j++)
       record[C[i]+D[j]]++;

   int res=0;
   for(int i=0;i<A.size();i++)
     for(int j=0;j<B.size();j++)
       if(record.find(0-A[i]-B[j])!=record.end())
	 res+=record[0-A[i]-B[j]];
  
   return res; 
  }
}
```
49.Group Anagrams<br>

### 447.Number of Boomerangs
给出一个平面上的n个点,寻找存在多少个由这些点构成的三元组(i,j,k),使得i,j两点的距离等于i,k两点的距离。其中n最多为500,且所有的点坐标的范围在[-10000,10000]之间。<br>
- 如[[0,0],[1,0],[2,0]],则结果为2
- 两个结果为[[1,0],[0,0],[2,0]]和[[1,0],[2,0],[0,0]]
- 暴力解法:O(n^3)
- 观察到i是一个"枢纽",对于每个点i,遍历其余点到i的距离O(n^2)
- 整型是否越界
```C++
class Solution {
public:
  int numberOfBoomerangs(vector<pair<int,int>>& points) {
    int res = 0;
    for(int i=0;i<points.size();i++){
      unordered_map<int,int> record;
      for(int j=0;j<points.size();j++)
	if(j!=i)
          record[dis(points[i],points[j])]++;

      for(unordered_map<int,int>::iterator iter=record.begin();iter!=record.end();iter++)
	if(iter->second>=2)
          res+=(iter->second)*(iter->second-1);
    }
    return res;
  }

private:
  int dis(const pair<int,int> &pa,const pair<int,int> &pb) {
    return (pa.first - pb.first)*(pa.first-pb.first)+(pa.second-pb.second)*(pa.second-pb.second);
  }
};
```
149.Max Points on a Line<br>

### 219.Contains Duplicate II
给出一个整形数组nums和一个整数k,是否存在索引i和j,使得nums[i]==nums[j]且i和j之间的差不超过k<br>
- 暴力解法:O(n^2)
- 滑动窗口+查找表

```C++
// 时间复杂度:O(n)
// 空间复杂度:O(k)
class Solution {
public:
  bool containsNearbyDuplicate(vector<int>& nums,int k) {
    unordered_set<int> record;
    for(int i=0;i<nums.size();i++){
      if(record.find(nums[i])!=record.end())
	return true;
      record.insert(nums[i]);
      // 保持record中最多有k个元素
      if(record.size()==k+1)
	record.erase(nums[i-k]);
    }
    return false;
  }
};
```
217.Contains Duplicate<br>

### 220.Contains Duplicate III
给出一个整型数组nums,是否存在索引i和j,使得nums[i]和nums[j]之间的差别不超过给定的整数t,且i和j之间的差别不超过给定的整数k。<br>
```C++
// 时间复杂度:O(n)
// 空间复杂度:O(k)
class Solution {
public:
  bool containsNearbyAlmostDuplicate(vector<int>& nums,int k,int t) {
    set<long long> record;
    for(int i=0;i<nums.size();i++){
      //if(record.find(nums[i])!=record.end())
	//return true;
      if(record.lower_bound((long long)nums[i]-(long long)t)!=record.end() && *record.lower_bound((long long)nums[i]-(long long)t)<=(long long)nums[i]+(long long)t)
	return true;
      record.insert(nums[i]);
      // 保持record中最多有k个元素
      if(record.size()==k+1)
	record.erase(nums[i-k]);
    }
    return false;
  }
};
```
