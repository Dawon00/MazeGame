#include <iostream>
#include <conio.h>

using namespace std;

/*
0: ��
1: ��
2: ������
3: ������
*/
void SetMaze(char Maze[21][21])
{
	 
	strcpy_s(Maze[0],  "21100000000000000000");
	strcpy_s(Maze[1],  "00111111111100000000");
	strcpy_s(Maze[2],  "00100010000111111100");
	strcpy_s(Maze[3],  "01100010000000000100");
	strcpy_s(Maze[4],  "01000011110001111100");
	strcpy_s(Maze[5],  "01000000001110000000");
	strcpy_s(Maze[6],  "01100000001000000000");
	strcpy_s(Maze[7],  "00100000001111111000");
	strcpy_s(Maze[8],  "00000000000000001000");
	strcpy_s(Maze[9],  "01000000000000001000");
	strcpy_s(Maze[10], "01100000000001111000");
	strcpy_s(Maze[11], "01111001111111100000");
	strcpy_s(Maze[12], "00001111000000111000");
	strcpy_s(Maze[13], "01111000000000001000");
	strcpy_s(Maze[14], "01000000000000001000");
	strcpy_s(Maze[15], "01111110000111111000");
	strcpy_s(Maze[16], "00000010000100000000");
	strcpy_s(Maze[17], "01111110000100000000");
	strcpy_s(Maze[18], "01000000000111000000");
	strcpy_s(Maze[19], "11000000000001111113");

}

void Output(char Maze[21][21])
{
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			if (Maze[i][j] == '0')
				cout << "��";

			else if (Maze[i][j] == '1')
				cout << "  ";

			else if (Maze[i][j] == '2')
				cout << "��";
			else if (Maze[i][j] == '3')
				cout << "��";

		}
		cout << endl;
	}
}

int main() 
{
	//20 *20 �̷θ� ������ش�
	char strMaze[21][21] = {};
	//�̷θ� �����Ѵ�
	SetMaze(strMaze);

	while (true)
	{
		system("cls");
		//�̷θ� ����Ѵ�
		Output(strMaze);
		cout << "w: �� s:�Ʒ� a:���� d: ������ q : ���� : ";
		char cinput = _getch();//�ٷ� �����ϵ���
		
		if (cinput == 'q' || cinput == 'Q')
			break;

	}


	

	return 0;
	
}