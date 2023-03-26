# 功能说明

将文件夹压缩到zip包中，可以设置密码

```c++
zipper::Zipper zipFile("D:/111.zip", "lukeMouse");
std::string folderPath = "F:\\LukeGit\\LukeLib\\ThirdTools\\LukeZipper";
zipFile.add(folderPath);
zipFile.close();
```

# 如何编译

工程使用mpc【ACE跨平台源码[The ADAPTIVE Communication Environment (ACE) (vanderbilt.edu)](https://www.dre.vanderbilt.edu/~schmidt/ACE.html)管理工具，比CMakeList简单易用】进行管理，通过脚本生成对应工程，目前只支持VS系列和GNU Makefile，从[LukeMouse/MPC (gitee.com)](https://gitee.com/lukemouse/MPC)下载当前版本的MPC，下载到一个不含中文的路径下，Windows下执行里面的SetMPCEnv.bat，Linux下创建环境变量MPC_ROOT，其值设置为MPC所在路径，并将这个路径设置到path环境变量下。

## Windows下编译

Windows下需要安装ActivePerl官网地址为： [Download & Install Perl - ActiveState](https://www.activestate.com/products/perl/)，执行

GenSln.bat生成VS工程的sln，可以执行mwc.pl --help查看如何修改VS版本。GenScript.bat可以生成minGW的Makefile，注意修改里面的gnumake路径。

## Linux下编译

使用console工具切换到源码所在路径，执行：mwc.pl -type make -relative SLN_ROOT=$(cd  $(dirname $0) && pwd) 即可生成Makefile