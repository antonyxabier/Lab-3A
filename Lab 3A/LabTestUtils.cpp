#include <iostream>
#include <string>
#include <vector>
#include "LabTestUtils.h"
#include "UI.h"
#pragma warning(disable:4244)


using namespace std;

int LabTestUtils::FindLargestStringSize(vector<string> words) {
    // Initialize default value
    int high = 0;

    // Sort sizes
    if (words.size() > 0) {
        for (const string word : words) {
            if (word.size() > high) {
                high = (int)word.size();
            }
        }
    }

    // Return the largest string
    return high;
}

int LabTestUtils::Tester(int testNumber, double passValue, vector<string> inputs, vector<string> expecteds, vector<string> submitteds, int gameMode) {
    // TODO: Display header
    UI::DisplayHeader("Test " + to_string(testNumber), (testNumber == 10));

    // Set initial point values to 
    double testPoints = 0;

    // Find the largest output length and set padding
    int expectedLength = FindLargestStringSize(expecteds);
    int submittedLength = FindLargestStringSize(submitteds);
    int outputPadding = (expectedLength > submittedLength) ? expectedLength : submittedLength;

    // Find the largest input length and set padding
    int inputPadding = FindLargestStringSize(inputs);

    // Display tests
    for (int i = 0; i < inputs.size(); i++) {

        UI::DisplayTryPass(
            i + 1,
            (i >= inputs.size() || inputs[i].empty()) ? "null" : inputs[i],
            (i >= expecteds.size() || expecteds[i].empty()) ? "null" : expecteds[i],
            (i >= submitteds.size() || submitteds[i].empty()) ? "null" : submitteds[i],
            inputPadding,
            outputPadding
        );

        if (i < expecteds.size() && i < submitteds.size()) {
            if (expecteds[i] == submitteds[i]) {
                testPoints += passValue;
            }
        }
    }

    cout << "\n";

    // TODO: Display points progress
    UI::DisplayScore(testPoints, passValue);
    UI::DisplayDivider();

    return testPoints;
}