#pragma once

#include "Screen.h"
#include "ServerMessageListener.h"

class AdminScreen : public tw::Screen, ServerMessageListener
{
private:
	sf::Font font;
	sf::Text title;
	sf::Text subtitle;

	tgui::Label::Ptr matchPanelTitle;
	tgui::Label::Ptr versus;
	tgui::Label::Ptr nameMatch;
	tgui::Label::Ptr team1Choice;
	tgui::Label::Ptr team2Choice;
	tgui::Label::Ptr matchCreate;
	tgui::ScrollablePanel::Ptr m_matchListpanel;
	tgui::ScrollablePanel::Ptr m_matchListCreate;
	tgui::ListBox::Ptr listTeam1;
	tgui::ListBox::Ptr listTeam2;
	tgui::ListBox::Ptr listMatchCreate;
	tgui::Button::Ptr createMatch;
	tgui::EditBox::Ptr matchName;
	//static void scrollPanel(tgui::Panel::Ptr panel, int value);
	//static int previousScrollbarValue;


	tgui::Gui * gui;

public:
	AdminScreen(tgui::Gui * gui);
	~AdminScreen();

	virtual void handleEvents(sf::RenderWindow * window, tgui::Gui * gui);
	virtual void update(float deltatime);
	virtual void render(sf::RenderWindow * window);


	virtual void onMessageReceived(std::string msg);
};

