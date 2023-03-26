
#include <Zipper/Zipper.hpp>
#include <Zipper/Unzipper.hpp>
#include <iostream>
#include <string>

int main()
{
    //zipper::Zipper zipFile("D:/111.zip", "lukeMouse");
    //std::string folderPath = "F:\\LukeGit\\LukeLib\\ThirdTools\\LukeZipper";
    //zipFile.add(folderPath);
    //zipFile.close();
    //std::cout << "Zip finished!" << std::endl;

    zipper::Unzipper unZip("D:/111.zip", "lukeMouse");
    unZip.extractAll("D:/lukeStudy");
    unZip.close();
    std::cout << "Unzip finished!" << std::endl;
    getchar();
}



