#pragma once
#include "connection_sql_func.h"
#include "profile_order.h"
namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	public ref class profile_student : public System::Windows::Forms::Form
	{
	public:
		String^ transfer_id_student;
		int student_no_book_stat;

	private: System::Windows::Forms::TextBox^ member_stat_text;
	public:
	private: System::Windows::Forms::Label^ member_stat_label;
		   bool is_librarian;
	public:
		profile_student(void);
		profile_student(String^ label_text_id, bool is_librarian_input);

	protected:
		~profile_student();

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	private: System::Windows::Forms::Label^ name_lbl;
	private: System::Windows::Forms::Label^ dob_lbl;
	private: System::Windows::Forms::Label^ profession_lbl;

	private: System::Windows::Forms::Label^ email_id_lbl;
	private: System::Windows::Forms::Label^ mobile_no_lbl;
	private: System::Windows::Forms::TextBox^ address_txt;
	private: System::Windows::Forms::Label^ address_lbl;
	private: System::Windows::Forms::TextBox^ mobile_no_txt;
	private: System::Windows::Forms::TextBox^ name_txt;
	private: System::Windows::Forms::TextBox^ email_id_txt;
	private: System::Windows::Forms::TextBox^ profession_txt;
	private: System::Windows::Forms::TextBox^ student_id_txt;
	private: System::Windows::Forms::TextBox^ dob_student_txt;
	private: System::Windows::Forms::Button^ delete_profile_button;
	private: System::Windows::Forms::Button^ update_profile_button;
	private: System::Windows::Forms::Button^ confirm_change_button;
	private: System::Windows::Forms::ComboBox^ profession_selector;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Open;
	private: System::Windows::Forms::Button^ back_button;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(profile_student::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->profession_selector = (gcnew System::Windows::Forms::ComboBox());
			this->dob_student_txt = (gcnew System::Windows::Forms::TextBox());
			this->student_id_txt = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->dob_lbl = (gcnew System::Windows::Forms::Label());
			this->profession_lbl = (gcnew System::Windows::Forms::Label());
			this->email_id_lbl = (gcnew System::Windows::Forms::Label());
			this->mobile_no_lbl = (gcnew System::Windows::Forms::Label());
			this->address_txt = (gcnew System::Windows::Forms::TextBox());
			this->address_lbl = (gcnew System::Windows::Forms::Label());
			this->mobile_no_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->email_id_txt = (gcnew System::Windows::Forms::TextBox());
			this->profession_txt = (gcnew System::Windows::Forms::TextBox());
			this->delete_profile_button = (gcnew System::Windows::Forms::Button());
			this->update_profile_button = (gcnew System::Windows::Forms::Button());
			this->confirm_change_button = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Open = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->member_stat_label = (gcnew System::Windows::Forms::Label());
			this->member_stat_text = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->member_stat_text);
			this->groupBox1->Controls->Add(this->member_stat_label);
			this->groupBox1->Controls->Add(this->profession_selector);
			this->groupBox1->Controls->Add(this->dob_student_txt);
			this->groupBox1->Controls->Add(this->student_id_txt);
			this->groupBox1->Controls->Add(this->dateTimePicker);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->name_lbl);
			this->groupBox1->Controls->Add(this->dob_lbl);
			this->groupBox1->Controls->Add(this->profession_lbl);
			this->groupBox1->Controls->Add(this->email_id_lbl);
			this->groupBox1->Controls->Add(this->mobile_no_lbl);
			this->groupBox1->Controls->Add(this->address_txt);
			this->groupBox1->Controls->Add(this->address_lbl);
			this->groupBox1->Controls->Add(this->mobile_no_txt);
			this->groupBox1->Controls->Add(this->name_txt);
			this->groupBox1->Controls->Add(this->email_id_txt);
			this->groupBox1->Controls->Add(this->profession_txt);
			this->groupBox1->Location = System::Drawing::Point(141, 14);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBox1->Size = System::Drawing::Size(598, 649);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Student Profile";
			// 
			// profession_selector
			// 
			this->profession_selector->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->profession_selector->FormattingEnabled = true;
			this->profession_selector->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Student", L"Faculty", L"Alumini" });
			this->profession_selector->Location = System::Drawing::Point(430, 228);
			this->profession_selector->Name = L"profession_selector";
			this->profession_selector->Size = System::Drawing::Size(146, 28);
			this->profession_selector->TabIndex = 19;
			this->profession_selector->Visible = false;
			// 
			// dob_student_txt
			// 
			this->dob_student_txt->Location = System::Drawing::Point(256, 149);
			this->dob_student_txt->Name = L"dob_student_txt";
			this->dob_student_txt->ReadOnly = true;
			this->dob_student_txt->Size = System::Drawing::Size(150, 26);
			this->dob_student_txt->TabIndex = 18;
			// 
			// student_id_txt
			// 
			this->student_id_txt->Location = System::Drawing::Point(256, 42);
			this->student_id_txt->Name = L"student_id_txt";
			this->student_id_txt->ReadOnly = true;
			this->student_id_txt->Size = System::Drawing::Size(146, 26);
			this->student_id_txt->TabIndex = 17;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker->Location = System::Drawing::Point(430, 148);
			this->dateTimePicker->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(146, 26);
			this->dateTimePicker->TabIndex = 16;
			this->dateTimePicker->Visible = false;
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Location = System::Drawing::Point(54, 89);
			this->name_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(51, 20);
			this->name_lbl->TabIndex = 0;
			this->name_lbl->Text = L"Name";
			// 
			// dob_lbl
			// 
			this->dob_lbl->AutoSize = true;
			this->dob_lbl->Location = System::Drawing::Point(54, 158);
			this->dob_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dob_lbl->Name = L"dob_lbl";
			this->dob_lbl->Size = System::Drawing::Size(99, 20);
			this->dob_lbl->TabIndex = 1;
			this->dob_lbl->Text = L"Date of Birth";
			// 
			// profession_lbl
			// 
			this->profession_lbl->AutoSize = true;
			this->profession_lbl->Location = System::Drawing::Point(54, 237);
			this->profession_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->profession_lbl->Name = L"profession_lbl";
			this->profession_lbl->Size = System::Drawing::Size(84, 20);
			this->profession_lbl->TabIndex = 2;
			this->profession_lbl->Text = L"Profession";
			// 
			// email_id_lbl
			// 
			this->email_id_lbl->AutoSize = true;
			this->email_id_lbl->Location = System::Drawing::Point(54, 317);
			this->email_id_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->email_id_lbl->Name = L"email_id_lbl";
			this->email_id_lbl->Size = System::Drawing::Size(66, 20);
			this->email_id_lbl->TabIndex = 3;
			this->email_id_lbl->Text = L"Email Id";
			// 
			// mobile_no_lbl
			// 
			this->mobile_no_lbl->AutoSize = true;
			this->mobile_no_lbl->Location = System::Drawing::Point(54, 397);
			this->mobile_no_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->mobile_no_lbl->Name = L"mobile_no_lbl";
			this->mobile_no_lbl->Size = System::Drawing::Size(83, 20);
			this->mobile_no_lbl->TabIndex = 4;
			this->mobile_no_lbl->Text = L"Mobile No.";
			// 
			// address_txt
			// 
			this->address_txt->Location = System::Drawing::Point(256, 472);
			this->address_txt->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->address_txt->Name = L"address_txt";
			this->address_txt->ReadOnly = true;
			this->address_txt->Size = System::Drawing::Size(148, 26);
			this->address_txt->TabIndex = 11;
			// 
			// address_lbl
			// 
			this->address_lbl->AutoSize = true;
			this->address_lbl->Location = System::Drawing::Point(54, 477);
			this->address_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->address_lbl->Name = L"address_lbl";
			this->address_lbl->Size = System::Drawing::Size(68, 20);
			this->address_lbl->TabIndex = 5;
			this->address_lbl->Text = L"Address";
			// 
			// mobile_no_txt
			// 
			this->mobile_no_txt->Location = System::Drawing::Point(256, 392);
			this->mobile_no_txt->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->mobile_no_txt->Name = L"mobile_no_txt";
			this->mobile_no_txt->ReadOnly = true;
			this->mobile_no_txt->Size = System::Drawing::Size(148, 26);
			this->mobile_no_txt->TabIndex = 10;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(256, 85);
			this->name_txt->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->name_txt->Name = L"name_txt";
			this->name_txt->ReadOnly = true;
			this->name_txt->Size = System::Drawing::Size(148, 26);
			this->name_txt->TabIndex = 6;
			// 
			// email_id_txt
			// 
			this->email_id_txt->Location = System::Drawing::Point(256, 312);
			this->email_id_txt->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->email_id_txt->Name = L"email_id_txt";
			this->email_id_txt->ReadOnly = true;
			this->email_id_txt->Size = System::Drawing::Size(148, 26);
			this->email_id_txt->TabIndex = 9;
			// 
			// profession_txt
			// 
			this->profession_txt->Location = System::Drawing::Point(256, 232);
			this->profession_txt->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->profession_txt->Name = L"profession_txt";
			this->profession_txt->ReadOnly = true;
			this->profession_txt->Size = System::Drawing::Size(148, 26);
			this->profession_txt->TabIndex = 8;
			// 
			// delete_profile_button
			// 
			this->delete_profile_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->delete_profile_button->Location = System::Drawing::Point(932, 66);
			this->delete_profile_button->Name = L"delete_profile_button";
			this->delete_profile_button->Size = System::Drawing::Size(202, 45);
			this->delete_profile_button->TabIndex = 19;
			this->delete_profile_button->Text = L"DELETE PROFILE";
			this->delete_profile_button->UseVisualStyleBackColor = true;
			this->delete_profile_button->Click += gcnew System::EventHandler(this, &profile_student::delete_profile_button_Click);
			// 
			// update_profile_button
			// 
			this->update_profile_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->update_profile_button->Location = System::Drawing::Point(932, 9);
			this->update_profile_button->Name = L"update_profile_button";
			this->update_profile_button->Size = System::Drawing::Size(206, 49);
			this->update_profile_button->TabIndex = 20;
			this->update_profile_button->Text = L"UPDATE PROFILE";
			this->update_profile_button->UseVisualStyleBackColor = true;
			this->update_profile_button->Click += gcnew System::EventHandler(this, &profile_student::update_profile_button_Click);
			// 
			// confirm_change_button
			// 
			this->confirm_change_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->confirm_change_button->Location = System::Drawing::Point(932, 118);
			this->confirm_change_button->Name = L"confirm_change_button";
			this->confirm_change_button->Size = System::Drawing::Size(202, 68);
			this->confirm_change_button->TabIndex = 21;
			this->confirm_change_button->Text = L"MAKE CHANGES";
			this->confirm_change_button->UseVisualStyleBackColor = true;
			this->confirm_change_button->Visible = false;
			this->confirm_change_button->Click += gcnew System::EventHandler(this, &profile_student::confirm_change_button_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Open });
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(687, 558);
			this->dataGridView1->TabIndex = 20;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &profile_student::dataGridView1_CellContentClick);
			// 
			// Open
			// 
			this->Open->HeaderText = L"Profile";
			this->Open->MinimumWidth = 8;
			this->Open->Name = L"Open";
			this->Open->ReadOnly = true;
			this->Open->Text = L"Open";
			this->Open->UseColumnTextForButtonValue = true;
			this->Open->Width = 59;
			// 
			// back_button
			// 
			this->back_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_button.Image")));
			this->back_button->Location = System::Drawing::Point(12, 832);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(81, 45);
			this->back_button->TabIndex = 22;
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Click += gcnew System::EventHandler(this, &profile_student::back_button_Click);
			// 
			// member_stat_label
			// 
			this->member_stat_label->AutoSize = true;
			this->member_stat_label->Location = System::Drawing::Point(101, 582);
			this->member_stat_label->Name = L"member_stat_label";
			this->member_stat_label->Size = System::Drawing::Size(147, 20);
			this->member_stat_label->TabIndex = 20;
			this->member_stat_label->Text = L"Membership Status";
			// 
			// member_stat_text
			// 
			this->member_stat_text->Location = System::Drawing::Point(343, 586);
			this->member_stat_text->Name = L"member_stat_text";
			this->member_stat_text->ReadOnly = true;
			this->member_stat_text->Size = System::Drawing::Size(142, 26);
			this->member_stat_text->TabIndex = 21;
			// 
			// profile_student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1149, 909);
			this->Controls->Add(this->back_button);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->confirm_change_button);
			this->Controls->Add(this->update_profile_button);
			this->Controls->Add(this->delete_profile_button);
			this->Controls->Add(this->groupBox1);
			this->Name = L"profile_student";
			this->Text = L"profile_student";
			this->Load += gcnew System::EventHandler(this, &profile_student::profile_student_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void profile_student_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void update_profile_button_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void delete_profile_button_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void confirm_change_button_Click(System::Object^ sender, System::EventArgs^ e);

	private: void fill_data_grid();

	private: System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

};
}
