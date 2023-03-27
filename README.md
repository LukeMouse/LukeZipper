# 功能说明

本库对zlib、minizip、zipper和filesystem库进行了整合，实现了简单的接口实现将文件夹添加到zip文件的功能，本打算支持的VS最低版本为VS2013，但是由于该版本对C++11支持不完整，导致无法编译通过，因此当前版本最低支持的VS为VS2015。目前测试通过的最低版本gcc为7.3.0。

将文件夹压缩到zip包中，可以设置密码，代码压缩示例如下：

```c++
#ifdef WIN32
    zipper::Zipper zipFile("D:/111.zip", "lukeMouse");
    std::string folderPath = "F:\\LukeGit\\LukeLib\\ThirdTools\\LukeZipper";
#else
    zipper::Zipper zipFile("/home/lukemouse/Desktop/111.zip", "lukeMouse");
    std::string folderPath = "/home/lukemouse/Desktop/LukeZipper/zipper";
#endif
    zipFile.add(folderPath);
    zipFile.close();
    std::cout << "Zip finished!" << std::endl;
```

对应的解压示例代码如下：

```C++
#ifdef WIN32
    zipper::Unzipper unZip("D:/111.zip", "lukeMouse");
    unZip.extractAll("D:/lukeStudy");
#else
    zipper::Unzipper unZip("/home/lukemouse/Desktop/111.zip", "lukeMouse");
    unZip.extractAll("/home/lukemouse/Desktop/lukeStudy");
#endif
    unZip.close();
    std::cout << "Unzip finished!" << std::endl;
```



# 如何编译

工程使用mpc【ACE跨平台源码[The ADAPTIVE Communication Environment (ACE) (vanderbilt.edu)](https://www.dre.vanderbilt.edu/~schmidt/ACE.html)管理工具，比CMakeList简单易用】进行管理，通过脚本生成对应工程，目前只支持VS系列和GNU Makefile，从[LukeMouse/MPC (gitee.com)](https://gitee.com/lukemouse/MPC)下载当前版本的MPC，下载到一个不含中文的路径下，Windows下执行里面的SetMPCEnv.bat，Linux下创建环境变量MPC_ROOT，其值设置为MPC所在路径，并将这个路径设置到path环境变量下。

## Windows下编译

Windows下需要安装ActivePerl官网地址为： [Download & Install Perl - ActiveState](https://www.activestate.com/products/perl/)，执行

GenSln.bat生成VS工程的sln，可以执行mwc.pl --help查看如何修改VS版本。GenScript.bat可以生成minGW的Makefile，注意修改里面的gnumake路径。

## Linux下编译

使用console工具切换到源码所在路径，执行：mwc.pl -type make -relative SLN_ROOT=$(cd  $(dirname $0) && pwd) 即可生成Makefile