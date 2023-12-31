#pragma once

#define GLEW_STATIC
#include <GL/glew.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../includes/debug_defines.h"

// char* get_shader_code(const char* file_name);

// void compile_and_check(GLuint shader_id, const char* shader_code);

//binds the programID automatically
GLuint load_shaders(const char * vertex_file_path, /*const char * geometry_file_path,*/ const char * fragment_file_path);

GLuint load_shaders_geom(const char * vertex_file_path, const char * geometry_file_path, const char * fragment_file_path);

GLuint load_shader_raytracer(const char * raytracer_file_path);