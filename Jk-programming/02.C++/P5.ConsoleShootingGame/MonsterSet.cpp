#include "stdafx.h"
#include "MonsterSet.h"


MonsterSet::MonsterSet()
{
}


MonsterSet::~MonsterSet()
{
}



void MonsterSet::MonsterNumber()
{
	for (int y = 0; y < ((m_ScreenPoint.Y) / 4); y++)
	{
		for (int x = 0; x < ((m_ScreenPoint.X) / 2); x++)
		{
			ScreenPixel_bool[y][x] = true;
			SetPixel({ y, x }, '*');
		}
	}
}

void MonsterSet::MonsterMove_RL()
{
	if (true == monster_LR)
	{
		for (int y = 0; y < ((m_ScreenPoint.Y) / 4); ++y)
		{
			for (int x = 0; x < ((m_ScreenPoint.X) / 2); ++x)
			{
				if (true == ScreenPixel_bool[y][x])
				{
					Playercuser(y, x);
					SetPixel({ ((Monster_X)+x), ((Monster_Y)+y) }, '*');
				}
				else if (false == ScreenPixel_bool[y][x])
				{
					Playercuser(y, x);
					SetPixel({ ((Monster_X)+x), ((Monster_Y)+y) }, ' ');
				}
			}
		}
		++Monster_X;

	}
	else if (false == monster_LR)
	{
		for (int y = 0; y < ((m_ScreenPoint.Y) / 4); ++y)
		{
			for (int x = 0; x < ((m_ScreenPoint.X) / 2); ++x)
			{
				if (true == ScreenPixel_bool[y][x])
				{
					Playercuser(y, x);
					SetPixel({ ((Monster_X)+x), ((Monster_Y)+y) }, '*');
				}
				else if (false == ScreenPixel_bool[y][x])
				{
					Playercuser(y, x);
					SetPixel({ ((Monster_X)+x), ((Monster_Y)+y) }, ' ');
				}
			}
		}
		--Monster_X;
	}

}
void MonsterSet::Monsterdown()
{
	if (true == monster_LR)
	{
		for (int count = 0; count < ((m_ScreenPoint.Y) / 4); ++count)
		{
			if ('*' == m_ScreenPixel[count][(m_ScreenPoint.X) - 1])
			{
				for (int x = 0; x < ((m_ScreenPoint.X) / 2); ++x)
				{
					if (true == ScreenPixel_bool[count][x])
					{
						Playercuser(count, x);
						SetPixel({ ((Monster_X)+x - 1), Monster_Y + 1 }, '*');
					}
					else if (false == ScreenPixel_bool[count][x])
					{
						Playercuser(count, x);
						SetPixel({ ((Monster_X)+x - 1), ((Monster_Y)+1) }, ' ');
					}
				}
				++Monster_Y;
				monster_LR = false;
				MonsterMove();
				return;
			}
		}

	}
	else if (false == monster_LR)
	{
		for (int count = 0; count < ((m_ScreenPoint.Y) / 4); ++count)
		{
			if ('*' == m_ScreenPixel[count][0])
			{
				for (int x = 0; x <((m_ScreenPoint.X) / 2); ++x)
				{
					if (true == ScreenPixel_bool[count][x])
					{
						Playercuser(count, x);
						SetPixel({ ((Monster_X)+x + 1), Monster_Y + 1 }, '*');
					}
					else if (false == ScreenPixel_bool[count][x])
					{
						Playercuser(count, x);
						SetPixel({ ((Monster_X)+x + 1), Monster_Y + 1 }, ' ');
					}

				}
				++Monster_Y;
				monster_LR = true;
				MonsterMove();
				return;
			}
		}

	}
}
void MonsterSet::delay(clock_t n)
{
	clock_t start = clock();
	while (clock() - start < n);
}
void MonsterSet::MonsterMove()
{
	//	delay(700);
	MonsterMove_RL();
	Monsterdown();

}
void MonsterSet::Playercuser(int _y, int _x)
{
	if ('P' == m_ScreenPixel[_y][_x])
	{
		return;
	}
	else {}
}


//void MonsterSet::MonsterDeath()
//{
//	for (int y = 0; y < m_ScreenPoint.Y; y++)
//	{
//		for (int x = 0; x < m_ScreenPoint.X; x++)
//		{
//			if ('*' == m_ScreenPixel[y][x])
//			{
//				if ('@' == m_ScreenPixel[y+1][x])
//				{
//					ScreenPixel_bool[y][x] = false;
//					//_getch();
//				}
//			}
//		}
//	}
//
//}