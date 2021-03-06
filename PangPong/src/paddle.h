#ifndef _PANGPONG_PADDLE_H_
#define _PANGPONG_PADDLE_H_

#include <cmath>

#include <SDL.h>

class Ball;

class Paddle
{
public:
	Paddle(int x, int y);
	~Paddle();

	int GetX() const;
	int GetY() const;

	void SetX(const int x);
	void SetY(const int y);

	void Update(const int mouse_y);
	void Render(SDL_Renderer * renderer);

	int Predict(Ball * ball);

	void AI(Ball * ball);

public:

private:
	int x_, y_;
	SDL_Rect paddle;
};

#endif
