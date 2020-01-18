# Comp
在程序设计竞赛中对拍代码的工具，脚本支持 Linux

文件解释 ：

- duipai.cpp 对拍程序用到的程序，可以按照自己情况更改路径并执行 `g++ duipai.cpp -o a.out` 生成可执行文件
- a.out 对拍程序用到的可执行文件
- duipai.sh 启动对拍脚本
- my 需要对拍的程序的可执行文件
- my.cpp 需要对拍的源程序（请使用 stdin 和 stdout）
- rand.py 生成随机数据的脚本
- std 正解或暴力的可执行文件
- std.cpp 正解或暴力的源程序（请使用 stdin 和 stdout）



操作方法：

1. 复制源文件到 `my.cpp`
2. 复制正解到 `std.cpp`
3. 编写 `rand.py` 生成正确的数据
4. 执行 `./duipai.sh` 进行对拍即可
5. 如果产生错误想看错误数据在 `test/data.in` ，`test/my.out` 是错误输出，`test/std.out` 是正确输出

