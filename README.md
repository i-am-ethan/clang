
gcc func.c -o func.out

プロプロセッサの動作確認をするために
gcc -E -P -C preprocessor.c

-E: includeしたものを表示する


これでethan.cも読み込んでいることがわかる。<br>
`gcc main.c -E -P -C -o main.out`