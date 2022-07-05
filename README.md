
mkdir out

## hello world （C、HTML）

emcc hello.c -s WASM=1 -o out/hello.html
http-server
http://192.168.31.212:8085/out/hello.html


## Hello World（C、Node）

emcc ./hello.c -o out/hello.js
node out/hello.js


## Hello World（C++、Node）

emcc ./hello.cpp -o out/hello.js
node out/hello.js


## C 导出模块，Node 调用

```
emcc -s EXPORTED_FUNCTIONS="['_sayHi', '_add']" example6.c -o out/example6.js
node example6-test.js
```

```
emcc example7.c -o out/example7.js
node example6-test.js
```

## C++ 导出模块，Node 调用

```
emcc -s EXPORTED_FUNCTIONS="['_add']" add.cpp -o out/add.js
node add-test.js
```


## C 函数输出为 JavaScript 模块

emcc -s EXPORTED_FUNCTIONS="['_SquareVal']" example5.cc -o out/example5.js
打开 example5-test.html

没成功

========



emcc fib.c -s EXPORTED_FUNCTIONS='["_fib"]' -O3 -o out/fib-emcc.wasm
没成功


===

emcc add.c -s EXPORTED_FUNCTIONS='["_add"]' -o add.wasm
emcc add.c -s EXPORTED_FUNCTIONS='["_add"]' -o add.js
没成功

====

emcc -s MODULARIZE=1 add.cc -o add.js // 导出返回promise的函数

emcc -s MODULARIZE=1 add.cpp -o add.js


功能
    * 完成 hello world

* 参考
    * https://emscripten.org/docs/getting_started/Tutorial.html



## C++ 接口暴露有两种方法

* 加入 emscripten.h 和 EMSCRIPTEN_KEEPALIVE
* 执行编译指令 emcc 时加参数：-s EXPORTED_FUNCTIONS= "['_add']"
