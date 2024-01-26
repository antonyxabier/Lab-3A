#pragma once
#include <string>
#include <vector>

using namespace std;

class LabTestUtils
{
	static int FindLargestStringSize(vector<string> words);

public:
	static int Tester(int testNumber, double passValue, vector<string> inputs, vector<string> expecteds, vector<string> submitteds, int gameMode);
};

