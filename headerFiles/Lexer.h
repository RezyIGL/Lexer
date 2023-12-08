#ifndef LEXER_LEXER_H
#define LEXER_LEXER_H

#include "LexGraph.h"
#include <cctype>
#include <set>
#include <fstream>

class Lexer {
private:
	std::istream &stream;
	char buffer;
	std::string value;
	int state = 0;
	void nextLexem(const std::vector<E> &edges, std::pair<std::string, std::string> &lexem);
	void bufferNext();

public:
	Lexer(std::istream& stream);
	std::pair<std::string, std::string> getNextLexem();

};

#endif //LEXER_LEXER_H
