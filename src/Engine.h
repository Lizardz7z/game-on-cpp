#ifndef Engine_h
#define Engine_h

#include "Vars.h"

bool keybord(float time);
void play_standing_animation(float time);
void change_background();
void setup_bounds(sf::FloatRect oleg, float time, sf::Sprite& sprite);
void draw();

bool keybord(float time) {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		curframe += 0.005 * time;
		if (curframe > 4) curframe -= 4;
		sprite.setTextureRect(sf::IntRect(int(curframe) * 118, 118 * 5, 118, 118));
		sprite.move(-speed * time, 0);
		last_direction = 'l';
		return true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		curframe += 0.005 * time;
		if (curframe > 4) curframe -= 4;
		sprite.setTextureRect(sf::IntRect(int(curframe) * 118, 118 * 6, 118, 118));
		sprite.move(speed * time, 0);
		last_direction = 'r';
		return true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		curframe += 0.005 * time;
		if (curframe > 4) curframe -= 4;
		sprite.setTextureRect(sf::IntRect(int(curframe) * 118, 118 * 7, 118, 118));
		sprite.move(0, -speed * time);
		last_direction = 'u';
		return true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		curframe += 0.005 * time;
		if (curframe > 4) curframe -= 4;
		sprite.setTextureRect(sf::IntRect(int(curframe) * 118, 118 * 4, 118, 118));
		sprite.move(0, speed * time);
		last_direction = 'd';
		return true;
	}
}

void play_standing_animation(float time) {
	if (last_direction == 'l') {
		curframe += 0.005 * time;
		if (curframe > 4) curframe -= 4;
		sprite.setTextureRect(sf::IntRect(int(curframe) * 118, 118, 118, 118));
	}
	if (last_direction == 'r') {
		curframe += 0.005 * time;
		if (curframe > 4) curframe -= 4;
		sprite.setTextureRect(sf::IntRect(int(curframe) * 118, 118 * 2, 118, 118));
	}
	if (last_direction == 'u') {
		curframe += 0.005 * time;
		if (curframe > 4) curframe -= 4;
		sprite.setTextureRect(sf::IntRect(int(curframe) * 118, 118 * 3, 118, 118));
	}
	if (last_direction == 'd') {
		curframe += 0.005 * time;
		if (curframe > 4) curframe -= 4;
		sprite.setTextureRect(sf::IntRect(int(curframe) * 118, 0, 118, 118));
	}
}

void change_background() {
	if (curplate == 1 && sprite.getPosition().x >= 1590) {
		background_s.setTextureRect(sf::IntRect(1600, 0, 1600, 900));
		sprite.setPosition(10, sprite.getPosition().y);
		curplate = 2;
	}
	else if (curplate == 1 && sprite.getPosition().y >= 890) {
		background_s.setTextureRect(sf::IntRect(0, 900, 1600, 900));
		sprite.setPosition(sprite.getPosition().x, 10);
		curplate = 4;
	}
	else if (curplate == 2 && sprite.getPosition().x <= 10) {
		background_s.setTextureRect(sf::IntRect(0, 0, 1600, 900));
		sprite.setPosition(1580, sprite.getPosition().y);
		curplate = 1;
	}
	else if (curplate == 2 && sprite.getPosition().x >= 1590) {
		background_s.setTextureRect(sf::IntRect(1600 * 2, 0, 1600, 900));
		sprite.setPosition(10, sprite.getPosition().y);
		curplate = 3;
	}
	else if (curplate == 2 && sprite.getPosition().y >= 890) {
		background_s.setTextureRect(sf::IntRect(1600, 900, 1600, 900));
		sprite.setPosition(sprite.getPosition().x, 10);
		curplate = 5;
	}
	else if (curplate == 3 && sprite.getPosition().x <= 10) {
		background_s.setTextureRect(sf::IntRect(1600, 0, 1600, 900));
		sprite.setPosition(1580, sprite.getPosition().y);
		curplate = 2;
	}
	else if (curplate == 3 && sprite.getPosition().y >= 890) {
		background_s.setTextureRect(sf::IntRect(1600 * 2, 900, 1600, 900));
		sprite.setPosition(sprite.getPosition().x, 10);
		curplate = 6;
	}
	else if (curplate == 4 && sprite.getPosition().y <= 10) {
		background_s.setTextureRect(sf::IntRect(0, 0, 1600, 900));
		sprite.setPosition(sprite.getPosition().x, 880);
		curplate = 1;
	}
	else if (curplate == 4 && sprite.getPosition().y >= 890) {
		background_s.setTextureRect(sf::IntRect(0, 900 * 2, 1600, 900));
		sprite.setPosition(sprite.getPosition().x, 10);
		curplate = 7;
	}
	else if (curplate == 5 && sprite.getPosition().y <= 10) {
		background_s.setTextureRect(sf::IntRect(1600, 0, 1600, 900));
		sprite.setPosition(sprite.getPosition().x, 880);
		curplate = 2;
	}
	else if (curplate == 6 && sprite.getPosition().y <= 10) {
		background_s.setTextureRect(sf::IntRect(1600 * 2, 0, 1600, 900));
		sprite.setPosition(sprite.getPosition().x, 880);
		curplate = 3;
	}
	else if (curplate == 6 && sprite.getPosition().y >= 890) {
		background_s.setTextureRect(sf::IntRect(1600 * 2, 900 * 2, 1600, 900));
		sprite.setPosition(sprite.getPosition().x, 10);
		curplate = 9;
	}
	else if (curplate == 7 && sprite.getPosition().y <= 10) {
		background_s.setTextureRect(sf::IntRect(0, 900, 1600, 900));
		sprite.setPosition(sprite.getPosition().x, 880);
		curplate = 4;
	}
	else if (curplate == 8 && sprite.getPosition().x >= 1590) {
		background_s.setTextureRect(sf::IntRect(1600 * 2, 900 * 2, 1600, 900));
		sprite.setPosition(10, sprite.getPosition().y);
		curplate = 9;
	}
	else if (curplate == 9 && sprite.getPosition().x <= 10) {
		background_s.setTextureRect(sf::IntRect(1600, 900 * 2, 1600, 900));
		sprite.setPosition(1580, sprite.getPosition().y);
		curplate = 8;
	}
	else if (curplate == 9 && sprite.getPosition().y <= 10) {
		background_s.setTextureRect(sf::IntRect(1600 * 2, 900, 1600, 900));
		sprite.setPosition(sprite.getPosition().x, 880);
		curplate = 6;
	}
}

void setup_bounds(sf::FloatRect oleg, float time, sf::Sprite& sprite) {
	if (curplate == 1) {
		for (sf::FloatRect a : p1) {
			if (oleg.intersects(a)) {
				if (last_direction == 'l') {
					sprite.move(speed * time, 0);
				}
				if (last_direction == 'r') {
					sprite.move(-speed * time, 0);
				}
				if (last_direction == 'u') {
					sprite.move(0, speed * time);
				}
				if (last_direction == 'd') {
					sprite.move(0, -speed * time);
				}
			}
		}
	}
	if (curplate == 2) {
		for (sf::FloatRect a : p2) {
			if (oleg.intersects(a)) {
				if (last_direction == 'l') {
					sprite.move(speed * time, 0);
				}
				if (last_direction == 'r') {
					sprite.move(-speed * time, 0);
				}
				if (last_direction == 'u') {
					sprite.move(0, speed * time);
				}
				if (last_direction == 'd') {
					sprite.move(0, -speed * time);
				}
			}
		}
	}
	if (curplate == 3) {
		for (sf::FloatRect a : p3) {
			if (oleg.intersects(a)) {
				if (last_direction == 'l') {
					sprite.move(speed * time, 0);
				}
				if (last_direction == 'r') {
					sprite.move(-speed * time, 0);
				}
				if (last_direction == 'u') {
					sprite.move(0, speed * time);
				}
				if (last_direction == 'd') {
					sprite.move(0, -speed * time);
				}
			}
		}
	}
	if (curplate == 4) {
		for (sf::FloatRect a : p4) {
			if (oleg.intersects(a)) {
				if (last_direction == 'l') {
					sprite.move(speed * time, 0);
				}
				if (last_direction == 'r') {
					sprite.move(-speed * time, 0);
				}
				if (last_direction == 'u') {
					sprite.move(0, speed * time);
				}
				if (last_direction == 'd') {
					sprite.move(0, -speed * time);
				}
			}
		}
	}
	if (curplate == 5) {
		for (sf::FloatRect a : p5) {
			if (oleg.intersects(a)) {
				if (last_direction == 'l') {
					sprite.move(speed * time, 0);
				}
				if (last_direction == 'r') {
					sprite.move(-speed * time, 0);
				}
				if (last_direction == 'u') {
					sprite.move(0, speed * time);
				}
				if (last_direction == 'd') {
					sprite.move(0, -speed * time);
				}
			}
		}
	}
	if (curplate == 6) {
		for (sf::FloatRect a : p6) {
			if (oleg.intersects(a)) {
				if (last_direction == 'l') {
					sprite.move(speed * time, 0);
				}
				if (last_direction == 'r') {
					sprite.move(-speed * time, 0);
				}
				if (last_direction == 'u') {
					sprite.move(0, speed * time);
				}
				if (last_direction == 'd') {
					sprite.move(0, -speed * time);
				}
			}
		}
	}
	if (curplate == 7) {
		for (sf::FloatRect a : p7) {
			if (oleg.intersects(a)) {
				if (last_direction == 'l') {
					sprite.move(speed * time, 0);
				}
				if (last_direction == 'r') {
					sprite.move(-speed * time, 0);
				}
				if (last_direction == 'u') {
					sprite.move(0, speed * time);
				}
				if (last_direction == 'd') {
					sprite.move(0, -speed * time);
				}
			}
		}
	}
	if (curplate == 8) {
		for (sf::FloatRect a : p8) {
			if (oleg.intersects(a)) {
				if (last_direction == 'l') {
					sprite.move(speed * time, 0);
				}
				if (last_direction == 'r') {
					sprite.move(-speed * time, 0);
				}
				if (last_direction == 'u') {
					sprite.move(0, speed * time);
				}
				if (last_direction == 'd') {
					sprite.move(0, -speed * time);
				}
			}
		}
	}
	if (curplate == 9) {
		for (sf::FloatRect a : p9) {
			if (oleg.intersects(a)) {
				if (last_direction == 'l') {
					sprite.move(speed * time, 0);
				}
				if (last_direction == 'r') {
					sprite.move(-speed * time, 0);
				}
				if (last_direction == 'u') {
					sprite.move(0, speed * time);
				}
				if (last_direction == 'd') {
					sprite.move(0, -speed * time);
				}
			}
		}
	}
}

void draw() {
	change_background();
	window.clear();
	window.draw(background_s);
	window.draw(sprite);
	if (curplate == 2) {
		temp_i.loadFromFile("C:\\Users\\1\\source\\repos\\Anniversary2nd\\textures\\tree page2.png");
		temp_t.loadFromImage(temp_i);
		temp_s.setTexture(temp_t);
		temp_s.setPosition(sf::Vector2f(1282, 590));
		window.draw(temp_s);
	}
}

#endif
