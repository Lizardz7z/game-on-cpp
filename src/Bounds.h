#ifndef Bounds_h
#define Bounds_h

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

class bound {
public:
	std::vector<sf::FloatRect> bounds;

	bound(int plate_numb) {
		sf::RectangleShape r;
		sf::FloatRect b;

		if (plate_numb == 1) {
			r.setScale(211, 746);
			r.setPosition(0, 0);
			b = r.getGlobalBounds();
			bounds.push_back(b);
			r.setScale(423, 197);
			r.setPosition(114, 0);
			b = r.getGlobalBounds();
			bounds.push_back(b);
			r.setScale(978, 311);
			r.setPosition(355, 0);
			b = r.getGlobalBounds();
			bounds.push_back(b);
			r.setScale(146, 215);
			r.setPosition(433, 334);
			b = r.getGlobalBounds();
			bounds.push_back(b);
			r.setScale(527, 416);
			r.setPosition(533, 0);
			b = r.getGlobalBounds();
			bounds.push_back(b);
			r.setScale(310, 322);
			r.setPosition(1040, 0);
			b = r.getGlobalBounds();
			bounds.push_back(b);
			r.setScale(68, 515);
			r.setPosition(1485, 0);
			b = r.getGlobalBounds();
			bounds.push_back(b);
			r.setScale(210, 68);
			r.setPosition(1485, 707);
			b = r.getGlobalBounds();
			bounds.push_back(b);
		}
		if (plate_numb == 2) {

		}
		if (plate_numb == 3) {

		}
		if (plate_numb == 4) {

		}
		if (plate_numb == 5) {

		}
		if (plate_numb == 6) {

		}
		if (plate_numb == 7) {

		}
		if (plate_numb == 8) {

		}
		if (plate_numb == 9) {

		}
	}


};

#endif

