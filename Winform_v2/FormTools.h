#pragma once

#include "DICO.h"

namespace Winform_v2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormTools
	/// </summary>
	public ref class FormTools : public System::Windows::Forms::Form
	{
	private:
		DICO ^data;
		float ^size, currentSize;
		Color ^col,	currentColor;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  update_button;


	public:
		FormTools(void){
			InitializeComponent();
		}

		FormTools(DICO ^data, float ^size, Color ^col){
			this->data = data;
			this->currentSize = *size;
			this->currentColor = *col;

			this->size = size;
			this->col = col;

			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormTools()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  path_box;
	private: System::Windows::Forms::Button^  change_button;
	private: System::Windows::Forms::Button^  default_path;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;




	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  preview_label;
	private: System::Windows::Forms::TextBox^  color_box;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  browser_color_button;
	private: System::Windows::Forms::ComboBox^  font_size;
	private: System::Windows::Forms::Button^  ok_button;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormTools::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->path_box = (gcnew System::Windows::Forms::TextBox());
			this->change_button = (gcnew System::Windows::Forms::Button());
			this->default_path = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->preview_label = (gcnew System::Windows::Forms::Label());
			this->color_box = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->browser_color_button = (gcnew System::Windows::Forms::Button());
			this->font_size = (gcnew System::Windows::Forms::ComboBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->update_button = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Path";
			// 
			// path_box
			// 
			this->path_box->Location = System::Drawing::Point(48, 37);
			this->path_box->Name = L"path_box";
			this->path_box->ReadOnly = true;
			this->path_box->Size = System::Drawing::Size(231, 20);
			this->path_box->TabIndex = 1;
			// 
			// change_button
			// 
			this->change_button->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"change_button.Image")));
			this->change_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->change_button->Location = System::Drawing::Point(123, 63);
			this->change_button->Name = L"change_button";
			this->change_button->Size = System::Drawing::Size(75, 23);
			this->change_button->TabIndex = 2;
			this->change_button->Text = L"Browse";
			this->change_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->change_button->UseVisualStyleBackColor = true;
			this->change_button->Click += gcnew System::EventHandler(this, &FormTools::change_button_Click);
			// 
			// default_path
			// 
			this->default_path->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"default_path.Image")));
			this->default_path->Location = System::Drawing::Point(204, 63);
			this->default_path->Name = L"default_path";
			this->default_path->Size = System::Drawing::Size(75, 23);
			this->default_path->TabIndex = 3;
			this->default_path->Text = L"Default";
			this->default_path->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->default_path->UseVisualStyleBackColor = true;
			this->default_path->Click += gcnew System::EventHandler(this, &FormTools::default_path_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(293, 243);
			this->tabControl1->TabIndex = 4;
			this->tabControl1->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->path_box);
			this->tabPage1->Controls->Add(this->default_path);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->change_button);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(285, 217);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"General";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->color_box);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->browser_color_button);
			this->tabPage2->Controls->Add(this->font_size);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(285, 217);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Font and Color";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->preview_label);
			this->groupBox1->Location = System::Drawing::Point(6, 115);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(273, 91);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Preview";
			// 
			// preview_label
			// 
			this->preview_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->preview_label->AutoSize = true;
			this->preview_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->preview_label->Location = System::Drawing::Point(78, 27);
			this->preview_label->Name = L"preview_label";
			this->preview_label->Size = System::Drawing::Size(45, 13);
			this->preview_label->TabIndex = 5;
			this->preview_label->Text = L"Preview";
			// 
			// color_box
			// 
			this->color_box->BackColor = System::Drawing::Color::Black;
			this->color_box->Location = System::Drawing::Point(74, 36);
			this->color_box->Name = L"color_box";
			this->color_box->ReadOnly = true;
			this->color_box->Size = System::Drawing::Size(100, 20);
			this->color_box->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Color";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Size";
			// 
			// browser_color_button
			// 
			this->browser_color_button->Location = System::Drawing::Point(180, 36);
			this->browser_color_button->Name = L"browser_color_button";
			this->browser_color_button->Size = System::Drawing::Size(52, 21);
			this->browser_color_button->TabIndex = 13;
			this->browser_color_button->Text = L"...";
			this->browser_color_button->UseVisualStyleBackColor = true;
			this->browser_color_button->Click += gcnew System::EventHandler(this, &FormTools::browser_color_button_Click);
			// 
			// font_size
			// 
			this->font_size->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->font_size->FormattingEnabled = true;
			this->font_size->Items->AddRange(gcnew cli::array< System::Object^  >(13) {L"8", L"9", L"10", L"11", L"12", L"14", L"16", 
				L"18", L"20", L"24", L"26", L"28", L"36"});
			this->font_size->Location = System::Drawing::Point(74, 10);
			this->font_size->Name = L"font_size";
			this->font_size->Size = System::Drawing::Size(100, 21);
			this->font_size->TabIndex = 12;
			this->font_size->SelectedIndexChanged += gcnew System::EventHandler(this, &FormTools::font_size_SelectedIndexChanged);
			// 
			// ok_button
			// 
			this->ok_button->Location = System::Drawing::Point(230, 261);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(75, 23);
			this->ok_button->TabIndex = 5;
			this->ok_button->Text = L"OK";
			this->ok_button->UseVisualStyleBackColor = true;
			this->ok_button->Click += gcnew System::EventHandler(this, &FormTools::ok_button_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->richTextBox1);
			this->tabPage3->Controls->Add(this->update_button);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(285, 217);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Update";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// update_button
			// 
			this->update_button->Location = System::Drawing::Point(167, 188);
			this->update_button->Name = L"update_button";
			this->update_button->Size = System::Drawing::Size(112, 23);
			this->update_button->TabIndex = 0;
			this->update_button->Text = L"Update New Data";
			this->update_button->UseVisualStyleBackColor = true;
			this->update_button->Click += gcnew System::EventHandler(this, &FormTools::update_button_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 22);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(273, 62);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"Nếu chưa hài lòng với bộ dữ liệu của từ điển,\nhãy cập nhật ngay bộ dữ liệu mới nh" 
				L"ất trên trang web\ncủa chúng tôi.";
			// 
			// FormTools
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(317, 296);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->tabControl1);
			this->Name = L"FormTools";
			this->Text = L"FormTools";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormTools::FormTools_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormTools::FormTools_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

//	load-close methods
private: System::Void FormTools_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 	 
		 }

private: System::Void FormTools_Load(System::Object^  sender, System::EventArgs^  e) {
			path_box->Text = data->get_path_to_data_folder();
			color_box->BackColor = currentColor;
			preview_label->ForeColor = currentColor;
		 }

private: System::Void ok_button_Click(System::Object^  sender, System::EventArgs^  e) {
		 //	save path to data
		  data->set_path_to_data_folder(path_box->Text);

		 //	write new path to file
		 StreamWriter ^output = gcnew StreamWriter("path.txt");
		 output->WriteLine( path_box->Text );
		 output->Close();
		
		 //	save format
		 *size = currentSize;
		 *col = currentColor;

		 this->Close();
		 }

//	calling events methods
			//	edit path tab
private: System::Void change_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 folderBrowserDialog1->ShowDialog();
			 path_box->Text = folderBrowserDialog1->SelectedPath;
		 }

private: System::Void default_path_Click(System::Object^  sender, System::EventArgs^  e) {
			 path_box->Text = DEFAULT_PATH;
		 }

			//	edit format tab
private: System::Void browser_color_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 colorDialog1->ShowDialog();
			 color_box->BackColor = colorDialog1->Color;
			 preview_label->ForeColor = colorDialog1->Color;
			 currentColor = colorDialog1->Color;
		 }

private: System::Void font_size_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 currentSize = float::Parse( font_size->Text );
		 preview_label->Font = gcnew System::Drawing::Font(preview_label->Font->Name, 
		 currentSize, preview_label->Font->Style, preview_label->Font->Unit);
		 
		 }

private: System::Void update_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("start https://www.mediafire.com/folder/5wx146ttdwpkd/Dictionary_4_11_2013");
		 }
};
}
