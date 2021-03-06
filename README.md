English | [中文](/README_cn.md)    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Bwar's blog](https://www.bwar.tech).
# NebulaBootstrap: a distributed systems solution build on nebula.
[![Author](https://img.shields.io/badge/author-@Bwar-blue.svg?style=flat)](cqc@vip.qq.com)  ![Platform](https://img.shields.io/badge/platform-Linux-green.svg?style=flat) [![License](https://img.shields.io/github/license/mashape/apistatus.svg)](LICENSE)<br/>

1. [Overview](#Overview)
2. [License](#License)
3. [Getting start](#GettingStart)
4. [Documentation](#Documentation)
5. [Depend on](#DependOn)
6. [Todo list](#TODO)
7. [Change log](#ChangeLog)

<a name="Overview"></a>
## Overview 

NebulaBootstrap provides service for developers to quickly build a distributed systems (including configuration management, service discovery, routing, load balancing, leadership election, distributed sessions, cluster state and so on). 
![nebula_cluster](image/nebula_cluster.png)

<a name="License"></a>
## License 

MIT License

>  Copyright (c) 2018 Bwar
>
>  Permission is hereby granted, free of charge, to any person obtaining a copy
>  of this software and associated documentation files (the "Software"), to deal
>  in the Software without restriction, including without limitation the rights
>  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
>  copies of the Software, and to permit persons to whom the Software is
>  furnished to do so, subject to the following conditions:
>
>  The above copyright notice and this permission notice shall be included in
>  all copies or substantial portions of the Software.
>
>  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
>  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
>  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
>  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
>  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
>  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
>  THE SOFTWARE.

<a name="GettingStart"></a>
## Getting start
   NebulaBootstrap was consist of [NebulaBeacon](https://github.com/Bwar/NebulaBeacon), [NebulaInterface](https://github.com/Bwar/NebulaHttp), [NebulaAccess](https://github.com/Bwar/NebulaAccess), [NebulaLogic](https://github.com/Bwar/NebulaLogic), NebulaMydis, NebulaDbAgent and [NebulaLogger](https://github.com/Bwar/NebulaLogger), and they were builded passing with gcc6.4 on centos6.5(upgrade binutils to 2.22 or later) and centos7.4.  
   NebulaBootstrap provides automate building and deploying.
   
   automate building and deploying follow these step：
   1. wget https://github.com/Bwar/NebulaBootstrap/archive/master.zip
   2. unzip master.zip; rm master.zip; mv NebulaBootstrap-master NebulaBootstrap
   3. cd NebulaBootstrap
   4. chmod u+x deploy.sh
   5. ./deploy.sh
   
   then bootstrap:
   1. ./configure.sh
   2. ./startup.sh

<a name="Documentation"></a>
## Documentation 
   The complete documentation for NebulaBootstrap is coming...
    
<a name="DependOn"></a>
## Depend on 
   * [protobuf](https://github.com/google/protobuf)
   * [libev](https://github.com/kindy/libev)
   * [hiredis](https://github.com/redis/hiredis)
   * [crypto++](http://www.cryptopp.com)
   * [Nebula](https://github.com/Bwar/Nebula) 

<a name="TODO"></a>
## Todo list 
   - June 2018:    NebulaLogger online, NebulaDbAgent online.
   - July 2018:    NebulaAccess online, NebulaStorage online.
   - Auguest 2018: NebulaBootstrap documentation.

<a name="ChangeLog"></a>
## Change log 
#### v0.3
   - the first runable version

<br/>

