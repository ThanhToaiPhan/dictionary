#include "StdAfx.h"
#include "DICO.h"

#include <iostream>
using namespace std;
//	cons-destructor
DICO ::DICO(){
	_hash_table = gcnew array<WORD^>(MAX_HASH);
	_check_hash = new bool[MAX_HASH];
}

DICO ::~DICO(){
	delete _check_hash;
}

//	get-set methods
String^ DICO::get_search_text(){
	return _search;
}
bool DICO::set_search_text(String ^new_text){
	if( String::IsNullOrWhiteSpace(new_text) )	return false;

	_search = new_text;
	return true;
}

String^ DICO::get_path_to_data_folder(){
	return _source;
}
bool DICO::set_path_to_data_folder(String ^new_path){
	if( String::IsNullOrWhiteSpace(new_path) )	return false;

	_source = new_path;
	return true;
}

int DICO::get_current_index(){
	return _current;
}

int DICO::get_n_hash(){
	return _n_hash;
}

//	read-write methods
bool DICO::write(String ^path){
StreamWriter ^output = gcnew StreamWriter(path, false ,System::Text::Encoding::Unicode);
	//
	if( output == nullptr)	return false;

	output->WriteLine(_n_hash);
	for( int i = 0; i <= MAX_HASH - 1; i++ ){
		if(_check_hash[i] == true)
			if( !_hash_table[i]->write(output) ){
				output->Close();
				return false;
			}
	}
	output->Close();
	//
	return true;
}

//	editing methods
bool DICO::add(WORD ^new_item){
	if( String::IsNullOrWhiteSpace( new_item->get_name() ) ) return false;
	//

	String ^path = _source + L'/' + new_item->get_name()[0] + ".txt";
	StreamReader ^input = gcnew StreamReader(path);

	_n_hash = int::Parse( input->ReadLine() );
	if( _n_hash >= MAX_HASH )	return false;	//	no space for adding more WORDs

	//	read from file
	String ^buffer = input->ReadToEnd();
	input->Close();	//	end reading

	//	edit
	_n_hash = _n_hash + 1;

	//	write to file
	StreamWriter ^output = gcnew StreamWriter(path, false, System::Text::Encoding::Unicode);	//	write at the end of text file (appending mode)
	
	output->WriteLine(_n_hash);
	output->Write(buffer);
	
	//	write new item
	if( new_item->write(output) ){
		output->Close();
		return true;
	}else{
		output->Close();
		return false;
	}
}

bool DICO::remove_current(){
	if( String::IsNullOrWhiteSpace( _hash_table[_current]->get_name() ) )	return false;

	_hash_table[_current] = nullptr;	//	delete current WORD in hash table
	_check_hash[_current] = false;	//	turn flag off
	
	_n_hash = _n_hash - 1;	
	
	String ^path = _source + L'/' + _search[0] + ".txt";
	write(path);

	return true;
}

//	searching methods
bool DICO::search()
{
	if (!create_hash_table(_search[0]))
	{
		_current = FALSE;
		return false;
	}
	else
	{
		int index_search = 0;
		index_search = hash_function(_search);
		if (_check_hash[index_search] == false)
		{
			_current = FALSE;
			return false;
		}
		String ^name = _hash_table[index_search]->get_name();

		if (String::Compare(_search, name) == 0)
		{
			_current = index_search;
			return true;
		}
		else
		{
			int flag = index_search;
			index_search++;
			if (_check_hash[index_search] == false)
			{
				_current = FALSE;
				return false;
			}
			name = _hash_table[index_search]->get_name();
			while (String::Compare(_search, name) != 0) // _search != name of current index
			{ 
				index_search++;
				if (_check_hash[index_search] == false)
				{
					_current = FALSE;
					return false;
				}
				if (index_search == MAX_HASH)
				{
					index_search = 0;
				}

				if (index_search == flag) // string matching failed
				{
					_current = FALSE;
					return false;
				}
				name = _hash_table[index_search]->get_name();
			}
			_current = index_search;
			return true;
		}
	}
}

//	sub methods
bool DICO::create_hash_table(wchar_t first_letter)
{
	if( first_letter < 'a' || first_letter > 'z' )	return false;

	int i = 0;
	int index_hash = 0;
	WORD Temp;
	char *Name;
	String ^path;

	path = _source + L'/' + first_letter + ".txt";


	StreamReader ^input;
	input = gcnew StreamReader(path);
	_n_hash = int::Parse(input->ReadLine());

	for (int i = 0; i < MAX_HASH; i++)	//	initilize _check_hash (all positions are avaiable
		_check_hash[i] = false;
	
	for (int i = 0; i <= _n_hash - 1; i++ )
	{
		WORD ^temp;
		temp = gcnew WORD();
		temp->read(input);
		index_hash = hash_function(temp->get_name()); // hash function
		if(_check_hash[index_hash] == false)//	if this position is unoccupied             
		{
			_hash_table->SetValue(temp, index_hash);
			_check_hash[index_hash] = true;
		}
		else	//	if this position is occupied (collision)
		{
			int flag = index_hash;
			index_hash++;
			while (_check_hash[index_hash] == true) // resolve collision by using linear searching for next unoccupied position
			{
				index_hash++;
				if (index_hash == MAX_HASH)
				{
					index_hash = 0;
				}
				if (index_hash == flag) // table is full, there is no unoccupied position left 
				{   
					return FALSE;
				}
			}
			_hash_table->SetValue(temp, index_hash);
			_check_hash[index_hash] = true;
		}
	}
	input->Close();
	return true;
}

int DICO::mod(int radix, int exponent)
{
	int Sum = 1;
	for (int i = 0; i < exponent; i++)
	{
		Sum = ((Sum % MAX_HASH) * (radix % MAX_HASH)) % MAX_HASH;
	}
	return Sum;
}

int DICO::hash_function(String ^name)
{
	int index = 0;
	for (int i = 0; i < name->Length; i++)
	{
		index = ((index % MAX_HASH) + (mod(name[i], (name->Length - 1 - i)) % MAX_HASH)) % MAX_HASH;
	}
	return index;
}