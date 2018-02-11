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

