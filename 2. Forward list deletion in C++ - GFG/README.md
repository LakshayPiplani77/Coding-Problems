# 2. Forward list deletion in C++
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a forward list of size <strong>N</strong>. Complete below functions depending on the type of erasable query.<br>
<strong>1. removeFromFront():</strong> this function should remove from the front of the list.<br>
<strong>2. removeAfter(X):</strong> this function should remove the element after specified position <strong>X </strong>mention in the argument<br>
<strong>3. removeFromInRange(start, end):</strong> this function should remove the elements present within the range <strong>start</strong>(excluded) and <strong>end&nbsp; </strong>given in argument.<br>
<strong>4. removeAll():</strong> this function should remove from all the elements from list.</span></p>

<p><span style="font-size:18px"><strong>InputFormat:</strong><br>
The input line contains <strong>T</strong>, denoting the number of testcases. Each testcase contains 3 lines. First line contains size of list. Second line contains elements of the list separated by space. Third line contains type of erasable query and value of X, start and end depending type of erasble query separated by space.</span></p>

<p><span style="font-size:18px"><strong>OutputFormat:</strong><br>
For each testcase print the elements of&nbsp;modified list separated by space. If the list is empty then print "<strong>Empty</strong>".</span></p>

<p><span style="font-size:18px"><strong>User task:</strong> Since this is a functional problem, you need not to worry about input. You just have to complete the given functions.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt; = T &lt;= 10<br>
1 &lt;= N &lt;= 100</span></p>

<p><span style="font-size:18px"><strong>SampleInput:</strong><br>
3<br>
5<br>
1 2 3 4 5<br>
1<br>
4<br>
4 5 6 7<br>
2 3<br>
5<br>
4 5 6 7 8<br>
3 2 4</span></p>

<p><span style="font-size:18px"><strong>SampleOutput:</strong><br>
4 3 2 1&nbsp;<br>
7 6 5&nbsp;<br>
8 7 5 4</span></p>

<p><span style="font-size:18px"><strong>Explanation:<br>
Testcase 1:</strong> the type of query is 1, thus after removing front element from forward list. The elements in list are as such 4 3 2 1.<br>
<strong>Testcase 2:</strong> the type of query is 2 and&nbsp;we have to remove the element after 3 which is 4.<br>
<strong>Testcase 3:</strong> the typr of query is 3, and we have to erase elements in between 2nd and 4th position of list. Thus after removal&nbsp;</span></p>
 <p></p>
            </div>