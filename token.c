/*
 * Project name:
 * Implementace interpretu imperativního jazyka IFJ14
 *
 * Repository:
 * https://github.com/Dasio/IFJ
 *
 * Team:
 * Dávid Mikuš			(xmikus15)
 * Peter Hostačný		(xhosta03)
 * Tomáš Kello			(xkello00)
 * Adam Lučanský		(xlucan01)
 * Michaela Lukášová		(xlukas09)
 */

#include "token.h"

Token initToken() {
	Token t = {
		.type = TT_empty,
		// TODO : String shall not malloc before appending char
		.str = initEmptyString()
	};

	return t;
}

void destroyToken(Token *token) {
	assert(token);

	// Skipping types which after conversion have string already free'd
	switch(token->type) {
		case TT_real:
		case TT_integer:
		case TT_bool:
		case TT_and:
		case TT_or:
		case TT_not:
		case TT_xor:

			return;
		default: break;
	}

	destroyString(&token->str);
}

void tokenInfo(Token *token) {
	assert(token);
	switch(token->type) {
		case TT_identifier: {
			printf("Token str : ");
			printString(&token->str);
			break;
		}
		case TT_keyword: {
			printf("Keyword %s", stringifyToken(token));
			break;
		}
		default: break;
	}
	printf(" , type : %d\n", token->type);
}

char *stringifyToken(Token *token) {
	switch(token->type)
	{
		case TT_empty:
			return("$");
		case TT_real:
			return("REAL");
		case TT_integer:
			return("INT");
		case TT_bool:
			return("BOOL");
		case TT_function:
			return("func");
		case TT_unaryMinus:
			return("-");
		case TT_not:
			return("not");
		case TT_and:
			return("and");
		case TT_or:
			return("or");
		case TT_xor:
			return("xor");

		case TT_assignment:
			return(":=");
		case TT_colon:
			return(":");
		case TT_comma:
			return(",");
		case TT_division:
			return("/");
		case TT_dot:
			return(".");
		case TT_equality:
			return("=");
		case TT_greater :
			return(">");
		case TT_greaterOrEqual:
			return(">=");
		case TT_identifier:
			return(token->str.data);
		case TT_inequality:
			return("<>");
		case TT_less:
			return("<");
		case TT_lessOrEqual:
			return("<=");
		case TT_leftBrace:
			return("(");
		case TT_leftCurlyBrace:
			return("{");
		case TT_minus:
			return("-");
		case TT_multiply:
			return("*");
		case TT_plus:
			return("+");
		case TT_rightBrace:
			return(")");
		case TT_rightCurlyBrace:
			return("}");
		case TT_semicolon:
			return(";");
		case TT_string:
			return token->str.data;
		case TT_keyword:
			switch (token->keyword_token)
			{
				case Key_and:
					return("and");
				case Key_begin:
					return("begin");
				case Key_boolean:
					return("boolean");
				case Key_do:
					return("do");
				case Key_else:
					return("else");
				case Key_end:
					return("end");
				case Key_false:
					return("false");
				case Key_forward:
					return("forward");
				case Key_function:
					return("function");
				case Key_if:
					return("if");
				case Key_integer:
					return("integer");
				case Key_not:
					return("not");
				case Key_or:
					return("or");
				case Key_readln:
					return("readln");
				case Key_real:
					return("real");
				case Key_repeat:
					return("repeat");
				case Key_string:
					return("string");
				case Key_then:
					return("then");
				case Key_true:
					return("true");
				case Key_var:
					return("var");
				case Key_until:
					return("until");
				case Key_while:
					return("while");
				case Key_write:
					return("write");
				case Key_xor:
					return("xor");
				default: {
					fprintf(stderr, "Kw type : %d\n", token->keyword_token);
					assert(false && "Unknown keyword");
					return("Unknown keyword");
				}
			}
		default: {
			fprintf(stderr, "Token type : %d\n", token->type);
			assert(false && "Received unknown token!");
			return("N/A");
		}
	}
}

GenVectorFunctions(Token)
