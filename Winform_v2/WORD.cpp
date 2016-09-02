#include "StdAfx.h"
#include "WORD.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

//	constructor/destructor
WORD::WORD(){
	_def = gcnew array<String^>(PREP+1);
	_syn = gcnew array<String^>(MAX_SYN);
}

WORD::~WORD(){}

//	get-set methods
String^ WORD::get_name(){
	return _name;
}
bool WORD::set_name(String ^new_value){
	if( String::IsNullOrWhiteSpace(new_value) )	return false;
	
	_name = new_value;
	return true;
}

String^ WORD::get_definition(int type){
	if( type < NOUN ||type > PREP )	return nullptr;
	else
		return _def[type];
	
}
bool WORD::set_definition(String ^new_definition, int type){
	if( type < NOUN || type > PREP )return false;

	if( String::IsNullOrWhiteSpace(new_definition) )
		_def[type] = nullptr;
	else
		_def[type] = new_definition;

	return true;
}

String^ WORD::get_synonym(int index){
	if( index < 0 || index >= MAX_SYN )	return nullptr;

	return _syn[index];
}
bool WORD::set_synonym(String ^new_synonym, int index){
	if( index < 0 || index >= MAX_SYN )	return false;

	if( String::IsNullOrWhiteSpace(new_synonym) )
		_syn[index] = nullptr;
	else
		_syn[index] = new_synonym;

	return true;
}

//	reading-writing methods
bool WORD::read(StreamReader ^input){
	array <String^>^ content;
	content = gcnew array<String^>(3);	//	_name, _def, _syn
	String ^buffer;

	buffer = input->ReadLine();	//	read all word

	content = buffer->Split(L'#', MAX_WORD);
	_name = content[0];

	_def = content[1]->Split(L';', MAX_CHAR, 1);	//	1 for remove empty entries
	
	_syn = content[2]->Split(L';', MAX_CHAR, 1);

	return true;
}

bool WORD::write(StreamWriter ^output){
	if( String::IsNullOrWhiteSpace(_name) )	return false;

	output->Write(_name + L'#');
	for( int type = NOUN; type <= PREP; type++ )
		output->Write(_def[type] + L';');

	output->Write(L'#');
	for( int index = 0; index <= MAX_SYN - 1; index++ )
		output->Write(_syn[index]+ L';');

	output->Write(output->NewLine);

	return true;	
}

//	editing methods


//	sub methods
