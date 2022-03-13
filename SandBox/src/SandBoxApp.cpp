#include "Chips.h"

class Sandbox : public Chips::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Chips::Application* Chips::CreateApplication()
{
	return new Sandbox();
}