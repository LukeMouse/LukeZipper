
#include <Zipper/Zipper.hpp>
#include <Zipper/Unzipper.hpp>
#include <iostream>
#include <string>

int main()
{
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

#ifdef WIN32
    zipper::Unzipper unZip("D:/111.zip", "lukeMouse");
    unZip.extractAll("D:/lukeStudy");
#else
    zipper::Unzipper unZip("/home/lukemouse/Desktop/111.zip", "lukeMouse");
    unZip.extractAll("/home/lukemouse/Desktop/lukeStudy");
#endif
    unZip.close();
    std::cout << "Unzip finished!" << std::endl;
    getchar();
}



