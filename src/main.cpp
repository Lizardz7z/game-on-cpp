#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Vars.h"
#include "Engine.h"
#include "menu.h"
#include "cutscenes.h"

int main() {
	window.create(sf::VideoMode(1600, 900), "Anniversary 2nd");
	window.setFramerateLimit(60);

	{
		p1_f1.setPointCount(4); //chest plate 3
		p1_f1.setPoint(0, sf::Vector2f(791, 0));
		p1_f1.setPoint(1, sf::Vector2f(791, 300));
		p1_f1.setPoint(2, sf::Vector2f(1014, 300));
		p1_f1.setPoint(3, sf::Vector2f(1014, 0));
		chest_plate3 = p1_f1.getGlobalBounds();

		p1_f1.setPointCount(4); // chest plate 4
		p1_f1.setPoint(0, sf::Vector2f(0, 0));
		p1_f1.setPoint(1, sf::Vector2f(0, 160));
		p1_f1.setPoint(2, sf::Vector2f(89, 160));
		p1_f1.setPoint(3, sf::Vector2f(89, 0));
		chest_plate4 = p1_f1.getGlobalBounds();

		p1_f1.setPointCount(4); // chest plate 5
		p1_f1.setPoint(0, sf::Vector2f(1090, 372));
		p1_f1.setPoint(1, sf::Vector2f(1090, 500));
		p1_f1.setPoint(2, sf::Vector2f(1260, 500));
		p1_f1.setPoint(3, sf::Vector2f(1260, 372));
		chest_plate5 = p1_f1.getGlobalBounds();

		
		p1_f1.setPointCount(4); // flower plate 9
		p1_f1.setPoint(0, sf::Vector2f(508, 169));
		p1_f1.setPoint(1, sf::Vector2f(508, 563));
		p1_f1.setPoint(2, sf::Vector2f(695, 563));
		p1_f1.setPoint(3, sf::Vector2f(695, 169));
		flowers_plate9 = p1_f1.getGlobalBounds();

		show_but.push_back(chest_plate3);
		show_but.push_back(chest_plate4);
		show_but.push_back(chest_plate5);
		show_but.push_back(flowers_plate9);

		{ //барьеры plate1
			p1_f1.setPointCount(6); //plate 1 дерево сбоку
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(136, 0));
			p1_f1.setPoint(2, sf::Vector2f(150, 600));
			p1_f1.setPoint(3, sf::Vector2f(150, 650));
			p1_f1.setPoint(4, sf::Vector2f(136, 740));
			p1_f1.setPoint(5, sf::Vector2f(0, 740));
			sf::FloatRect p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //plate 1 дерево верх
			p1_f1.setPoint(0, sf::Vector2f(136, 0));
			p1_f1.setPoint(1, sf::Vector2f(136, 187));
			p1_f1.setPoint(2, sf::Vector2f(400, 187));
			p1_f1.setPoint(3, sf::Vector2f(400, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4);// больщой куст
			p1_f1.setPoint(0, sf::Vector2f(370, 187));
			p1_f1.setPoint(1, sf::Vector2f(370, 250));
			p1_f1.setPoint(2, sf::Vector2f(500, 250));
			p1_f1.setPoint(3, sf::Vector2f(500, 187));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4);// маленький куст
			p1_f1.setPoint(0, sf::Vector2f(450, 250));
			p1_f1.setPoint(1, sf::Vector2f(450, 400));
			p1_f1.setPoint(2, sf::Vector2f(500, 400));
			p1_f1.setPoint(3, sf::Vector2f(500, 250));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4);// самый маленький куст
			p1_f1.setPoint(0, sf::Vector2f(500, 450));
			p1_f1.setPoint(1, sf::Vector2f(550, 480));
			p1_f1.setPoint(2, sf::Vector2f(550, 480));
			p1_f1.setPoint(3, sf::Vector2f(500, 450));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4);// дом основная часть
			p1_f1.setPoint(0, sf::Vector2f(500, 0));
			p1_f1.setPoint(1, sf::Vector2f(1050, 450));
			p1_f1.setPoint(2, sf::Vector2f(1050, 450));
			p1_f1.setPoint(3, sf::Vector2f(500, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4);// дом доп часть
			p1_f1.setPoint(0, sf::Vector2f(1050, 0));
			p1_f1.setPoint(1, sf::Vector2f(1310, 350));
			p1_f1.setPoint(2, sf::Vector2f(1310, 350));
			p1_f1.setPoint(3, sf::Vector2f(1050, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4);// между 1 и 4 локацией где дерево
			p1_f1.setPoint(0, sf::Vector2f(1160, 899));
			p1_f1.setPoint(1, sf::Vector2f(1295, 900));
			p1_f1.setPoint(2, sf::Vector2f(1295, 900));
			p1_f1.setPoint(3, sf::Vector2f(1160, 899));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4); // боковой барьер
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(1, 0));
			p1_f1.setPoint(2, sf::Vector2f(1, 900));
			p1_f1.setPoint(3, sf::Vector2f(1, 900));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4); // верхний барьер
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(0, 1));
			p1_f1.setPoint(2, sf::Vector2f(1600, 1));
			p1_f1.setPoint(3, sf::Vector2f(1600, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4); // забор вверху
			p1_f1.setPoint(0, sf::Vector2f(1512, 0));
			p1_f1.setPoint(1, sf::Vector2f(1512, 510));
			p1_f1.setPoint(2, sf::Vector2f(1518, 510));
			p1_f1.setPoint(3, sf::Vector2f(1518, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //забор внизу
			p1_f1.setPoint(0, sf::Vector2f(1512, 705));
			p1_f1.setPoint(1, sf::Vector2f(1512, 900));
			p1_f1.setPoint(2, sf::Vector2f(1518, 900));
			p1_f1.setPoint(3, sf::Vector2f(1518, 705));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //барьер между локациями 1 и 4 (где сундук)
			p1_f1.setPoint(0, sf::Vector2f(0, 900));
			p1_f1.setPoint(1, sf::Vector2f(270, 899));
			p1_f1.setPoint(2, sf::Vector2f(270, 899));
			p1_f1.setPoint(3, sf::Vector2f(0, 900));
			p1_f1_b = p1_f1.getGlobalBounds();
			p1.push_back(p1_f1_b);
		}

		{ //барьеры plate2
			p1_f1.setPointCount(4); //statue 1
			p1_f1.setPoint(0, sf::Vector2f(210, 260));
			p1_f1.setPoint(1, sf::Vector2f(390, 260));
			p1_f1.setPoint(2, sf::Vector2f(390, 400));
			p1_f1.setPoint(3, sf::Vector2f(210, 400));
			sf::FloatRect p1_f1_b = p1_f1.getGlobalBounds();
			p2.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //statue 2
			p1_f1.setPoint(0, sf::Vector2f(1000, 200));
			p1_f1.setPoint(1, sf::Vector2f(1100, 200));
			p1_f1.setPoint(2, sf::Vector2f(1100, 100));
			p1_f1.setPoint(3, sf::Vector2f(1000, 100));
			p1_f1_b = p1_f1.getGlobalBounds();
			p2.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //bench
			p1_f1.setPoint(0, sf::Vector2f(600, 320));
			p1_f1.setPoint(1, sf::Vector2f(870, 320));
			p1_f1.setPoint(2, sf::Vector2f(870, 260));
			p1_f1.setPoint(3, sf::Vector2f(600, 260));
			p1_f1_b = p1_f1.getGlobalBounds();
			p2.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //between pl2 pl5 tree
			p1_f1.setPoint(0, sf::Vector2f(1250, 880));
			p1_f1.setPoint(1, sf::Vector2f(1600, 880));
			p1_f1.setPoint(2, sf::Vector2f(1600, 900));
			p1_f1.setPoint(3, sf::Vector2f(1250, 900));
			p1_f1_b = p1_f1.getGlobalBounds();
			p2.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //up bounds
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(1600, 0));
			p1_f1.setPoint(2, sf::Vector2f(1600, 1));
			p1_f1.setPoint(3, sf::Vector2f(0, 1));
			p1_f1_b = p1_f1.getGlobalBounds();
			p2.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //up bounds
			p1_f1.setPoint(0, sf::Vector2f(1580, 0));
			p1_f1.setPoint(1, sf::Vector2f(1600, 430));
			p1_f1.setPoint(2, sf::Vector2f(1600, 430));
			p1_f1.setPoint(3, sf::Vector2f(1580, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p2.push_back(p1_f1_b);
		}

		{//барьеры plate 3
			p1_f1.setPointCount(4); //trees
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(446, 0));
			p1_f1.setPoint(2, sf::Vector2f(446, 430));
			p1_f1.setPoint(3, sf::Vector2f(0, 430));
			sf::FloatRect p1_f1_b = p1_f1.getGlobalBounds();
			p3.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //низ
			p1_f1.setPoint(0, sf::Vector2f(0, 880));
			p1_f1.setPoint(1, sf::Vector2f(0, 900));
			p1_f1.setPoint(2, sf::Vector2f(424, 900));
			p1_f1.setPoint(3, sf::Vector2f(424, 880));
			p1_f1_b = p1_f1.getGlobalBounds();
			p3.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //trees right
			p1_f1.setPoint(0, sf::Vector2f(1159, 295));
			p1_f1.setPoint(1, sf::Vector2f(1159, 685));
			p1_f1.setPoint(2, sf::Vector2f(1600, 685));
			p1_f1.setPoint(3, sf::Vector2f(1600, 295));
			p1_f1_b = p1_f1.getGlobalBounds();
			p3.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //chest
			p1_f1.setPoint(0, sf::Vector2f(791, 0));
			p1_f1.setPoint(1, sf::Vector2f(791, 268));
			p1_f1.setPoint(2, sf::Vector2f(1014, 268));
			p1_f1.setPoint(3, sf::Vector2f(1014, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p3.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //zabor
			p1_f1.setPoint(0, sf::Vector2f(429, 0));
			p1_f1.setPoint(1, sf::Vector2f(429, 134));
			p1_f1.setPoint(2, sf::Vector2f(1537, 134));
			p1_f1.setPoint(3, sf::Vector2f(1537, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p3.push_back(p1_f1_b);
		}

		{//барьеры plate 4
			p1_f1.setPointCount(4); //барьер между локациями 1 и 4 (где сундук)
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(290, 20));
			p1_f1.setPoint(2, sf::Vector2f(290, 20));
			p1_f1.setPoint(3, sf::Vector2f(0, 0));
			sf::FloatRect p1_f1_b = p1_f1.getGlobalBounds();
			p4.push_back(p1_f1_b);

			p1_f1.setPointCount(4);// между 1 и 4 локацией где дерево
			p1_f1.setPoint(0, sf::Vector2f(1160, 0));
			p1_f1.setPoint(1, sf::Vector2f(1295, 20));
			p1_f1.setPoint(2, sf::Vector2f(1295, 20));
			p1_f1.setPoint(3, sf::Vector2f(1160, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p4.push_back(p1_f1_b);

			p1_f1.setPointCount(4); // забор
			p1_f1.setPoint(0, sf::Vector2f(1512, 0));
			p1_f1.setPoint(1, sf::Vector2f(1512, 900));
			p1_f1.setPoint(2, sf::Vector2f(1518, 900));
			p1_f1.setPoint(3, sf::Vector2f(1518, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p4.push_back(p1_f1_b);

			p1_f1.setPointCount(3); // tree1
			p1_f1.setPoint(0, sf::Vector2f(1253, 70));
			p1_f1.setPoint(1, sf::Vector2f(1070, 375));
			p1_f1.setPoint(2, sf::Vector2f(1504, 375));
			p1_f1_b = p1_f1.getGlobalBounds();
			p4.push_back(p1_f1_b);

			p1_f1.setPointCount(3); // tree2
			p1_f1.setPoint(0, sf::Vector2f(1376, 231));
			p1_f1.setPoint(1, sf::Vector2f(1198, 547));
			p1_f1.setPoint(2, sf::Vector2f(1560, 547));
			p1_f1_b = p1_f1.getGlobalBounds();
			p4.push_back(p1_f1_b);

			p1_f1.setPointCount(3); // tree3
			p1_f1.setPoint(0, sf::Vector2f(122, 284));
			p1_f1.setPoint(1, sf::Vector2f(0, 707));
			p1_f1.setPoint(2, sf::Vector2f(340, 707));
			p1_f1_b = p1_f1.getGlobalBounds();
			p4.push_back(p1_f1_b);

			p1_f1.setPointCount(4); // bushes
			p1_f1.setPoint(0, sf::Vector2f(145, 0));
			p1_f1.setPoint(1, sf::Vector2f(145, 123));
			p1_f1.setPoint(2, sf::Vector2f(279, 123));
			p1_f1.setPoint(3, sf::Vector2f(279, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p4.push_back(p1_f1_b);

			p1_f1.setPointCount(3); // chest
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(0, 134));
			p1_f1.setPoint(2, sf::Vector2f(89, 134));
			p1_f1.setPoint(3, sf::Vector2f(89, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p4.push_back(p1_f1_b);
		}
		{ //барьеры plate 5
			p1_f1.setPointCount(4); //забор
			p1_f1.setPoint(0, sf::Vector2f(0, 642));
			p1_f1.setPoint(1, sf::Vector2f(1600, 642));
			p1_f1.setPoint(2, sf::Vector2f(1600, 900));
			p1_f1.setPoint(3, sf::Vector2f(0, 900));
			sf::FloatRect p1_f1_b = p1_f1.getGlobalBounds();
			p5.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //дерево
			p1_f1.setPoint(0, sf::Vector2f(1260, 0));
			p1_f1.setPoint(1, sf::Vector2f(1260, 900));
			p1_f1.setPoint(2, sf::Vector2f(1600, 900));
			p1_f1.setPoint(3, sf::Vector2f(1600, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p5.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //сундук
			p1_f1.setPoint(0, sf::Vector2f(1090, 372));
			p1_f1.setPoint(1, sf::Vector2f(1090, 439));
			p1_f1.setPoint(2, sf::Vector2f(1260, 439));
			p1_f1.setPoint(3, sf::Vector2f(1260, 372));
			p1_f1_b = p1_f1.getGlobalBounds();
			p5.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //левый
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(0, 900));
			p1_f1.setPoint(2, sf::Vector2f(10, 900));
			p1_f1.setPoint(3, sf::Vector2f(10, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p5.push_back(p1_f1_b);
		}
		{ //барьеры plate 6
			p1_f1.setPointCount(4); //дерево
			p1_f1.setPoint(0, sf::Vector2f(0,0));
			p1_f1.setPoint(1, sf::Vector2f(0, 450));
			p1_f1.setPoint(2, sf::Vector2f(424, 450));
			p1_f1.setPoint(3, sf::Vector2f(424, 0));
			sf::FloatRect p1_f1_b = p1_f1.getGlobalBounds();
			p6.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //куст
			p1_f1.setPoint(0, sf::Vector2f(395, 366));
			p1_f1.setPoint(1, sf::Vector2f(395, 310));
			p1_f1.setPoint(2, sf::Vector2f(565, 310));
			p1_f1.setPoint(3, sf::Vector2f(565, 366));
			p1_f1_b = p1_f1.getGlobalBounds();
			p6.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //левый
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(0, 900));
			p1_f1.setPoint(2, sf::Vector2f(10, 900));
			p1_f1.setPoint(3, sf::Vector2f(10, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p6.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //правый
			p1_f1.setPoint(0, sf::Vector2f(1600, 0));
			p1_f1.setPoint(1, sf::Vector2f(1600, 900));
			p1_f1.setPoint(2, sf::Vector2f(1590, 900));
			p1_f1.setPoint(3, sf::Vector2f(1590, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p6.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //низ
			p1_f1.setPoint(0, sf::Vector2f(1500, 880));
			p1_f1.setPoint(1, sf::Vector2f(900, 900));
			p1_f1.setPoint(2, sf::Vector2f(900, 900));
			p1_f1.setPoint(3, sf::Vector2f(1500, 880));
			p1_f1_b = p1_f1.getGlobalBounds();
			p6.push_back(p1_f1_b);
		}
		{ //барьеры plate 7
			p1_f1.setPointCount(4); //нижний
			p1_f1.setPoint(0, sf::Vector2f(1600, 890));
			p1_f1.setPoint(1, sf::Vector2f(1600, 900));
			p1_f1.setPoint(2, sf::Vector2f(0, 900));
			p1_f1.setPoint(3, sf::Vector2f(0, 890));
			sf::FloatRect p1_f1_b = p1_f1.getGlobalBounds();
			p7.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //левый
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(0, 900));
			p1_f1.setPoint(2, sf::Vector2f(10, 900));
			p1_f1.setPoint(3, sf::Vector2f(10, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p7.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //елка
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(0, 506));
			p1_f1.setPoint(2, sf::Vector2f(452, 506));
			p1_f1.setPoint(3, sf::Vector2f(452, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p7.push_back(p1_f1_b);

			p1_f1.setPointCount(4); // забор
			p1_f1.setPoint(0, sf::Vector2f(1512, 0));
			p1_f1.setPoint(1, sf::Vector2f(1512, 900));
			p1_f1.setPoint(2, sf::Vector2f(1518, 900));
			p1_f1.setPoint(3, sf::Vector2f(1518, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p7.push_back(p1_f1_b);

		}
		{ //барьеры plate 8
			p1_f1.setPointCount(4); //нижний
			p1_f1.setPoint(0, sf::Vector2f(1600, 890));
			p1_f1.setPoint(1, sf::Vector2f(1600, 900));
			p1_f1.setPoint(2, sf::Vector2f(0, 900));
			p1_f1.setPoint(3, sf::Vector2f(0, 890));
			sf::FloatRect p1_f1_b = p1_f1.getGlobalBounds();
			p8.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //левый
			p1_f1.setPoint(0, sf::Vector2f(0, 0));
			p1_f1.setPoint(1, sf::Vector2f(0, 900));
			p1_f1.setPoint(2, sf::Vector2f(10, 900));
			p1_f1.setPoint(3, sf::Vector2f(10, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p8.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //верхний
			p1_f1.setPoint(0, sf::Vector2f(1600, 0));
			p1_f1.setPoint(1, sf::Vector2f(1600,10));
			p1_f1.setPoint(2, sf::Vector2f(0, 10));
			p1_f1.setPoint(3, sf::Vector2f(0, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p8.push_back(p1_f1_b);

		}
		{ //барьеры plate 9
			p1_f1.setPointCount(3); //дерево
			p1_f1.setPoint(0, sf::Vector2f(1500, 0));
			p1_f1.setPoint(1, sf::Vector2f(900, 900));
			p1_f1.setPoint(2, sf::Vector2f(1600, 900));
			sf::FloatRect p1_f1_b = p1_f1.getGlobalBounds();
			p9.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //правый
			p1_f1.setPoint(0, sf::Vector2f(1600, 0));
			p1_f1.setPoint(1, sf::Vector2f(1600, 900));
			p1_f1.setPoint(2, sf::Vector2f(1590, 900));
			p1_f1.setPoint(3, sf::Vector2f(1590, 0));
			p1_f1_b = p1_f1.getGlobalBounds();
			p9.push_back(p1_f1_b);

			p1_f1.setPointCount(4); //нижний
			p1_f1.setPoint(0, sf::Vector2f(1600, 890));
			p1_f1.setPoint(1, sf::Vector2f(1600, 900));
			p1_f1.setPoint(2, sf::Vector2f(0, 900));
			p1_f1.setPoint(3, sf::Vector2f(0, 890));
			p1_f1_b = p1_f1.getGlobalBounds();
			p9.push_back(p1_f1_b);
		}
	}

	p1_f1.setPointCount(4); //event plate2
	p1_f1.setPoint(0, sf::Vector2f(1575, 0));
	p1_f1.setPoint(1, sf::Vector2f(1575, 900));
	p1_f1.setPoint(2, sf::Vector2f(1580, 900));
	p1_f1.setPoint(3, sf::Vector2f(1580, 0));
	ep2 = p1_f1.getGlobalBounds();
	p2.push_back(ep2);
	

	p1_f1.setPointCount(4); //event plate3
	p1_f1.setPoint(0, sf::Vector2f(0, 880));
	p1_f1.setPoint(1, sf::Vector2f(0, 900));
	p1_f1.setPoint(2, sf::Vector2f(1600, 900));
	p1_f1.setPoint(3, sf::Vector2f(1600, 880));
	ep3 = p1_f1.getGlobalBounds();
	p3.push_back(ep3);
	

	p1_f1.setPointCount(4); //event plate7
	p1_f1.setPoint(0, sf::Vector2f(0, 550));
	p1_f1.setPoint(1, sf::Vector2f(0, 600));
	p1_f1.setPoint(2, sf::Vector2f(1600, 600));
	p1_f1.setPoint(3, sf::Vector2f(1600, 550));
	ep7 = p1_f1.getGlobalBounds();
	p7.push_back(ep7);
	

	p1_f1.setPointCount(4); //event plate9
	p1_f1.setPoint(0, sf::Vector2f(0, 0));
	p1_f1.setPoint(1, sf::Vector2f(0, 900));
	p1_f1.setPoint(2, sf::Vector2f(30, 900));
	p1_f1.setPoint(3, sf::Vector2f(30, 0));
	ep9 = p1_f1.getGlobalBounds();
	p9.push_back(ep9);
	

	background_i.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\background.png");
	background_t.loadFromImage(background_i);
	background_s.setTexture(background_t);
	background_s.setPosition(0, 0);

	font.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\CyrilicOld.TTF");

	oleg.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\oleg.png");
	texture.loadFromImage(oleg);
	sprite.setTexture(texture);
	sprite.setPosition(750, 450);
	sprite.setTextureRect(sf::IntRect(0, 0, 118, 118));
	sf::FloatRect oleg_bounds = sprite.getGlobalBounds();

	Cor.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\corgi.png");
	CorT.loadFromImage(Cor);
	CorS.setTexture(CorT);
	CorS.setPosition(200, 507);
	CorS.setTextureRect(sf::IntRect(0, 0, 128, 128));

	Gift.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\gifts.png");
	GiftT.loadFromImage(Gift);
	GiftS.setTexture(GiftT);
	GiftS.setPosition(750, 400);

	Box.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\box.png");
	BoxT.loadFromImage(Box);
	BoxS.setTexture(BoxT);
	BoxS.setPosition(750, 400);



	sf::Clock clock;

	menu mymenu{};

	while (window.isOpen()) {

		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 800;
	

		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (isGameNow == 1) {
			wait(10);
			Start_Scene();
			sf::FloatRect oleg_bounds = sprite.getGlobalBounds();
			setup_bounds(oleg_bounds, time, sprite);

			if (!keybord(time))
				play_standing_animation(time);

			draw();
			ShowButton(oleg_bounds);
			PressButton(oleg_bounds);
			if (curplate == 7 && corgi == false) {
				window.draw(CorS);
			}
			if (curplate == 8) {
				finalscene();
				window.close();
			}
			sujet(oleg_bounds, time);
			if (needtext) type_text(fr_items[text_type][text_number]);
			window.display();
			while (needtext)
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
					needtext=false;
				}
		}
		else {
			mymenu.go_menu();
		}
	}
}

