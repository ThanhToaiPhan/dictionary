#pragma once

#define FALSE -1

#define MAX_CHAR 60	//	maximum characters for one string
#define MAX_WORD MAX_CHAR*15	//	maximum characters for all atributes of 1 WORD
#define MAX_SYN	5	//	maximum synonyms for each word

#define NOUN 0
#define VERB 1
#define ADJ 2	//	ADJECTIVE
#define ADV 3	//	ADVERB
#define PREP 4	//	PREPOSITION


using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

ref class WORD
{
protected:
	String^ _name;
	array <String^>^ _def;	//	array of definitions, for each types
	array <String^>^ _syn;	//	array of synonyms
	
public:
	//	constructor-destructor
	WORD();
	~WORD();
//	void reset();

	//	get-set methods
	String^ get_name();
	bool set_name(String ^new_name);
	
	String^ get_definition(int type);
	bool set_definition(String ^new_definition, int type);
	
	String^ get_synonym(int index);
	bool set_synonym(String ^new_synonym, int index);
	
	//	reading-writing methods
	bool read(StreamReader ^input);
	bool write(StreamWriter ^output);

	//	editing methods

	//	sub methods


};