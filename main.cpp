#include "opencv2\opencv.hpp"
#include "SFML/Graphics.hpp"


using namespace cv;

int main(int argv, char** argc)
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Title");
	sf::Event event;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
	}
	Mat test = imread("test.bmp", IMREAD_UNCHANGED);
	imshow("test", test);
	waitKey();
}