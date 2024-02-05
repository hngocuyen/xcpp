# ngocuyencoder 
***XCPP***

xcpp is quick and efficient compilation and execution shortcut for linux 

## Building xcpp
* FOR LINUX PLATFORM
  * UBUNTU/DEBIAN:

    | Permission| Setup |
    | --- | --- |
    | `sudo` | sudo apt-get update && sudo apt-get install g++ && sudo install git|
    | `sudo` | git clone https://github.com/hngocuyen/xcpp && cd xcpp & g++ -o xcpp xcpp.cpp |
    | `sudo` | sudo chmod +x xcpp && sudo mv xcpp $PREFIX/bin |

* Bug?
  * TERMUX NOT SUPPORT
  * IF YOU USED OTHER LINUX OPERATING SYSTEM, REPLACE "apt-get" TO INSTALL [apt-get => yum (centos)] 
  * IT IS NOT INTERPRETER , ONLY SHORTCUT

## Usage
**To run xcpp**
`xcpp [PATH TO CPP FILE]`
<div align="center">
  <img src="https://github.com/hngocuyen/xcpp/blob/main/run.png" alt="Example">
</div>
