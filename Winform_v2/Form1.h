#pragma once

#include <iostream>
#include "FormAdd.h"
#include "FormEdit.h"
#include "FormTools.h"
#include "FormAbout.h"
#include "DICO.h"

namespace Winform_v2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	public: 
		DICO^ data;
	public: 
		int n_words;
		float ^size;
		Color ^col;
		String^  temp;
		int count;
		bool flag;

	private: System::Windows::Forms::ToolStripButton^  tools_button;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;

	private: System::Windows::Forms::Button^  search_button;
	private: System::Windows::Forms::ComboBox^  list_view;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::ToolStripDropDownButton^  help_button;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  about_button;

	private: System::Windows::Forms::PictureBox^  pictureBox2;




	private: System::Windows::Forms::RichTextBox^  view_box;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::BindingNavigator^  bindingNavigator1;
	private: System::Windows::Forms::ToolStripButton^  edit_button;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  add_button;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^  delete_button;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^  google_button;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->edit_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->add_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->delete_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tools_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->google_button = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->help_button = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->about_button = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->search_button = (gcnew System::Windows::Forms::Button());
			this->list_view = (gcnew System::Windows::Forms::ComboBox());
			this->view_box = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = nullptr;
			this->bindingNavigator1->BackColor = System::Drawing::Color::GreenYellow;
			this->bindingNavigator1->CountItem = nullptr;
			this->bindingNavigator1->DeleteItem = nullptr;
			this->bindingNavigator1->Dock = System::Windows::Forms::DockStyle::Left;
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {this->edit_button, 
				this->toolStripSeparator1, this->add_button, this->toolStripSeparator2, this->delete_button, this->toolStripSeparator3, this->tools_button, 
				this->toolStripSeparator5, this->google_button, this->toolStripSeparator4, this->help_button});
			this->bindingNavigator1->Location = System::Drawing::Point(0, 0);
			this->bindingNavigator1->MoveFirstItem = nullptr;
			this->bindingNavigator1->MoveLastItem = nullptr;
			this->bindingNavigator1->MoveNextItem = nullptr;
			this->bindingNavigator1->MovePreviousItem = nullptr;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = nullptr;
			this->bindingNavigator1->Size = System::Drawing::Size(24, 391);
			this->bindingNavigator1->TabIndex = 5;
			this->bindingNavigator1->Text = L"bindingNavigator1";
			this->bindingNavigator1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical90;
			// 
			// edit_button
			// 
			this->edit_button->BackColor = System::Drawing::Color::GreenYellow;
			this->edit_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->edit_button->Enabled = false;
			this->edit_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"edit_button.Image")));
			this->edit_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->edit_button->Name = L"edit_button";
			this->edit_button->Size = System::Drawing::Size(21, 20);
			this->edit_button->Text = L"Edit Word";
			this->edit_button->Click += gcnew System::EventHandler(this, &Form1::edit_button_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(21, 6);
			this->toolStripSeparator1->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical90;
			// 
			// add_button
			// 
			this->add_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->add_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"add_button.Image")));
			this->add_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(21, 20);
			this->add_button->Text = L"Add Word";
			this->add_button->Click += gcnew System::EventHandler(this, &Form1::add_button_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(21, 6);
			this->toolStripSeparator2->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical90;
			// 
			// delete_button
			// 
			this->delete_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->delete_button->Enabled = false;
			this->delete_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"delete_button.Image")));
			this->delete_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(21, 20);
			this->delete_button->Text = L"Delete Word";
			this->delete_button->Click += gcnew System::EventHandler(this, &Form1::delete_button_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(21, 6);
			this->toolStripSeparator3->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical90;
			// 
			// tools_button
			// 
			this->tools_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tools_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tools_button.Image")));
			this->tools_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tools_button->Name = L"tools_button";
			this->tools_button->Size = System::Drawing::Size(21, 20);
			this->tools_button->Text = L"Tools";
			this->tools_button->Click += gcnew System::EventHandler(this, &Form1::tools_button_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(21, 6);
			this->toolStripSeparator5->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical90;
			// 
			// google_button
			// 
			this->google_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->google_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"google_button.Image")));
			this->google_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->google_button->Name = L"google_button";
			this->google_button->Size = System::Drawing::Size(21, 20);
			this->google_button->Text = L"Google Translate";
			this->google_button->Click += gcnew System::EventHandler(this, &Form1::google_button_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(21, 6);
			this->toolStripSeparator4->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical90;
			// 
			// help_button
			// 
			this->help_button->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->help_button->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->helpToolStripMenuItem, 
				this->about_button});
			this->help_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"help_button.Image")));
			this->help_button->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->help_button->Name = L"help_button";
			this->help_button->Size = System::Drawing::Size(21, 27);
			this->help_button->Text = L"Help";
			this->help_button->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->help_button->TextDirection = System::Windows::Forms::ToolStripTextDirection::Vertical90;
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// about_button
			// 
			this->about_button->Name = L"about_button";
			this->about_button->Size = System::Drawing::Size(107, 22);
			this->about_button->Text = L"About";
			this->about_button->Click += gcnew System::EventHandler(this, &Form1::about_button_Click);
			// 
			// search_button
			// 
			this->search_button->BackColor = System::Drawing::SystemColors::ControlLight;
			this->search_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->search_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->search_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->search_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"search_button.Image")));
			this->search_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->search_button->Location = System::Drawing::Point(144, 10);
			this->search_button->Name = L"search_button";
			this->search_button->Size = System::Drawing::Size(75, 27);
			this->search_button->TabIndex = 1;
			this->search_button->Text = L"Search";
			this->search_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->search_button->UseVisualStyleBackColor = false;
			this->search_button->Click += gcnew System::EventHandler(this, &Form1::search_button_Click);
			// 
			// list_view
			// 
			this->list_view->AccessibleRole = System::Windows::Forms::AccessibleRole::Graphic;
			this->list_view->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->list_view->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->list_view->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->list_view->BackColor = System::Drawing::Color::White;
			this->list_view->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->list_view->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple;
			this->list_view->Font = (gcnew System::Drawing::Font(L"Lingoes Unicode", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->list_view->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->list_view->FormattingEnabled = true;
			this->list_view->Location = System::Drawing::Point(30, 10);
			this->list_view->Name = L"list_view";
			this->list_view->Size = System::Drawing::Size(110, 340);
			this->list_view->Sorted = true;
			this->list_view->TabIndex = 6;
			this->list_view->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::list_view_SelectedIndexChanged);
			this->list_view->TextUpdate += gcnew System::EventHandler(this, &Form1::list_view_TextUpdate);
			this->list_view->Click += gcnew System::EventHandler(this, &Form1::list_view_Click);
			this->list_view->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::list_view_KeyDown);
			// 
			// view_box
			// 
			this->view_box->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->view_box->BackColor = System::Drawing::Color::White;
			this->view_box->Location = System::Drawing::Point(145, 38);
			this->view_box->Name = L"view_box";
			this->view_box->ReadOnly = true;
			this->view_box->Size = System::Drawing::Size(337, 263);
			this->view_box->TabIndex = 10;
			this->view_box->Text = L"";
			this->view_box->DoubleClick += gcnew System::EventHandler(this, &Form1::view_box_DoubleClick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(492, 391);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(30, 341);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(110, 8);
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(149, 249);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(125, 91);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(494, 391);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->view_box);
			this->Controls->Add(this->bindingNavigator1);
			this->Controls->Add(this->list_view);
			this->Controls->Add(this->search_button);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//	load-close methods

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 //	create data
			 data = gcnew DICO();
			 
			 //	Load screen
			 load_index();
			 size = gcnew float;
			 *size = 16;
			 col = gcnew Color;
			 col = Color::DarkRed;
			 count = 0;
			 flag = false;
		 }

private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {	 
			save_index();	 
			data->~DICO();	//	call destructor
		 }

	//	calling events methods

private: System::Void google_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("start http://translate.google.com/#en/vi/");
		 }

private: System::Void add_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 	FormAdd^ FA = gcnew FormAdd(data, list_view);
			 	FA->ShowDialog();
		 }

private: System::Void edit_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 FormEdit^ FE = gcnew FormEdit(data, list_view);
			 FE->ShowDialog();
			 show_view_box();
		 }

private: System::Void search_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( String::IsNullOrWhiteSpace(list_view->Text) ){
				 MessageBox::Show("Please enter a word");
				 return;
			 }

			 data->set_search_text(list_view->Text);
			 data->search();

			 if( data->search() == false ){
				MessageBox::Show(L"Cannot find '" + list_view->Text + "' in dictionary");
				hide_word_buttons();
				view_box->Clear();
				return;
			 }else{
				show_view_box();
				show_word_buttons();
			 }
			 flag = false;
			 
		 }

private: System::Void delete_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Do you really want to delete this word?",
				 "Attention!", MessageBoxButtons::YesNo,
				 MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No){
				return;	 
		 }

		 if( data->remove_current() ){
			MessageBox::Show("Delete succeeded");
			view_box->Clear();
			list_view->Items->Remove( list_view->Text );
			hide_word_buttons();
		 }
		else
			MessageBox::Show("Delete failed");
	}

private: System::Void tools_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 FormTools^ FT = gcnew FormTools(data, size, col);
			 FT->ShowDialog();

			 load_index();
			 if ( ! String::IsNullOrWhiteSpace(list_view->Text) )
				search_button_Click(sender, e);
		 }

private: System::Void view_box_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
			 if( String::IsNullOrWhiteSpace( view_box->SelectedText ) )
				 return;

			 list_view->Text = view_box->SelectedText;
			 search_button_Click(sender, e);
			 			 
		 }

	//	sub methods
private: void show_view_box(){
			 view_box->Clear();
	
			 String ^temp;
			 for( int type = NOUN; type <= PREP; type++ ){	//	print definitions
				 temp = data->_hash_table[data->get_current_index()]->get_definition(type);
				 if( !String::IsNullOrWhiteSpace(temp) ){
				view_box->SelectionColor = Color::BlueViolet;
				view_box->SelectionFont = gcnew Drawing::Font(view_box->Font->FontFamily, *size - 2, Drawing::FontStyle::Bold);
				
					switch (type){	//	print type of word
				
						case NOUN:	 view_box->AppendText(L"* Danh từ");	 break;
						case VERB:	 view_box->AppendText(L"* Động từ");	 break;
						case ADJ:	 view_box->AppendText(L"* Tính từ");	 break;
						case ADV:	 view_box->AppendText(L"* Trạng từ");	 break;
						case PREP:	 view_box->AppendText(L"* Giới từ");	 break;
						default:	 break;
					 }
					view_box->SelectionFont = gcnew Drawing::Font(view_box->Font->FontFamily, *size);
					view_box->SelectionColor = *col;
					view_box->AppendText(L"\r\n\t");
					view_box->AppendText(temp + L'\r\n');
				 }
			 }

			 view_box->SelectionColor = Color::Orchid;
			 int i;	bool appear = false;
			 for( i = 0; i <= MAX_SYN - 1; i++ ){	//	print synoyms
				temp = data->_hash_table[ data->get_current_index()]->get_synonym(i);	//	read synonym

				if( String::IsNullOrWhiteSpace(temp) )	break;	//	if there is no synonym

				if( appear == false ){	//	print label "Dong nghia" only one time
					view_box->SelectionColor = Color::OrangeRed;
					view_box->SelectionFont = gcnew Drawing::Font(view_box->Font->FontFamily, *size - 1, Drawing::FontStyle::Italic);
					view_box->AppendText(L"\r\n* Đồng nghĩa \r\n");
					appear = true;
				}

				view_box->SelectionColor = Color::Blue;		//	print synonym
				view_box->SelectionFont = gcnew Drawing::Font(view_box->Font->FontFamily, *size - 2, Drawing::FontStyle::Underline);
				view_box->AppendText(temp + L'\r\n');
			 }
		 }

private: void show_word_buttons(){
			edit_button->Enabled = true;
			delete_button->Enabled = true;
		 }

private: void hide_word_buttons(){
			edit_button->Enabled = false;
			delete_button->Enabled = false;
		 }

private: void load_index(){
			 //	clear old list
			 list_view->Items->Clear();

			 //	load list
			 String ^temp;

			StreamReader ^input = gcnew StreamReader("path.txt");
			temp = input->ReadLine();	//	read path to data folder
			input->Close();
			data->set_path_to_data_folder(temp);	//	save to data

				//	start reading index.txt
			input = gcnew StreamReader(temp + L"/index.txt");

			int n = int::Parse( input->ReadLine() );		//	read nItems
			
			for( int i = 0; i <= n - 1; i++ ){
				temp = input->ReadLine();
				list_view->Items->Add(temp);				
			}

			input->Close();
		 }

private: void save_index(){
			//	get path
			StreamReader ^input = gcnew StreamReader("path.txt");
			String ^temp = input->ReadLine();	//	read path to data folder
			input->Close();

			//	write index
			StreamWriter ^output = gcnew StreamWriter( temp + L"/index.txt" );
			output->WriteLine( list_view->Items->Count );
			
			for( int i = 0; i < list_view->Items->Count; i++ ){
				temp = list_view->GetItemText(list_view->Items[i]);
				output->WriteLine( temp );
			 }
			output->Close();
		 }

private: System::Void list_view_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (flag) {
				search_button_Click(sender, e);
			 }
			 temp = list_view->Text;
		 }
private: System::Void list_view_TextUpdate(System::Object^  sender, System::EventArgs^  e) {
			 temp = list_view->Text;
		 }
private: System::Void list_view_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter) {
				 list_view->Text = temp;
				 search_button_Click(sender, e);
			 }
			 else {
				 temp = list_view->Text;
			 }
		 }

private: System::Void list_view_Click(System::Object^  sender, System::EventArgs^  e) {
			 flag = true;
		 }
private: System::Void about_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 FormAbout^ FAb = gcnew FormAbout();
			 FAb->ShowDialog();
		 }
};
}