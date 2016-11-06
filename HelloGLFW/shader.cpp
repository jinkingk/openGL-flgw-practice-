//#include <iostream>
//
//// GLEW
//#define GLEW_STATIC
//#include <GL/glew.h>
//
//// GLFW
//#include <GLFW/glfw3.h>
//
//#include "learnopengl/shader.h"
//// Function prototypes
//void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
//
//// Window dimensions
//const GLuint WIDTH = 800, HEIGHT = 600;
//
//// The MAIN function, from here we start the application and run the game loop
////int main()
////{
////    // Init GLFW
////    glfwInit();
////    // Set all the required options for GLFW
////    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
////    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
////    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
////    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
////
////    // Create a GLFWwindow object that we can use for GLFW's functions
////    GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "LearnOpenGL", nullptr, nullptr);
////    glfwMakeContextCurrent(window);
////
////    // Set the required callback functions
////    glfwSetKeyCallback(window, key_callback);
////
////    // Set this to true so GLEW knows to use a modern approach to retrieving function pointers and extensions
////    glewExperimental = GL_TRUE;
////    // Initialize GLEW to setup the OpenGL Function pointers
////    glewInit();
////
////    // Define the viewport dimensions
////    int width, height;
////    glfwGetFramebufferSize(window, &width, &height);  
////    glViewport(0, 0, width, height);
////
////
////    // Build and compile our shader program
////    // Vertex shader
////	Shader shaderProgram = Shader("basic.vs", "basic.frag");
////
////
////    // Set up vertex data (and buffer(s)) and attribute pointers
////    //GLfloat vertices[] = {
////    //    -0.5f, -0.5f, 0.0f, // Left  
////    //     0.5f, -0.5f, 0.0f, // Right 
////    //     0.0f,  0.5f, 0.0f  // Top   
////    //};
////
////	// 指定顶点属性数据 顶点位置 颜色
////	GLfloat vertices[] = {
////		-0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, // 0
////		0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,  // 1
////		0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 1.0f,  // 2
////		//0.0f, -0.5f, 0.0f, 1.0f, 1.0f, 0.0f  // 3
////	};
////	// 索引数据
////	GLshort indices[] = {
////		0, 1, 2,  // 第一个三角形
////		0, 3, 1   // 第二个三角形
////	};
////
////	GLfloat texCoords[] = {
////		0.0f, 0.0f, // 左下角
////		1.0f, 0.0f, // 右下角
////		0.5f, 1.0f // 顶点
////	};
////
////	float borderColor[] = { 1.0f, 1.0f, 0.0f, 1.0f };
////	glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_BORDER_COLOR, borderColor);
////
////    GLuint VBO, VAO, EBOId;
////    glGenVertexArrays(1, &VAO);
////    glGenBuffers(1, &VBO);
////    // Bind the Vertex Array Object first, then bind and set vertex buffer(s) and attribute pointer(s).
////    glBindVertexArray(VAO);
////
////    glBindBuffer(GL_ARRAY_BUFFER, VBO);
////    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
////
////	//glGenBuffers(1, &EBOId);
////	//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBOId);
////	//glBufferData(GL_ELEMENT_ARRAY_BUFFER,
////	//	sizeof(indices), indices, GL_STATIC_DRAW);
////
////    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
////    glEnableVertexAttribArray(0);
////
////    glBindBuffer(GL_ARRAY_BUFFER, 0); // Note that this is allowed, the call to glVertexAttribPointer registered VBO as the currently bound vertex buffer object so afterwards we can safely unbind
////
////    glBindVertexArray(0); // Unbind VAO (it's always a good thing to unbind any buffer/array to prevent strange bugs)
////
////
////
////
////    // Game loop
////    while (!glfwWindowShouldClose(window))
////    {
////        // Check if any events have been activiated (key pressed, mouse moved etc.) and call corresponding response functions
////        glfwPollEvents();
////
////        // Render
////        // Clear the colorbuffer
////        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
////        glClear(GL_COLOR_BUFFER_BIT);
////
////        // Draw our first triangle
////
////		GLint vertexDisLocation = glGetUniformLocation(shaderProgram.Program, "dispos");
////		glUseProgram(shaderProgram.Program);
////		glUniform3f(vertexDisLocation, 0.0f, 0.0f, 0.0f);
////
////        //glUseProgram(shaderProgram);
////        glBindVertexArray(VAO);
////		//glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT,0);
////		glDrawArrays(GL_TRIANGLES, 0, 3);
////        glBindVertexArray(0);
////
////        // Swap the screen buffers
////        glfwSwapBuffers(window);
////    }
////    // Properly de-allocate all resources once they've outlived their purpose
////    glDeleteVertexArrays(1, &VAO);
////    glDeleteBuffers(1, &VBO);
////	glDeleteBuffers(1, &EBOId);
////    // Terminate GLFW, clearing any resources allocated by GLFW.
////    glfwTerminate();
////    return 0;
////}
//
//// Is called whenever a key is pressed/released via GLFW
////void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
////{
////    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
////        glfwSetWindowShouldClose(window, GL_TRUE);
////}