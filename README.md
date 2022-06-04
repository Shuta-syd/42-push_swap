# push_swap

### Summary

このプロジェクトでは、限られた命令で、できるだけ少ない動作回数で、スタック上のデータを並べ替えさせます。成功するためには、様々な種類のアルゴリズムを操作し、最適化されたデータソートのために（多くの中から）最も適切なソリューションを選択する必要があります。

This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various
types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.

## The rules

aとbという名前の2つのスタックを持っています。

- はじめに
    - スタックaは複製不可能な負数および/または正数のランダムな量を含む．
    - スタックbは空である。
- 目標は、スタックaに数字を昇順に並べ替えることである。そのために、あなたは自由に次の操作を行うことができる。

**sa(swap a):** 

スタック aの先頭の2要素を交換する。
要素が 1 つしかない場合、または要素がない場合は何もしない。

**sb(swap b):** 

スタック bの先頭の2要素を交換する。
要素が1つしかない場合、または要素がない場合は何もしない。

**ss:**

saとsbを同時に行う

**pa(push a):**

 **b**の先頭の要素を取り、aの先頭に置く。bが空の場合は何もしない。

**pb(push b):**

 **a**の先頭の要素を取り、bの先頭に置く。aが空の場合は何もしない。

**ra (rotate a):** 

スタック a のすべての要素を 1 ずつ上にシフトする。最初の要素が最後の要素になる。

**rb (rotate b):** 

スタック b の全要素を 1 ずつ上に移動させる．最初の要素が最後の要素になる。

**rr :** 

ra と rb を同時に実行

**rra (reverse rotate a):**

スタック a の全要素を 1 つ下にシフトする。最後の要素が最初の要素になる。

**rrb (reverse rotate b):**

 スタック b のすべての要素を 1 つ下にシフトします。最後の要素が最初の要素になる．
**rrr :**

rra と rrb を同時に実行

### Overview

| Program name | push_swap |
| --- | --- |
| Turn in files | Makefile, *.h *.c |
| Arguments | stack a: A list of integers |
| External functs | read, write, malloc, free, exit, ft_printf, libft |
| Description | Sort stacks |

あなたのプロジェクトは、以下のルールに従わなければなりません。

- あなたのソースファイルをコンパイルする Makefile を提出しなければなりません。Makefile は
再リンクしてはいけません。
    
    You have to turn in a Makefile which will compile your source files. It must not relink
    
- グローバル変数は禁止されています。
    
    Global variables are forbidden
    
- あなたは push_swap という名前のプログラムを書かなければならない。
整数のリストとしてフォーマットされる。最初の引数はスタックの一番上にあるべきである。
    
    You have to write a program named push_swap that takes as an argument the stack a formatted as a list of integers. The first argument should be at the top of the stack (be careful about the order)
    
- このプログラムはスタックa を表示し、最も小さい数値が先頭になるようにしなければならない。
    
    The program must display the smallest list of instructions possible to sort the stack a, the smallest number being at the top.
    
- 命令は’ \n’ で区切られ、それ以外には何もないこと。
    
    Instructions must be separated by a ’\n’ and nothing else.
    
- 目標は、可能な限り少ない操作回数でスタックをソートすることである。評価プロセスでは、プログラムが検出した命令の数が、許容される最大演算回数と比較されます。もし、あなたの
プログラムがより長いリストを表示するか、数字が適切にソートされていない場合、あなたの成績は0となります。
    
    The goal is to sort the stack with the lowest possible number of operations. During the evaluation process, the number of instructions found by your program will be compared against a limit: the maximum number of operations tolerated. If your program either displays a longer list or if the numbers aren’t sorted properly, your grade will be 0.
    
- パラメータが指定されていない場合、プログラムは何も表示せず、プロンプトを返さなければなりません。
    
    If no parameters are specified, the program must not display anything and give the prompt back.
    
- エラーの場合は、標準エラーに「Error\n」と表示しなければなりません。エラーとは、例えば、引数が整数より大きいを超える場合や、重複している場合などです。
    
    In case of error, it must display "Error" followed by a ’\n’ on the standard error. Errors include for example: some arguments aren’t integers, some arguments are bigger than an integer and/or there are duplicates.
    
    ### BONUS
    
    チェッカープログラムのおかげで、push_swap プログラムが生成した命令リストが、実際にスタックを正しくソートしているかどうかをチェックすることができます。
    
    Thanks to the checker program, you will be able to check whether the list of instructions generated by the push_swap program actually sorts the stack properly.
    
    | Program name | checker |
    | --- | --- |
    | Turn in files | *.h,  *.c |
    | Makefile | bonus |
    | Arguments | stack a: A list of integers |
    | Description | Execute the sorting instructions |
    
    checker という名前のプログラムを書き、引数として整数のリストとしてフォーマットされたスタックを受け取る。最初の引数はスタックの一番上にあるべきである(順序に注意)。引数が与えられない場合、プログラムは停止し、何も表示しない。
    
    Write a program named checker that takes as an argument the stack a formatted as a list of integers. The first argument should be at the top of the stack (be careful about the order). If no argument is given, it stops and displays nothing.
    
    その後、待機して標準入力の命令を読み込みます。各命令の後には '\n'が付きます。すべての命令が読み込まれたら、引数で受け取ったスタック上の命令を実行しなければなりません。
    It will then wait and read instructions on the standard input, each instruction will be followed by ’\n’. Once all the instructions have been read, the program has to execute them on the stack received as an argument.
    
    これらの命令を実行した後、スタックaが実際にソートされ、スタックbが空であれば、プログラムは標準出力に「OK」と表示し、その後に「 \n 」と表示しなければなりません。
    If after executing those instructions, the stack a is actually sorted and the stack b is empty, then the program must display "OK" followed by a ’\n’ on the standard output.
    
    それ以外の場合は、"KO "と"\n"を標準出力に表示すること
    In every other case, it must display "KO" followed by a ’\n’ on the standard output.
    
    エラーの場合は、標準エラーに "Error "と"\n"を表示しなければなりません。エラーとは、例えば、引数が整数でない、引数が整数より大きい、重複している、命令が存在しない、書式が正しくないなどです。
    
    In case of error, you must display "Error" followed by a ’\n’ on the standard error. Errors include for example: some arguments are not integers, some arguments are bigger than an integer, there are duplicates, an instruction doesn’t exist and/or is incorrectly formatted.
