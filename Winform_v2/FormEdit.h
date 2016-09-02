#pragma once
#include "DICO.h"
#include "FormAdd.h"

namespace Winform_v2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormEdit
	/// </summary>
	public ref class FormEdit : public System::Windows::Forms::Form
	{
	public:
		FormEdit(void)
		{
			InitializeComponent();
		}

		FormEdit(DICO ^data, ComboBox ^list_view){
			this->data = data;
			this->list_view = list_view;
			
			InitializeComponent();
			initilize_boxes();
		}
	
	private: System::Windows::Forms::TabControl^  tabControl1;
	public: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::Label^  word_text;




	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  save_synonym_button;
	private: System::Windows::Forms::TextBox^  syn_5;


	private: System::Windows::Forms::TextBox^  syn_4;

	private: System::Windows::Forms::TextBox^  syn_3;

	private: System::Windows::Forms::TextBox^  syn_2;

	private: System::Windows::Forms::TextBox^  syn_1;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>

		DICO ^data;	ComboBox ^list_view;
		int syn_editing; //	mark which box is in edit

		~FormEdit()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  save_e_button;
	 

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  preposition_e;

	private: System::Windows::Forms::TextBox^  adverb_e;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  adjective_e;

	private: System::Windows::Forms::TextBox^  verb_e;

	private: System::Windows::Forms::TextBox^  noun_e;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEdit::typeid));
			this->save_e_button = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->preposition_e = (gcnew System::Windows::Forms::TextBox());
			this->adverb_e = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->adjective_e = (gcnew System::Windows::Forms::TextBox());
			this->verb_e = (gcnew System::Windows::Forms::TextBox());
			this->noun_e = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->save_synonym_button = (gcnew System::Windows::Forms::Button());
			this->syn_5 = (gcnew System::Windows::Forms::TextBox());
			this->syn_4 = (gcnew System::Windows::Forms::TextBox());
			this->syn_3 = (gcnew System::Windows::Forms::TextBox());
			this->syn_2 = (gcnew System::Windows::Forms::TextBox());
			this->syn_1 = (gcnew System::Windows::Forms::TextBox());
			this->word_text = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// save_e_button
			// 
			this->save_e_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"save_e_button.Image")));
			this->save_e_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->save_e_button->Location = System::Drawing::Point(194, 202);
			this->save_e_button->Name = L"save_e_button";
			this->save_e_button->Size = System::Drawing::Size(75, 23);
			this->save_e_button->TabIndex = 10;
			this->save_e_button->Text = L"Save";
			this->save_e_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->save_e_button->UseVisualStyleBackColor = true;
			this->save_e_button->Click += gcnew System::EventHandler(this, &FormEdit::save_e_button_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Preposition";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Adverb";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Adjective";
			// 
			// preposition_e
			// 
			this->preposition_e->Location = System::Drawing::Point(79, 157);
			this->preposition_e->Multiline = true;
			this->preposition_e->Name = L"preposition_e";
			this->preposition_e->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->preposition_e->Size = System::Drawing::Size(190, 39);
			this->preposition_e->TabIndex = 6;
			this->preposition_e->DoubleClick += gcnew System::EventHandler(this, &FormEdit::preposition_e_DoubleClick);
			// 
			// adverb_e
			// 
			this->adverb_e->Location = System::Drawing::Point(79, 119);
			this->adverb_e->Multiline = true;
			this->adverb_e->Name = L"adverb_e";
			this->adverb_e->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->adverb_e->Size = System::Drawing::Size(190, 39);
			this->adverb_e->TabIndex = 5;
			this->adverb_e->DoubleClick += gcnew System::EventHandler(this, &FormEdit::adverb_e_DoubleClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Verb";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Noun";
			// 
			// adjective_e
			// 
			this->adjective_e->Location = System::Drawing::Point(79, 81);
			this->adjective_e->Multiline = true;
			this->adjective_e->Name = L"adjective_e";
			this->adjective_e->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->adjective_e->Size = System::Drawing::Size(190, 39);
			this->adjective_e->TabIndex = 2;
			this->adjective_e->DoubleClick += gcnew System::EventHandler(this, &FormEdit::adjective_e_DoubleClick);
			// 
			// verb_e
			// 
			this->verb_e->Location = System::Drawing::Point(79, 43);
			this->verb_e->Multiline = true;
			this->verb_e->Name = L"verb_e";
			this->verb_e->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->verb_e->Size = System::Drawing::Size(190, 39);
			this->verb_e->TabIndex = 1;
			this->verb_e->DoubleClick += gcnew System::EventHandler(this, &FormEdit::verb_e_DoubleClick);
			// 
			// noun_e
			// 
			this->noun_e->Location = System::Drawing::Point(79, 5);
			this->noun_e->Multiline = true;
			this->noun_e->Name = L"noun_e";
			this->noun_e->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->noun_e->Size = System::Drawing::Size(190, 39);
			this->noun_e->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(290, 256);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->save_e_button);
			this->tabPage1->Controls->Add(this->noun_e);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->verb_e);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->adjective_e);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->preposition_e);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->adverb_e);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(282, 230);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Definition";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->save_synonym_button);
			this->tabPage2->Controls->Add(this->syn_5);
			this->tabPage2->Controls->Add(this->syn_4);
			this->tabPage2->Controls->Add(this->syn_3);
			this->tabPage2->Controls->Add(this->syn_2);
			this->tabPage2->Controls->Add(this->syn_1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(282, 230);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Synonym";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(29, 136);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 10;
			this->label12->Text = L"5";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(29, 110);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"4";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 84);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"3";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(29, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"1";
			// 
			// save_synonym_button
			// 
			this->save_synonym_button->Enabled = false;
			this->save_synonym_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"save_synonym_button.Image")));
			this->save_synonym_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->save_synonym_button->Location = System::Drawing::Point(201, 159);
			this->save_synonym_button->Name = L"save_synonym_button";
			this->save_synonym_button->Size = System::Drawing::Size(75, 23);
			this->save_synonym_button->TabIndex = 5;
			this->save_synonym_button->Text = L"Save";
			this->save_synonym_button->UseVisualStyleBackColor = true;
			this->save_synonym_button->Click += gcnew System::EventHandler(this, &FormEdit::save_synonym_button_Click);
			// 
			// syn_5
			// 
			this->syn_5->Location = System::Drawing::Point(48, 133);
			this->syn_5->Name = L"syn_5";
			this->syn_5->ReadOnly = true;
			this->syn_5->Size = System::Drawing::Size(228, 20);
			this->syn_5->TabIndex = 4;
			this->syn_5->DoubleClick += gcnew System::EventHandler(this, &FormEdit::syn_5_DoubleClick);
			// 
			// syn_4
			// 
			this->syn_4->Location = System::Drawing::Point(48, 107);
			this->syn_4->Name = L"syn_4";
			this->syn_4->ReadOnly = true;
			this->syn_4->Size = System::Drawing::Size(228, 20);
			this->syn_4->TabIndex = 3;
			this->syn_4->DoubleClick += gcnew System::EventHandler(this, &FormEdit::syn_4_DoubleClick);
			// 
			// syn_3
			// 
			this->syn_3->Location = System::Drawing::Point(48, 81);
			this->syn_3->Name = L"syn_3";
			this->syn_3->ReadOnly = true;
			this->syn_3->Size = System::Drawing::Size(228, 20);
			this->syn_3->TabIndex = 2;
			this->syn_3->DoubleClick += gcnew System::EventHandler(this, &FormEdit::syn_3_DoubleClick);
			// 
			// syn_2
			// 
			this->syn_2->Location = System::Drawing::Point(48, 55);
			this->syn_2->Name = L"syn_2";
			this->syn_2->ReadOnly = true;
			this->syn_2->Size = System::Drawing::Size(228, 20);
			this->syn_2->TabIndex = 1;
			this->syn_2->DoubleClick += gcnew System::EventHandler(this, &FormEdit::syn_2_DoubleClick);
			// 
			// syn_1
			// 
			this->syn_1->Location = System::Drawing::Point(48, 29);
			this->syn_1->Name = L"syn_1";
			this->syn_1->ReadOnly = true;
			this->syn_1->Size = System::Drawing::Size(228, 20);
			this->syn_1->TabIndex = 0;
			this->syn_1->DoubleClick += gcnew System::EventHandler(this, &FormEdit::syn_1_DoubleClick);
			// 
			// word_text
			// 
			this->word_text->AutoSize = true;
			this->word_text->Font = (gcnew System::Drawing::Font(L"DigifaceWide", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->word_text->ForeColor = System::Drawing::Color::Blue;
			this->word_text->Location = System::Drawing::Point(7, 2);
			this->word_text->Name = L"word_text";
			this->word_text->Size = System::Drawing::Size(140, 26);
			this->word_text->TabIndex = 4;
			this->word_text->Text = L"wordtext";
			// 
			// FormEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(317, 296);
			this->Controls->Add(this->word_text);
			this->Controls->Add(this->tabControl1);
			this->MaximizeBox = false;
			this->Name = L"FormEdit";
			this->Text = L"FormEdit";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormEdit::form_edit_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormEdit::FormEdit_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//	load-close methods
private: System::Void FormEdit_Load(System::Object^  sender, System::EventArgs^  e) {
				word_text->Text = data->_hash_table[data->get_current_index()]->get_name();
				word_text->Text = word_text->Text->ToUpper();
		 }

private: System::Void form_edit_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			  
					/*	save change to file	*/
			 data->write( data->get_path_to_data_folder() + L'/' +
				 data->get_search_text()[0] + ".txt" ); 
					 this->Activate();

		 }
		
private: void initilize_boxes(){
			noun_e->AppendText( data->_hash_table[data->get_current_index()]->get_definition(NOUN) );
			verb_e->AppendText( data->_hash_table[data->get_current_index()]->get_definition(VERB) );
			adjective_e->AppendText( data->_hash_table[data->get_current_index()]->get_definition(ADJ) );
			adverb_e->AppendText( data->_hash_table[data->get_current_index()]->get_definition(ADV) );
			preposition_e->AppendText( data->_hash_table[data->get_current_index()]->get_definition(PREP) );

			syn_1->AppendText( data->_hash_table[data->get_current_index()]->get_synonym(0) );
			syn_2->AppendText( data->_hash_table[data->get_current_index()]->get_synonym(1) );
			syn_3->AppendText( data->_hash_table[data->get_current_index()]->get_synonym(2) );
			syn_4->AppendText( data->_hash_table[data->get_current_index()]->get_synonym(3) );
			syn_5->AppendText( data->_hash_table[data->get_current_index()]->get_synonym(4) );
		 }


		/*	edit definitions startregion	*/

private: System::Void save_e_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 save_e_button->Enabled = false;

			 /*	save change in hashtable	*/

			data->_hash_table[data->get_current_index()]->set_definition( noun_e->Text, NOUN );
			data->_hash_table[data->get_current_index()]->set_definition( verb_e->Text, VERB );
			data->_hash_table[data->get_current_index()]->set_definition( adjective_e->Text, ADJ );
			data->_hash_table[data->get_current_index()]->set_definition( adverb_e->Text, ADV );
			data->_hash_table[data->get_current_index()]->set_definition( preposition_e->Text, PREP );


			 /*	turn off edit textboxes	*/
			 noun_e->ReadOnly = true;
			 verb_e->ReadOnly = true;
			 adjective_e->ReadOnly = true;
			 adverb_e->ReadOnly = true;
			 preposition_e->ReadOnly = true;

			 //
			 MessageBox::Show("Saved successfully");
		 }

private: System::Void noun_e_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 save_e_button->Enabled = true;
			 noun_e->ReadOnly = false;
		 }

private: System::Void verb_e_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 save_e_button->Enabled = true;
			 verb_e->ReadOnly = false;
		 }

private: System::Void adjective_e_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 save_e_button->Enabled = true;
			 adjective_e->ReadOnly = false;
		 }

private: System::Void adverb_e_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 save_e_button->Enabled = true;
			 adverb_e->ReadOnly = false;
		 }

private: System::Void preposition_e_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 save_e_button->Enabled = true;
			 preposition_e->ReadOnly = false;
		 }

		 /*	edit definitions endregion	*/


		 /*	edit synonym startregion	*/

private: System::Void syn_1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 if( syn_editing == 0 ){
				 syn_1->ReadOnly = false;
				 syn_editing = 1;
			 }
			 save_synonym_button->Enabled = true;
		 }

private: System::Void syn_2_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 if( syn_editing == 0 ){
				syn_2->ReadOnly = false;
				syn_editing = 2;
			 }
			 save_synonym_button->Enabled = true;
		 }

private: System::Void syn_5_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 if( syn_editing == 0 ){
				syn_5->ReadOnly = false;
				syn_editing = 5;
			 }
			 save_synonym_button->Enabled = true;
		 }

private: System::Void syn_3_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 if( syn_editing == 0 ){
				 syn_3->ReadOnly = false;
				 syn_editing = 3;
			 }
			 save_synonym_button->Enabled = true;
		 }
		 
private: System::Void syn_4_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 if( syn_editing == 0 ){
				 syn_4->ReadOnly = false;
				 syn_editing = 4;
			 }
			 save_synonym_button->Enabled = true;
		 }
		 
private: System::Void save_synonym_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 String ^temp;

			 switch( syn_editing ){
			 case 1:	temp = syn_1->Text;	break;
			 case 2:	temp = syn_2->Text;	break;
			 case 3:	temp = syn_3->Text;	break;
			 case 4:	temp = syn_4->Text;	break;
			 case 5:	temp = syn_5->Text;	break;
			 default: break;
			 }

			if( !list_view->Items->Contains(temp) && !String::IsNullOrWhiteSpace(temp) ){
				if (MessageBox::Show("Do you want to add it to dicionary?",
				 "This word does not exist!", MessageBoxButtons::YesNo,
				 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
				//	suggest to user adding new word
					 //	save current word
						String ^word_temp = data->get_search_text();
					//	open form add 
					FormAdd^ FA = gcnew FormAdd(data, list_view);
					FA->ShowDialog();
					//	restore current word
						data->set_search_text(word_temp);
						data->search();
						return;
				}
				else	return;
			}

			if( !data->_hash_table[data->get_current_index()]->set_synonym(temp, syn_editing - 1) ){
				MessageBox::Show("An error has occured");
				return;
			}
		 
			 //	reset	 
			 set_readonly_synonym( syn_editing, true );
			 save_synonym_button->Enabled = false;
			 syn_editing = 0;
		 }

private: void set_readonly_synonym(int index, bool readonly){

			 switch( index ){
			 case 1: syn_1->ReadOnly = readonly;		break;
			 case 2: syn_2->ReadOnly = readonly;		break;
			 case 3: syn_3->ReadOnly = readonly;		break;
			 case 4: syn_4->ReadOnly = readonly;		break;
			 case 5: syn_5->ReadOnly = readonly;		break;
			 default: break;
			 }

		 }

		/*	edit synonym endregion	*/


};
}
