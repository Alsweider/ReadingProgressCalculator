#include <iostream>

int main()
{
	int programmeLoop = 1; // Keeps it running
	int dataSourceChoice = 1; // E-book reading progress by percent or e-book page number 
	double numPaperPages = 0, numEbookPages = 0, yourPaperPage = 0, yourEbookPage = 0, yourProgressPercent = 0;

	std::cout << "----------------Reading Progress Calculator----------------\n";
	std::cout << "Convert your e-book reading progress to the printed version\n";
	std::cout << "-----------------------------------------------------------\n\n";

	while (programmeLoop == 1) {

		std::cout << "Calculate printed page number from e-book page number [1]\n";
		std::cout << "Calculate printed page number from e-book progress %  [2]\n";
		std::cout << "Calculate reading progress % based on page numbers    [3]\n";
		std::cout << "\nYour input: ";
		std::cin >> dataSourceChoice;

		if (dataSourceChoice == 1) {

			std::cout << "\n\nTotal number of your e-book's pages: ";
			std::cin >> numEbookPages;

			if (std::cin.fail()) {
				std::cerr << "Input error\n";
				return EXIT_FAILURE;
			}

			std::cout << "\nYour current e-book page: ";
			std::cin >> yourEbookPage;

			if (std::cin.fail()) {
				std::cerr << "Input error\n";
				return EXIT_FAILURE;
			}

			std::cout << "\nTotal number of pages of the printed book: ";
			std::cin >> numPaperPages;

			if (std::cin.fail()) {
				std::cerr << "Input error\n";
				return EXIT_FAILURE;
			}

			yourPaperPage = (yourEbookPage / (numEbookPages / 100)) / 100 * numPaperPages;
			yourProgressPercent = yourEbookPage / (numEbookPages / 100);

			std::cout << "\nYour e-book reading progress equates to page " << yourPaperPage << " (" << yourProgressPercent << " %) " << "of the printed version of your book.\n\n";

			std::cout << "Do you want to start a new calculation? [1] Yes, [0] No: ";
			std::cin >> programmeLoop;
			std::cout << "\n\n";

			if (std::cin.fail()) {
				std::cerr << "Input error. Please choose option [1] or [2].\n";
				return EXIT_FAILURE;
			}

			std::cout << '\n';
		}
		else if (dataSourceChoice == 2) {

			std::cout << "\n\nYour e-book reading progress in %: ";
			std::cin >> yourProgressPercent;

			if (std::cin.fail()) {
				std::cerr << "Input error\n";
				return EXIT_FAILURE;
			}

			std::cout << "\nTotal number of pages of the printed book: ";
			std::cin >> numPaperPages;

			if (std::cin.fail()) {
				std::cerr << "Input error\n";
				return EXIT_FAILURE;
			}

			yourPaperPage = (numPaperPages / 100) * yourProgressPercent;
			std::cout << "\nYour e-book reading progress " << "(" << yourProgressPercent << " %) " << "equates to page " << yourPaperPage << " of the printed version of your book.\n\n";

			std::cout << "Do you want to start a new calculation? [1] Yes, [0] No: ";
			std::cin >> programmeLoop;
			std::cout << "\n\n";

			if (std::cin.fail()) {
				std::cerr << "Input error\n";
				return EXIT_FAILURE;
			}


		}
		else if (dataSourceChoice == 3) {
			std::cout << "\n\nTotal page number of your book: ";
			std::cin >> numEbookPages;

			if (std::cin.fail()) {
				std::cerr << "Input error\n";
				return EXIT_FAILURE;
			}

			std::cout << "\nYour current book page: ";
			std::cin >> yourEbookPage;

			if (std::cin.fail()) {
				std::cerr << "Input error\n";
				return EXIT_FAILURE;
			}

			yourProgressPercent = (numEbookPages / 100) * yourEbookPage;


			std::cout << "\nYour have read " << yourProgressPercent << " % of your book.\n\n";

			std::cout << "Do you want to start a new calculation? [1] Yes, [0] No: ";
			std::cin >> programmeLoop;
			std::cout << "\n\n";

			if (std::cin.fail()) {
				std::cerr << "Input error\n";
				return EXIT_FAILURE;
			}

		}

		else {
			std::cerr << "Input error. Please choose option [1] or [2].\n";
			return EXIT_FAILURE;
		}


	} // End of programme loop

	return EXIT_SUCCESS;

}

