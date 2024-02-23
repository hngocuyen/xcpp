# ngocuyencoder 
***XCPP***

xcpp is auto build and run for linux

## Building xcpp
* FOR LINUX PLATFORM
  * UBUNTU/DEBIAN:

    | Permission| Setup |
    | --- | --- |
    | `sudo` | sudo apt-get update -y && sudo apt-get install g++ -y && sudo apt install git -y |
    | `sudo` | git clone https://github.com/hngocuyen/xcpp && cd xcpp & g++ -o xcpp xcpp.cpp |
    | `sudo` | sudo chmod +x xcpp && sudo mv xcpp $PREFIX/bin |

* Bug?
  * IF YOU USED OTHER LINUX OPERATING SYSTEM, REPLACE "apt-get" TO INSTALL [apt-get => yum (centos)] 
  * IT IS NOT INTERPRETER , ONLY SHORTCUT

# Usage
**To run xcpp**
```sh
xcpp [PATH TO CPP FILE]
```

# Example
```sh
------------------------------------
#include <iostream>
int main() {
    std::cout << "hello world";
    return 0;
}
------------------------------------                                                                                                                                                                                                       
┌──(kali㉿ngocuyencoder)-[~/Desktop/C]
└─$ xcpp hello.cpp
hello world

------------------------------------
#include <stdio.h>
int main() {
    printf << "hello world";
    return 0;
}
------------------------------------                                                                                                                                                                                                       
┌──(kali㉿ngocuyencoder)-[~/Desktop/C]
└─$ xcpp hello.c
hello world                          
```
