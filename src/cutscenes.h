#ifndef CUTSCENE_H
#define CUTSCENE_H

#include <SFML/Graphics.hpp>
#include "Vars.h"

std::string first[11] = { "Здравствуй, любимый мой!", "Эту игру я сделала специально для тебя :)", "Давай начнем сначала...", "Жила была девочка Лизуля...", "В жизни этой девочки близился важный праздник!", "Но она совершенно не знала, какой подарок выбрать для своего любимого...", "Помоги ей, пожалуйста...", "Для начала надо выбрать форму (нажми соответствующую цифру):\n1)Круг\n2)Квадрат\n3)Треугольник", "Хорошо, теперь выберем символ:\n1)Сердце\n2)Звезда\n3)Сапфир", "Супер пупер! Теперь последнее, оформление подарочной коробки:\n1)Красный и Синий\n2)Желтый и Фиолетовый\n3)Голубой и Зеленый", "Спасибо, милый мой!" };
int frasenumber = 0;
int shape = 0, symb = 0, col = 0;
bool isE = true;
int q = 0;
bool needtext = false;
int text_type = 0;
int text_number = 0;
bool finalmessage = false;
int platenow=1;
bool ep2d = false, ep3d = false, ep7d = false, ep9d = false;

std::string finalstr = "Родной мой, поздравляю тебя с нашей годовщиной!\nСпасибо тебе за то, что ты у меня есть!\nЯ тебя безумно сильно люблю!\nНажми Enter, чтобы распаковать подарок тут, но сначала распакуй его в реальности";

void wait(int sec) {
	int m = 0;
	for (int i = 0; i < sec; ++i) {
		m = i;
	}
}

void type_text(std::string str) {
	sf::Text text(str, font, 30);
	sf::RectangleShape brect(sf::Vector2f(1600, 200));
	brect.setFillColor(sf::Color(0,0,0,180));
	brect.setPosition(0, 0);

	text.setString(str);
	text.setFillColor(sf::Color::White);

	text.setPosition(100, 70);
	window.draw(brect);
	window.draw(text);
}

void Start_Scene() {
	bool isEnter = true;
	int n = 0;
	while (1) {
		if (frasenumber == 11) {
			break;
		}
		window.clear();
		type_text(first[frasenumber]);
		window.display();
		if (frasenumber != 7 && frasenumber != 8 && frasenumber != 9) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && isEnter == false) {
				isEnter = true;
				frasenumber++;
			}
			else if (isEnter == true) {
				n++;
				if (n > 7) {
					isEnter = false;
					n = 0;
				}
			}
		}
		else {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1) && isEnter == false) {
				isEnter = true;
				if (frasenumber == 7) {
					shape = 1;
				}
				else if (frasenumber == 8) {
					symb = 1;
				}
				else if (frasenumber == 9) {
					col = 1;
				}
				frasenumber++;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2) && isEnter == false) {
				isEnter = true;
				if (frasenumber == 7) {
					shape = 2;
				}
				else if (frasenumber == 8) {
					symb = 2;
				}
				else if (frasenumber == 9) {
					col = 2;
				}
				frasenumber++;
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3) && isEnter == false) {
				isEnter = true;
				if (frasenumber == 7) {
					shape = 3;
				}
				else if (frasenumber == 8) {
					symb = 3;
				}
				else if (frasenumber == 9) {
					col = 3;
				}
				frasenumber++;
			}
			else if (isEnter == true) {
				n++;
				if (n > 7) {
					isEnter = false;
					n = 0;
				}
			}
		}
	}
	if (col == 1) BoxS.setTextureRect(sf::IntRect(0 * 89, 0, 89, 96));
	else if (col == 2) BoxS.setTextureRect(sf::IntRect(2 * 89, 0, 89, 96));
	else if (col == 3) BoxS.setTextureRect(sf::IntRect(1 * 89, 0, 89, 96));
	int x = shape - 1, y = symb - 1;
	GiftS.setTextureRect(sf::IntRect(x * 90, y * 112, 90, 112));
}

void ShowButton(sf::FloatRect oleg) {
	if ((eat == false && curplate == 3 && oleg.intersects(show_but[0])) || (secret == false && curplate == 4 && oleg.intersects(show_but[1])) || (meat == false && curplate == 5 && oleg.intersects(show_but[2])) || (flowers == false && curplate == 9 && oleg.intersects(show_but[3]))) {
		sf::Text btn("Нажми Е", font, 30);
		btn.setFillColor(sf::Color::White);
		btn.setPosition(sprite.getPosition().x, sprite.getPosition().y - 50);
		window.draw(btn);
	}
}

void PressButton(sf::FloatRect oleg) {
	if ((curplate == 3 && oleg.intersects(show_but[0])) || (curplate == 4 && oleg.intersects(show_but[1])) || (curplate == 5 && oleg.intersects(show_but[2])) || (curplate == 9 && oleg.intersects(show_but[3]))) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && isE == true) {
			isE = false;
			if (secret == false && curplate == 3) {
				secret = true;
				needtext = true;
				text_type = 0;
				text_number = 3;
				
			}
			else if (eat == false && curplate == 4) {
				eat = true;
				needtext = true;
				text_type = 0;
				text_number = 1;
			}
			else if (meat == false && curplate == 5) {
				meat = true;
				needtext = true;
				text_type = 0;
				text_number = 0;
			}
			else if (flowers == false && curplate == 9) {
				flowers = true;
				needtext = true;
				text_type = 0;
				text_number = 2;
			}
		}
		else {
			q++;
			if (q > 7) {
				isE = true;
			}
		}
	}
}

void sujet(sf::FloatRect oleg, float time) {
	if (meat == true && ep7d == false) {
		ep7d = true;
		p7.pop_back();
	}
	if (eat==true && ep3d==false) {
		ep3d = true;
		p3.pop_back();
	}
	if (flowers==true && ep9d==false) {
		ep9d = true;
		p9.pop_back();
	}
	if (curplate==2 && corgi == false && oleg.intersects(ep2)) {
		needtext = true;
		text_type = 2;
		text_number = 2;
		sprite.setPosition(sprite.getPosition().x - 30, sprite.getPosition().y);
	}
	else if (eat == false && oleg.intersects(ep3) && curplate==3) {
		needtext = true;
		text_type = 2;
		text_number = 1;
		sprite.setPosition(sprite.getPosition().x, sprite.getPosition().y - 30);
	}
	else if (flowers == false && oleg.intersects(ep9) && curplate==9) {
		needtext = true;
		text_type = 2;
		text_number = 3;
		sprite.setPosition(sprite.getPosition().x + 30, sprite.getPosition().y);
	}
	else if (curplate == 7 && corgi == false && oleg.intersects(ep7)) {
		if (meat == false) {
			needtext = true;
			text_type = 2;
			text_number = 0;
			sprite.setPosition(sprite.getPosition().x, sprite.getPosition().y - 30);
		}
		else {
			needtext = true;
			text_type = 1;
			text_number = 0;
			corgi = true;
		}
	}
	if (corgi == true && ep2d == false) {
		ep2d = true;
		p2.pop_back();
	}
}

void finalscene() {
	while (!finalmessage) {
		window.clear();
		bool istext = false;
		int t = 0;
		type_text(finalstr);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
			istext = true;
		}
		if (!istext)
			window.draw(BoxS);
		else window.draw(GiftS);
		window.display();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
			break;
		}
	}
}

#endif // !CUTSCENE_H

