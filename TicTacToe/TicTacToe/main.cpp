#include <iostream>

using namespace std;

int wincheck();
void board();

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int main()
{
	int player = 1, i, choice;

	char mark;
	do
	{
		board();
		player = (player % 2) ? 1:2;

		std::cout << "Player " << player << ", pick a number!";
		std:cin >> choice;


		mark = (player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')
			square[1] = mark;

		else if (choice == 2 && square[2] == '2')
			square[2] = mark;

		else if (choice == 3 && square[3] == '3')
			square[3] = mark;

		else if (choice == 4 && square[4] == '4')
			square[4] = mark;

		else if (choice == 5 && square[5] == '5')
			square[5] = mark;

		else if (choice == 6 && square[6] == '6')
			square[6] = mark;

		else if (choice == 7 && square[7] == '7')
			square[7] = mark;

		else if (choice == 8 && square[8] == '8')
			square[8] = mark;

		else if (choice == 9 && square[9] == '9')
			square[9] = mark;

		else
		{
			std::cout << "Invalid Input" << std::endl;
			player--;
			cin.ignore();
			cin.get();
		}



		i = wincheck();

		board();
		if (i == 1)
			std::cout << "A winner is you!" << std::endl;
		else if (i == 0)
			std::cout << "Bummer, man." << std::endl;

		cin.ignore();
		cin.get();

		player++;
	} while (i == -1);
	
	return 0;

}

//wincheck soultions
int wincheck()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;

	return -1;

	

}

//board solutions
void board()
{
	std::cout << "    |    |    " << std::endl;
	//top of board
	std::cout << " " << square[1] << "  |" << " " << square[2] << "  |" << " " << square[3] << std::endl;
	std::cout << "____|____|____" << std::endl;
	std::cout << "    |    |    " << std::endl;
	//middle of board
	std::cout << " " << square[4] << "  |" << " " << square[5] << "  |" << " " << square[6] << std::endl;
	std::cout << "____|____|____" << std::endl;
	std::cout << "    |    |    " << std::endl;
	//bottom of board
	std::cout << " " << square[7] << "  |" << " " << square[8] << "  |" << " " << square[9] << std::endl;
	std::cout << "    |    |    " << std::endl;
}