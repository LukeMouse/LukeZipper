
#include <Zipper/Zipper.hpp>
#include <iostream>
#include <string>

int main()
{
    zipper::Zipper zipFile("D:/111.zip", "lukeMouse");
    std::string folderPath = "F:\\LukeGit\\LukeLib\\ThirdTools\\LukeZipper";
    zipFile.add(folderPath);
    zipFile.close();
    getchar();
}



