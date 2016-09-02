#include "DICO.h"

#pragma once

namespace Winform_v2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for FormAdd
	/// </summary>
	public ref class FormAdd : public System::Windows::Forms::Form
	{
	private:	DICO ^data;	ComboBox ^list_view;

	public:
		FormAdd(void)
		{
			InitializeComponent();
		}
		FormAdd(DICO ^data, ComboBox ^list_view){
			this->data = data;
			this->list_view = list_view;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  adjective_a;
	private: System::Windows::Forms::TextBox^  verb_a;
	private: System::Windows::Forms::TextBox^  noun_a;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  preposition_a;
	private: System::Windows::Forms::TextBox^  adverb_a;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  save_a_button;
	private: System::Windows::Forms::TextBox^  word_add;
	private: System::Windows::Forms::Label^  label6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAdd::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->word_add = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->save_a_button = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->preposition_a = (gcnew System::Windows::Forms::TextBox());
			this->adverb_a = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->adjective_a = (gcnew System::Windows::Forms::TextBox());
			this->verb_a = (gcnew System::Windows::Forms::TextBox());
			this->noun_a = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->word_add);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->save_a_button);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->preposition_a);
			this->groupBox1->Controls->Add(this->adverb_a);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->adjective_a);
			this->groupBox1->Controls->Add(this->verb_a);
			this->groupBox1->Controls->Add(this->noun_a);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(293, 272);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ADD";
			// 
			// word_add
			// 
			this->word_add->Location = System::Drawing::Point(70, 15);
			this->word_add->Name = L"word_add";
			this->word_add->Size = System::Drawing::Size(100, 20);
			this->word_add->TabIndex = 12;
			this->word_add->DoubleClick += gcnew System::EventHandler(this, &FormAdd::word_add_DoubleClick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 15);
			this->label6->TabIndex = 11;
			this->label6->Text = L"WORD";
			// 
			// save_a_button
			// 
			this->save_a_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"save_a_button.Image")));
			this->save_a_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->save_a_button->Location = System::Drawing::Point(212, 238);
			this->save_a_button->Name = L"save_a_button";
			this->save_a_button->Size = System::Drawing::Size(75, 23);
			this->save_a_button->TabIndex = 10;
			this->save_a_button->Text = L"Save";
			this->save_a_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->save_a_button->UseVisualStyleBackColor = true;
			this->save_a_button->Click += gcnew System::EventHandler(this, &FormAdd::save_a_button_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 196);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Preposition";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Adverb";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Adjective";
			// 
			// preposition_a
			// 
			this->preposition_a->Location = System::Drawing::Point(70, 193);
			this->preposition_a->Multiline = true;
			this->preposition_a->Name = L"preposition_a";
			this->preposition_a->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->preposition_a->Size = System::Drawing::Size(217, 39);
			this->preposition_a->TabIndex = 6;
			// 
			// adverb_a
			// 
			this->adverb_a->Location = System::Drawing::Point(70, 155);
			this->adverb_a->Multiline = true;
			this->adverb_a->Name = L"adverb_a";
			this->adverb_a->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->adverb_a->Size = System::Drawing::Size(217, 39);
			this->adverb_a->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Verb";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Noun";
			// 
			// adjective_a
			// 
			this->adjective_a->Location = System::Drawing::Point(70, 117);
			this->adjective_a->Multiline = true;
			this->adjective_a->Name = L"adjective_a";
			this->adjective_a->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->adjective_a->Size = System::Drawing::Size(217, 39);
			this->adjective_a->TabIndex = 2;
			// 
			// verb_a
			// 
			this->verb_a->Location = System::Drawing::Point(70, 79);
			this->verb_a->Multiline = true;
			this->verb_a->Name = L"verb_a";
			this->verb_a->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->verb_a->Size = System::Drawing::Size(217, 39);
			this->verb_a->TabIndex = 1;
			// 
			// noun_a
			// 
			this->noun_a->Location = System::Drawing::Point(70, 41);
			this->noun_a->Multiline = true;
			this->noun_a->Name = L"noun_a";
			this->noun_a->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->noun_a->Size = System::Drawing::Size(217, 39);
			this->noun_a->TabIndex = 0;
			// 
			// FormAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(317, 296);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->Name = L"FormAdd";
			this->Text = L"Add Word";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void save_a_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( String::IsNullOrWhiteSpace(word_add->Text) ){
				 MessageBox::Show("Please fill word box");
				 return;
			 }

			 /*	check existance of adding WORD	*/
			 data->set_search_text(word_add->Text);
			 list_view->Items->Add( data->get_search_text() );
			 if( data->search() ){
				MessageBox::Show("This word is already existed !");
				return;
			 }

			 /*	save values of textboxes to temp	*/
			 WORD ^temp = gcnew WORD();

			 temp->set_name(word_add->Text);
			 temp->set_definition(noun_a->Text, NOUN);
			 temp->set_definition(verb_a->Text, VERB);
			 temp->set_definition(adjective_a->Text, ADJ);
			 temp->set_definition(adverb_a->Text, ADV);
			 temp->set_definition(preposition_a->Text, PREP);

			 /*	add temp to data	*/
			 if( !data->add(temp) ){
				MessageBox::Show("An error has occured");
				return;
			 }
			 /*	reset save textboxs	*/
			 save_a_button->Enabled = false;

			 word_add->ReadOnly = true;
			 noun_a->ReadOnly = true;
			 verb_a->ReadOnly = true;
			 adjective_a->ReadOnly = true;
			 adverb_a->ReadOnly = true;
			 preposition_a->ReadOnly = true;

			 MessageBox::Show("Saved successfully");

		 }

private: System::Void word_add_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 save_a_button->Enabled = true;

			 word_add->ReadOnly = false;		word_add->Clear();
			 noun_a->ReadOnly = false;	noun_a->Clear();
			 verb_a->ReadOnly = false;	verb_a->Clear();
			 adjective_a->ReadOnly = false;	adjective_a->Clear();
			 adverb_a->ReadOnly = false;		adverb_a->Clear();
			 preposition_a->ReadOnly = false;	preposition_a->Clear();
		 }

		 //	load-close methods

};
}
