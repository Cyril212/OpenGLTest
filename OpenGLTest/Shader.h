#pragma once


#include <string>
#include <iostream>
#include <GL/glew.h>
#include <fstream>
class Shader
{
public:
	 
	void Bind();
	Shader(const std::string& fileName);
	Shader();
	virtual ~Shader();
protected:
private:
	static const unsigned int NUM_SHADERS = 2;
	//Shader(const Shader& other){}
	//void operator=(const Shader& other){}

	GLuint m_program;
	GLuint m_shaders[NUM_SHADERS];

};
