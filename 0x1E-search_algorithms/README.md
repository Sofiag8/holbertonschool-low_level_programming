<h1 class="gap">Project 0x1E. C - Search Algorithms</h1>

<h2>Learning Objectives</h2>
h3>General</h3>

<ul>
<li>What is a search algorithm</li>
<li>What is a linear search</li>
<li>What is a binary search</li>
<li>What is the best search algorithm to use depending on your needs</li>
</ul>

<h2>Requirements</h2>


<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 14.04 LTS</li>
<li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> and <code>-pedantic</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are only allowed to use the <code>printf</code> function of the standard library. Any call to another function like <code>strdup</code>, <code>malloc</code>, &hellip; is forbidden.</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>search_algos.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<p>You will be asked to write files containing big O notations. Please use this format:</p>

<ul>
<li><code>O(1)</code></li>
<li><code>O(n)</code></li>
<li><code>O(n!)</code></li>
<li>n*m -&gt; <code>O(nm)</code></li>
<li>n square -&gt; <code>O(n^2)</code></li>
<li>sqrt n -&gt; <code>O(sqrt(n))</code></li>
<li>log(n) -&gt; <code>O(log(n))</code></li>
<li>n * log(n) -&gt; <code>O(nlog(n))</code></li>
<li>&hellip;</li>
</ul>


<hr class="gap">
<h2 class="gap">Tasks</h2>

  <h4 class="task">
    0. Linear search
</h4>
<p>Write a function that searches for a value in an array of integers using the <a href="/rltoken/60Mr-aRkqqgLCHEF9HZ64A" title="Linear search algorithm" target="_blank">Linear search algorithm</a></p>

<ul>
<li>Prototype : <code>int linear_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the first index where <code>value</code> is located</li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
</ul>


 <h4 class="task">
    1. Binary search
</h4>
<p>Write a function that searches for a value in a sorted array of integers using the <a href="/rltoken/WyWx1D9mcUcAwpEA2ifkeQ" title="Binary search algorithm" target="_blank">Binary search algorithm</a></p>

<ul>
<li>Prototype : <code>int binary_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>You can assume that <code>value</code> won&rsquo;t appear more than once in <code>array</code></li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)</li>
</ul>

 <h4 class="task">
    2. Big O #0
</h4>
<p>What is the <code>time complexity</code> (worst case) of a linear search in an array of size <code>n</code>?</p>


<h4 class="task">
    3. Big O #1
</h4>
<p>What is the <code>space complexity</code> (worst case) of an iterative linear search algorithm in an array of size <code>n</code>?</p>

  <h4 class="task">
    4. Big O #2
</h4>
 <p>What is the <code>time complexity</code> (worst case) of a binary search in an array of size <code>n</code>?</p>

  <h4 class="task">
    5. Big O #3
</h4>
<p>What is the <code>space complexity</code> (worst case) of a binary search in an array of size <code>n</code>?</p>

 <h4 class="task">
    6. Big O #4
</h4>
 <p>What is the space complexity of this function / algorithm?</p>

<pre><code>int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i &lt; n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
</code></pre>