#pragma once
#include "WORD.h"
#include <iostream>
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

#define FALSE -1
#define MAX_HASH 100

#define DEFAULT_PATH "data"
using namespace std;

ref class DICO
{
protected:
	String ^_search;	//	value of entered searching text
	String ^_source;	//	path to data folder
	int _current;	//	the index of the word currently being accessed
	bool *_check_hash;
	int _n_hash;
	
public:
	array <WORD^>^ _hash_table;

	//	constructor-destructor
	DICO();
	~DICO();

	//	get-set methods
	String^ get_path_to_data_folder();
	bool set_path_to_data_folder(String ^new_path);
	
	String^ get_search_text();
	bool set_search_text(String ^new_text);

	int get_current_index();

	int get_n_hash();

	//	reading-writing methods
//	bool read(String ^input);
	bool write(String ^output);

	//	editing methods
	bool add(WORD ^new_item);
	bool remove_current();

	//	searching methods
	bool search();	//	if searching succeeds, return true & set result to _current


private:
	//	sub methods
	bool create_hash_table(wchar_t first_letter);
	int mod(int radix, int exponent);
	int hash_function(String ^name);

};
