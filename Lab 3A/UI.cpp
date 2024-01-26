#include "UI.h"
#include "windows.h"
#include <iostream>

void UI::DisplayHeader(const std::string& text, bool pad)
{
    std::string prefix = "   ";
    std::string suffix = (pad) ? "     " : "      ";

    HANDLE consoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
    WORD backgroundBlue = BACKGROUND_BLUE;
    WORD foregroundWhite = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY;

    //std::wcout << L"╔═══════════════╗\n";
    //std::wcout << L"║";
    std::cout << "===============" << std::endl;
    SetConsoleTextAttribute(consoleColor, backgroundBlue | foregroundWhite);
    std::cout << prefix << text << suffix;
    SetConsoleTextAttribute(consoleColor, 0 | foregroundWhite);
    std::cout << std::endl << "===============" << std::endl;
    //std::wcout << L"║\n";
    //std::wcout << L"╚═══════════════╝\n";
}

void UI::DisplayDivider()
{
    std::cout << "\n--------------------------------------------------------\n";
}

void UI::DisplayProgressBar(double pointsEarned, double pointsTotal, int size, int gameMode)
{
    std::cout << '\n';

    //ProgressBar pb(size, gameMode);
    //pb.Show();
    //pb.Update(pointsEarned, pointsTotal);
}

void UI::DisplayScore(int received, int pointsPer, bool final)
{
    if (final)
    {
        std::cout << "Total points: " << received << " of 100\n";
        std::cout << "\n\nPress any key to exit...";
        std::cin.ignore();
    }
    else
    {
        std::cout << "Points: " << received << " of " << pointsPer * 5 << '\n';
    }
}

void UI::DisplayScore(double received, double pointsPer, bool final)
{
    if (final)
    {
        std::cout << "Total points: " << received << " of 100\n";
        std::cout << "\n\nPress any key to exit...";
        std::cin.ignore();
    }
    else
    {
        std::cout << "Points: " << received << " of " << pointsPer * 5 << '\n';
    }
}

void UI::DisplayTryPass(int passNumber, const std::string& input, const std::string& expected, const std::string& received, int inputPad, int outputPad)
{
    std::cout << " Pass " << passNumber << " of 5: ";

    DisplayPassFail(expected == received);

    // Input
    std::cout << "Input: ";
    WriteYellow(PadString(input, inputPad));
    std::cout << "     ";

    // Expected Output
    std::cout << "Expected Output: ";
    WriteYellow(PadString(expected, outputPad));
    std::cout << "   =>   ";

    // Received Output
    std::cout << "Received Output: ";
    WriteYellow(PadString(received, outputPad) + "\n");
}

void UI::DisplayPassFail(bool pass)
{
    // TODO: Move these to a static const
    HANDLE consoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
    WORD foregroundWhite = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
    WORD consoleReset = 0 | foregroundWhite;

    std::cout << '[';

    if (pass)
    {
        SetConsoleTextAttribute(consoleColor, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
        std::cout << "Pass";
    }
    else
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
        std::cout << "Fail";
    }
    SetConsoleTextAttribute(consoleColor, consoleReset);

    std::cout << "]\t";

}

std::string UI::PadString(const std::string& str, int width)
{
    std::string paddedStr = str;
    if (static_cast<int>(str.length()) < width)
    {
        paddedStr += std::string(width - str.length(), ' ');
    }
    return paddedStr;
}

void UI::WriteYellow(const std::string& text)
{
    HANDLE consoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
    WORD foregroundYellow = FOREGROUND_RED | FOREGROUND_GREEN;
    WORD foregroundWhite = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
    WORD consoleReset = 0 | foregroundWhite;

    SetConsoleTextAttribute(consoleColor, foregroundYellow);
    std::cout << text;
    SetConsoleTextAttribute(consoleColor, consoleReset);
}