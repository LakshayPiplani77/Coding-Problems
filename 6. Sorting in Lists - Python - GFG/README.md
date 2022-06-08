# 6. Sorting in Lists - Python
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You have been familiar with Lists in Python and it's various inbuilt functions including sort. Could you think of sorting a list of tuple according to your requirement. We can make this possible through custom sort in Python.</span></p>

<p><span style="font-size:18px"><strong>Syntax:</strong></span></p>

<pre><span style="font-size:18px">sorted(arr, key = compareSort)</span></pre>

<p><span style="font-size:18px">arr is the list you want to sort, and compareSort is the function in which you need to write your comparator.</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px">arr = [('a', 1), ('b', 2), ('c', 3),
       ('d', 4), (''e', 4)] </span></pre>

<p><span style="font-size:18px">we want to sort this list according to second value of tuple and if second value is same, then sort according to first value, then just mention the comparator as key in sort function and define that function with return value as the key according to which you want to sort the list.</span></p>

<p><span style="font-size:18px">Let's implement this out through a question. Given a list of tuples comprising name and marks of students. The task is to sort the students according to the marks, but wherever same marks is encountered, sort the two according to the name.</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span><span style="font-size:18px"><strong> </strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> </span>
<span style="font-size:18px">N = 5 </span>
<span style="font-size:18px">arr = [[a, 100], [b, 100], [c, 300], 
[aad, 100], [abc, 100]]</span>
<span style="font-size:18px"><strong>Output:</strong> </span>
<span style="font-size:18px">a 100 aad 100 abc 100 b 100 c 300 </span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">First, list is sorted according to marks, </span>
<span style="font-size:18px">and when marks are equal, then sorted </span>
<span style="font-size:18px">according to the name.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Your&nbsp;task is to complete the comparator function&nbsp;<strong>customSort(), </strong>that takes <strong>arr </strong>as input,&nbsp;which compares as required and returns the required value.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>4</sup><br>
1 &lt;= marks &lt;= 10<sup>4</sup></span></p>
 <p></p>
            </div>