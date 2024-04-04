#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>
#include "Vars.h"

class menu {
	sf::Clock clock_m;
	float time_m=3;

	sf::Image main_;
	sf::Image info_;
	
	sf::Texture main_p;
	sf::Texture info_p;

	sf::Sprite main_page;
	sf::Sprite info_page;

	sf::Image back;
	sf::Texture back_b;
	sf::Sprite back_button;

	sf::Image bbi;
	sf::Texture bbt;
	sf::Sprite bbs;

	sf::Sprite now_back;

	sf::Image start;
	sf::Texture start_b;
	sf::Sprite start_button;

	sf::Image info;
	sf::Texture info_b;
	sf::Sprite info_button;

	sf::Image exit;
	sf::Texture exit_b;
	sf::Sprite exit_button;

	sf::Image nameee;
	sf::Texture namee;
	sf::Sprite name;

	sf::FloatRect bs;
	sf::FloatRect bi;
	sf::FloatRect be;
	sf::FloatRect bb;

	bool isS = false;
	bool isW = false;
	bool isEnter = false;

	int cur_page;
	int cur_b;
	int n = 0;

public:
	menu() {
		cur_page = 1;
		cur_b = 0;

		main_.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\menu_background.png");
		info_.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\info_page.png");
		
		main_p.loadFromImage(main_);
		info_p.loadFromImage(info_);

		main_page.setTexture(main_p);
		info_page.setTexture(info_p);

		main_page.setPosition(0, 0);
		info_page.setPosition(0, 0);

		back.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\back_button.png");
		back_b.loadFromImage(back);
		back_button.setTexture(back_b);
		back_button.setPosition(0, 900 - 90);
		bb = back_button.getGlobalBounds();

		bbi.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\backp.png");
		bbt.loadFromImage(bbi);
		bbs.setTexture(bbt);
		bbs.setPosition(0, 900 - 90);

		start.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\start_button.png");
		start_b.loadFromImage(start);
		start_button.setTexture(start_b);
		start_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
		start_button.setPosition(sf::Vector2f(600, 350));
		bs=start_button.getGlobalBounds();

		info.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\info_button.png");
		info_b.loadFromImage(info);
		info_button.setTexture(info_b);
		info_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
		info_button.setPosition(sf::Vector2f(600, 500));
		bi=info_button.getGlobalBounds();

		exit.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\exit_button.png");
		exit_b.loadFromImage(exit);
		exit_button.setTexture(exit_b);
		exit_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
		exit_button.setPosition(sf::Vector2f(600, 650));
		be=exit_button.getGlobalBounds();

		nameee.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\game_name.png");
		namee.loadFromImage(nameee);
		name.setTexture(namee);
		name.setPosition(0, 0);

		now_back = back_button;

	}

	void detect_keyboard() {
		time_m = clock_m.getElapsedTime().asSeconds();
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && isS==false) {
			isS = true;
			if (cur_page == 1) {
				++cur_b;
				if (cur_b >= 4) cur_b = 1;
				if (cur_b == 1) {
					start_button.setTextureRect(sf::IntRect(0, 70, 400, 140));
					info_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					exit_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					now_back = back_button;
				}
				else if (cur_b == 2) {
					start_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					info_button.setTextureRect(sf::IntRect(0, 70, 400, 140));
					exit_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					now_back = back_button;
				}
				else if (cur_b == 3) {
					start_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					info_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					exit_button.setTextureRect(sf::IntRect(0, 70, 400, 140));
					now_back = back_button;
				}
			}
		}
		else if (isS == true) {
			n++;
			if (n > 6) {
				isS = false;
				n = 0;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && isW == false) {
			isW = true;
			if (cur_page == 1) {
				--cur_b;
				if (cur_b <= 0) cur_b = 3;
				if (cur_b == 1) {
					start_button.setTextureRect(sf::IntRect(0, 70, 400, 140));
					info_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					exit_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					now_back = back_button;
				}
				else if (cur_b == 2) {
					start_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					info_button.setTextureRect(sf::IntRect(0, 70, 400, 140));
					exit_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					now_back = back_button;
				}
				else if (cur_b == 3) {
					start_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					info_button.setTextureRect(sf::IntRect(0, 0, 400, 70));
					exit_button.setTextureRect(sf::IntRect(0, 70, 400, 140));
					now_back = back_button;
				}
			}
		}
		else if (isW == true) {
			n++;
			if (n > 7) {
				isW = false;
				n = 0;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && isEnter == false) {
			isEnter = true;
			if (cur_page == 1) {
				if (cur_b == 1) {
					isGameNow = 1;
				}
				if (cur_b == 2) {
					cur_page = 2;
				}
				if (cur_b == 3) {
					window.close();
				}
			}
			else if (cur_page == 2) {
				cur_page = 1;
			}
		}
		else if (isEnter == true) {
			n++;
			if (n > 7) {
				isEnter = false;
				n = 0;
			}
		}
	}

	void draw_menu() {
		window.clear();
		window.draw(main_page);
		window.draw(name);
		window.draw(start_button);
		window.draw(info_button);
		window.draw(exit_button);
		window.display();
	}

	void draw_info() {
		window.clear();
		window.draw(info_page);
		window.draw(back_button);
		window.display();
	}

	void go_menu() {
		detect_keyboard();
		if (cur_page == 1)
			draw_menu();
		else
			draw_info();
	}


};

#endif