#pragma once
#include <string>

class UI
{
public:
    static void DisplayHeader(const std::string& text, bool pad = false);
    static void DisplayDivider();
    static void DisplayProgressBar(double pointsEarned, double pointsTotal, int size = 20, int gameMode = 0);
    static void DisplayScore(int received, int pointsPer, bool final = false);
    static void DisplayScore(double received, double pointsPer, bool final = false);
    static void DisplayTryPass(int passNumber, const std::string& input, const std::string& expected, const std::string& received, int inputPad = 0, int outputPad = 0);

private:
    static void DisplayPassFail(bool pass);
    static std::string PadString(const std::string& text, int pad);
    static void WriteYellow(const std::string& text);
};

