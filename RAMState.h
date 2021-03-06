#pragma once
#include "GUIState.h"
#include "Button.h"
#include "Timebar.h"
#include "HelpState.h"
#include "RAMInput.h"
#include "RAMMessageInput.h"
#include "RAMProcessInput.h"
#include "RAMSegmentInput.h"

extern bool isMousePressed;

class RAMState :
	public GUIState
{
private:
	//variables
	TimeBar timebar = TimeBar(1000.f, 50.f, &font, "RAM");
	sf::Texture texture;
	sf::Font font;
	sf::RectangleShape background;
	std::map<std::string, Button*> buttons;
	sf::RectangleShape menu1;
	sf::RectangleShape menu2;
	sf::RectangleShape menu3;
	sf::Texture menutexture;

	//Functions
	void initBackground();
	void initFonts();
	void initButtons();

public:
	RAMState(sf::RenderWindow *window, std::stack<GUIState*> *states, sf::Event *event);
	virtual ~RAMState();

	//Functions
	void updateKeybinds(const float& dt);
	void update(const float& dt);
	void updateButtons();
	void updateTimebar();
	void renderButtons(sf::RenderTarget* target = nullptr);
	void render(sf::RenderTarget* target = nullptr);
};