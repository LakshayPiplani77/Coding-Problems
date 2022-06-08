# 4. Functions in Lists - Python
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Let's start diving into the <strong>inbuilt functions </strong>in Python List. Below are some functions with their working:</span></p>

<p><span style="font-size:18px"><strong>a.</strong> list.<strong>append</strong>(element) : adds a single element to the end of the list. Doesn't return new list, modifies the original.<br>
<strong>b.</strong> list.<strong>insert</strong>(index, element) : inserts the element at the given index, shifting elements to the right.<br>
<strong>c.</strong> list.<strong>extend</strong>(list2) : adds the element in list2 to the end of the list. You can also use '+' to extend.<br>
<strong>d.</strong> list.<strong>index</strong>(element) : searches for the given element from the start of the list and returns its index.<br>
<strong>e.</strong> list.<strong>remove</strong>(element) : searches for the first instance of the given element and removes it.<br>
<strong>f.</strong> list.<strong>sort</strong>() : sorts the list in place. (does not return anything)<br>
<strong>g.</strong> list.<strong>reverse</strong>() : reverses the list in place. (does not return anything)<br>
<strong>h.</strong> list.<strong>pop</strong>(index) : removes and returns the element at the given index, if index not found, returns the last element<br>
<strong>i.</strong> string.<strong>join</strong>(list) : function to join the list elements using string as delimiter.</span></p>

<p><span style="font-size:18px">Now, let's try to solve a question. Given a <strong>list </strong>of <strong>string</strong>, the task is to perform <strong>Q</strong> operations on it.</span></p>

<p><br>
<span style="font-size:18px"><strong>insert_arr()</strong>: insert '<strong>element</strong>' at index '<strong>index</strong>'<br>
<strong>pop_arr()</strong>: pop from index '<strong>index</strong>'<br>
<strong>rev_arr()</strong>: reverse the list<br>
<strong>sort_arr()</strong>: sort the list<br>
<strong>join_list()</strong>: join and print the elements of the list using string as delimiter.</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> </span>
<span style="font-size:18px">N = 5, Q = 3 </span>
<span style="font-size:18px">arr = [1, 2, 3, 4, 5]</span>
<span style="font-size:18px">Q1 = insert 0 at index 0</span>
<span style="font-size:18px">Q2 = reverse array</span>
<span style="font-size:18px">Q3 = print </span><span style="font-size:18px">the elements with separator '#'</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">5#4#3#2#1#0 </span>
<span style="font-size:18px">5 4 3 2 1 0</span>
<span style="font-size:18px"><strong>Explanation: </strong></span>
<span style="font-size:18px">First operation to be performed is to 
insert 0, </span><span style="font-size:18px">now list is as 1, 2, 3, 4, 5, 0.
Now, reversing </span><span style="font-size:18px">the </span><span style="font-size:18px">array we have 
5, 4, 3, 2, 1, 0. After this, </span><span style="font-size:18px">printing </span><span style="font-size:18px">the
element with separator '#', </span><span style="font-size:18px">5#4#3#2#1#0.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Your task is to complete different available functions <strong>insert_arr(), pop_arr(), rev_arr(), sort_arr(), and join_list(). </strong>to perform different operations on the given list.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N, arr[i] &lt;= 10<sup>4</sup><br>
1 &lt;= Q &lt;= 10<sup>2</sup></span></p>

<p>&nbsp;</p>

<p><iframe frameborder="0" height="315" src="https://www.youtube.com/embed/DHyul4IgRdE" width="560" style="max-width: 100%;"></iframe><iframe frameborder="0" height="315" src="https://www.youtube.com/embed/1Ej7ry6jacg" width="560" style="max-width: 100%;"></iframe></p>
 <p></p>
            </div>