#include <GL/glut.h>

void display()
{}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
