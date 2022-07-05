#include  <stdio.h>

// 注意：如果是C++文件请用extern "C" 包裹，否则编译到时方法名会被加上指纹，JS调用的话就要根据指纹规则调用了
extern  "C" {
    int add(int a, int b) {
        return a + b;
    }
}
