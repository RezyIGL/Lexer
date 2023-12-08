#include <iostream>
#include "../headerFiles/Lexer.h"

int main() {
	std::fstream myStream (R"(E:\CLionProjects\Lexer\CodeToAnalyze.txt)");
	Lexer lexer(myStream);
	std::pair<std::string, std::string> lexem;

	while (lexem.first != "eof") {
		lexem = lexer.getNextLexem();
		std::cout << "[" << lexem.first << ", \"" << lexem.second << "\"]" << std::endl;
		if (lexem.first == "error") break;
	}
}