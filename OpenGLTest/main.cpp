#include <iostream>
#include <GL/glew.h>
#include "Display.h"
#include "Shader.h"
#include "Mesh.h"
#include "Texture.h"

//#define SDL_MAIN_HANDLED
int main(int argc, char** argv)
{
	Display display(800, 600, "Hello OpenGL!");
	Vertex vertices[] = {
		Vertex(glm::vec3(-0.5, -0.5, 0),glm::vec2(0.0,0.0)),
		Vertex(glm::vec3(0, 0.5, 0),glm::vec2(0.5,1.0)),
		Vertex(glm::vec3(0.5, -0.5, 0),glm::vec2(1.0,0.0)),
	};
	Mesh mesh(vertices, sizeof(vertices) / sizeof(vertices[0]));
	Shader shader(".\\res\\basicShader");
	Texture texture(".\\res\\bricks.jpg");
	while (!display.isClosed())
	{
		display.Clear(0.0f, 0.15f, 0.3f, 1.0f);

		shader.Bind();
		texture.Bind(0);
		mesh.Draw();

		display.Update();
		
		

	}
	return 0;
}