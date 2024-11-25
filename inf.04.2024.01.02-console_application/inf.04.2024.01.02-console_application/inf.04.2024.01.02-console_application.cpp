#include <iostream>
#include <string>

class StringTools {
public:
    static int countVowels(const std::string& text) {
        if (text.empty()) {
            return 0;
        }

        const std::string vowels = "aąeęiouóyAĄEĘIOUÓY";
        int vowelCount = 0;

        for (char c : text) {
            if (vowels.find(c) != std::string::npos) {
                vowelCount++;
            }
        }

        return vowelCount;
    }
    static std::string removeDuplicates(const std::string& text) {
        if (text.empty()) {
            return "";
        }

        std::string result;
        result += text[0];

        for (size_t i = 1; i < text.length(); i++) {
            if (text[i] != text[i - 1]) {
                result += text[i];
            }
        }

        return result;
    }
};

int main() {
    std::string inputText;
    std::cout << "Podaj tekst: ";
    std::getline(std::cin, inputText);
    int vowelCount = StringTools::countVowels(inputText);
    std::cout << "Liczba samogłosek w podanym tekscie: " << vowelCount << std::endl;
    std::string noDuplicatesText = StringTools::removeDuplicates(inputText);
    std::cout << "Tekst bez powtarzających się znaków: " << noDuplicatesText << std::endl;
    return 0;
}
