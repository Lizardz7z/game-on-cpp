#ifndef vars_h
#define vars_h

#include <SFML/Graphics.hpp>

sf::RenderWindow window;

sf::ConvexShape p1_f1;

sf::Image oleg;
sf::Texture texture;
sf::Sprite sprite;

sf::Image Lisa;
sf::Texture LisaT;
sf::Sprite LisaS;

sf::Image Cor;
sf::Texture CorT;
sf::Sprite CorS;

sf::Image Box;
sf::Texture BoxT;
sf::Sprite BoxS;

sf::Image Gift;
sf::Texture GiftT;
sf::Sprite GiftS;

sf::Image background_i;
sf::Texture background_t;
sf::Sprite background_s;

sf::Image temp_i;
sf::Texture temp_t;
sf::Sprite temp_s;

int isGameNow = 0;

std::vector<sf::FloatRect> p1, p2, p3, p4, p5, p6, p7, p8, p9, show_but;

float speed = 0.3;
float curframe = 0;
int curplate = 1;
char last_direction = 'd';

bool meat = false;
bool eat = false;
bool corgi = false;
bool flowers = false;
bool secret = false;

std::string fr_items[3][4] = {{ "В сундуке ты нашел МЯСО","В сундуке ты нашел СЕТ РОЛЛОВ","Ты собрал на поляне БУКЕТ ЦВЕТОВ", "В сундуке лежала записка: 'Солнышко, просто хочу сказать: я тебя люблю!'" }, {"Вам удалось приманить коржика!", "Теперь у вас есть угощение!", "Пришло время найти свой подарок ;)"}, {"На поляне вы увидели коржика, но он вас боится.\n-Должен быть способ его приманить", "Вы не можете себе позволить пойти к любимой без угощения", "Вы не можете себе позволить пойти к любимой без подарка", "Вы не можете себе позволить пойти к любимой без букета цветов"}};

int fri = 0, frt = 0, frf = 0;

sf::FloatRect ep2, ep3, ep7, ep9;


sf::FloatRect chest_plate3, chest_plate4, chest_plate5, flowers_plate9;

sf::Font font;


#endif
