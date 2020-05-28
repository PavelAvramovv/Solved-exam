#include <iostream>
#include <string>
#include <vector>

struct Book
{
	Book(const std::string& name,
		const std::vector<std::string>& vAutors,
		const std::string& ISBN,
		const std::string& editor,
		const int& pages,
		const int& year,
		const int availableItems) : strName(name),
		vAllAutors(vAutors),
		strISBN(ISBN),
		strEditor(editor),
		nPages(pages),
		nYear(year),
		nAvailableItems(availableItems)

	{
	}

	~Book() = default;

	// Members
	std::string strName;
	std::vector<std::string> vAllAutors;
	std::string strISBN;
	std::string strEditor;
	int nPages;
	int nYear;
	int nAvailableItems;

};

int main()
{
	std::vector<std::string> vAllAutors;
	vAllAutors.push_back("Pesho");
	vAllAutors.push_back("Gosho");

	Book oOldBook("FirstBook", vAllAutors, "193939", "EditorName", 500, 1997, 10);
	Book oNewBook("SecondBook", vAllAutors, "2939392", "EditorName", 568, 2001, 30);

	std::vector <Book> vAllBooks;
	vAllBooks.push_back(oOldBook);
	vAllBooks.push_back(oNewBook);

	for (int i = 0; i < vAllBooks.size(); i++)
	{
		if (vAllBooks[i].nYear > 2000)
		{
			std::cout << "Book name: " << vAllBooks[i].strName << std::endl;
			std::cout << "Book ISBN: " << vAllBooks[i].strISBN << std::endl;
			std::cout << "Book editor: " << vAllBooks[i].strEditor << std::endl;
			std::cout << "Pages: " << vAllBooks[i].nPages << std::endl;
			std::cout << "Year: " << vAllBooks[i].nYear << std::endl;
			std::cout << "Available items: " << vAllBooks[i].nAvailableItems << std::endl;
			std::cout << "Autors: ";

			const size_t size = vAllBooks[i].vAllAutors.size();
			for (int k = 0; k < size; k++)
			{
				if (k + 1 == vAllBooks[i].vAllAutors.size())
					std::cout << vAllBooks[i].vAllAutors[k] << std::endl;
				else
					std::cout << vAllBooks[i].vAllAutors[k] << ", ";
			}
		}
	}

}