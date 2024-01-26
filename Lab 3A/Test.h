#pragma once
#include <vector>
#include <string>

using namespace std;

class Test {
	static vector<int> RandomInts(int low = 1, int high = 10);
	static vector<double> RandomDbls();
	static vector<vector<string>> RandomWords();

public:
	static void Run();
	static int Check1();
	static int Check2();
	static int Check3();
	static int Check4();
	static int Check5();
	static int Check6();
	static int Check7();
	static int Check8();
	static int Check9();
	static int Check10();
};