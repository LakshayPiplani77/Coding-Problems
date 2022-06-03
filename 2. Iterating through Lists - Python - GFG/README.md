# 2. Iterating through Lists - Python
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You have been familiar with <strong>Lists </strong>in Python. Diving deep will be more interesting in Python Lists. Let's have a look to <strong>iterating </strong>over a list.</span></p>

<p><span style="font-size:18px">You can use for and while loop to iterate through list elements as below:</span></p>

<p><span style="font-size:18px"><strong>For loop:</strong> </span></p>

<pre><span style="font-size:18px">for i in range(1, len(arr), 1): </span>
<span style="font-size:18px">       print (arr[i])</span></pre>

<p><strong><span style="font-size:18px">OR</span></strong></p>

<p><span style="font-size:18px"><strong>While Loop:</strong></span><span style="font-size:18px"> </span></p>

<pre><span style="font-size:18px">while i &lt; len(arr): </span>
<span style="font-size:18px">       print (arr[i]) i += 1</span></pre>

<p><strong><span style="font-size:18px">OR</span></strong></p>

<p><span style="font-size:18px"><strong>For each loop:</strong></span></p>

<pre><span style="font-size:18px">for x in arr: </span>
<span style="font-size:18px">       print (x)</span></pre>

<p><span style="font-size:18px">See more on loops <a href="https://www.geeksforgeeks.org/loops-in-python/" target="_blank">here</a>.</span></p>

<p><span style="font-size:18px">Now, let's solve a question. Given a list <strong>arr</strong>&nbsp;of integers, the task is to print all elements till <strong>half </strong>of the length of list. Also, after half, print every <strong>third </strong>element of list (including the element just after half, if exists).</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span><span style="font-size:18px"><strong> </strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>  </span>
<span style="font-size:18px">N = 7 </span>
<span style="font-size:18px">arr = [1, 2, 3, 4, 5, 6, 7]</span>
<span style="font-size:18px"><strong>Output:</strong> </span>
<span style="font-size:18px">1 2 3 4 7</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">1 2 3 is printed as it is till half
the length of list. </span><span style="font-size:18px">After this, loop
for jump of three is started from 4, </span>
<span style="font-size:18px">so 4 is the first element and next 
element is 7</span> <span style="font-size:18px">(3rd index from 4).</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Your task is to complete <strong>print_elements()</strong>, to print elements from list in required fashion.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
6 &lt;= N (length of arr) &lt;= 10<sup>4</sup><br>
1 &lt;= arr[i] &lt;= 10<sup>6</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>