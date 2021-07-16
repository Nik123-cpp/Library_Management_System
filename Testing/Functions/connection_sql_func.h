#pragma once


namespace sql_connection_func {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Security::Cryptography;

	/// <summary>
	/// Function for setting username password to establish connection to MySQL server
	/// </summary>
	/// <returns>
	/// String for connection to sql database with username and password to database
	/// </returns>
	String^ sql_user_pass_string();

	/*
	/// <summary>
	/// Function for filling Member Datagrid in List of Member page
	/// </summary>
	/// <param name="dataGridView">
	/// Passing the dataGridView in which data needs to be presented
	/// </param>
	void fill_datagrid_member(System::Windows::Forms::DataGridView^ dataGridView);

	/// <summary>
	/// Function for filling Member Datagrid in List of Member page with filtered results
	/// </summary>
	/// <param name="str_list_detail_search_person">
	/// Filtering on the basis of what has been chosen as a filter
	/// </param>
	/// <param name="search_bar_text">
	/// The text in the search bar of which similar search results need to be found
	/// </param>
	/// <param name="dataGridView">
	/// Passing the dataGridView in which data needs to be presented
	/// </param>
	void fill_datagrid_members_filtered(String^ str_list_detail_search_person, String^ search_bar_text, System::Windows::Forms::DataGridView^ dataGridView);

	/// <summary>
	/// Function for filling Book Datagrid in List of Books page
	/// </summary>
	/// <param name="dataGridView">
	/// Passing the dataGridView in which data needs to be presented
	/// </param>
	void fill_datagrid_book(System::Windows::Forms::DataGridView^ dataGridView);

	/// <summary>
	/// Function for filling Book Datagrid in List of Books page with filtered results
	/// </summary>
	/// <param name="str_list_detail_search_book">
	/// Filtering on the basis of what has been chosen as a filter
	/// </param>
	/// <param name="search_bar_text">
	/// The text in the search bar of which similar search results need to be found
	/// </param>
	/// <param name="dataGridView">
	/// Passing the dataGridView in which data needs to be presented
	/// </param>
	void fill_datagrid_books_filtered(String^ str_list_detail_search_book, String^ search_bar_text, System::Windows::Forms::DataGridView^ dataGridView);

	/// <summary>
	/// Function for filling Borrow History Datagrid in Borrow History page
	/// </summary>
	/// <param name="dataGridView">
	/// Passing the dataGridView in which data needs to be presented
	/// </param>
	/// <param name="is_librarian_input">
	/// It is the input argument for the boolean value, if the User is a librarian or not
	/// </param>
	/// <param name="transfer_id_input">
	/// It is the input argument for the ID to be transfered for presenting data if needed
	/// </param>
	void fill_datagrid_borrow_history(System::Windows::Forms::DataGridView^ dataGridView, bool is_librarian_input, String^ transfer_id_input);

	/// <summary>
	/// Function for filling Borrow History Datagrid in Borrow History page with filtered results
	/// </summary>
	/// <param name="str_list_detail_search_order">
	/// Filtering on the basis of what has been chosen as a filter
	/// </param>
	/// <param name="search_bar_text">
	/// The text in the search bar of which similar search results need to be found
	/// </param>
	/// <param name="dataGridView">
	/// Passing the dataGridView in which data needs to be presented
	/// </param>
	/// <param name="is_librarian_input">
	/// It is the input argument for the boolean value, if the User is a librarian or not
	/// </param>
	/// <param name="transfer_id_input">
	/// It is the input argument for the ID to be transfered for presenting data if needed
	/// </param>
	void fill_datagrid_borrow_history_filtered(String^ str_list_detail_search_order, String^ search_bar_text, System::Windows::Forms::DataGridView^ dataGridView, bool is_librarian_input, String^ transfer_id_input);
	*/
	/// <summary>
	/// Function to implement for the password to be stored in a hashed format
	/// </summary>
	/// <param name="input_id">
	/// String for ID of the user
	/// </param>
	/// <param name="input_pass">
	/// String for Password that needs to be hashed
	/// </param>
	/// <returns>
	/// Hashed String
	/// </returns>
	String^ password_hasher(String^ input_id, String^ input_pass);
}