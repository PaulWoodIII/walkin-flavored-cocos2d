//
// cocos2d GLU implementation
//
// implementation of GLU functions
//
#ifndef __COCOS2D_GLU_H
#define __COCOS2D_GLU_H

// Only compile this code on iOS. These files should NOT be included on your Mac project.
// But in case they are included, it won't be compiled.
#import <Availability.h>
#ifdef __IPHONE_OS_VERSION_MAX_ALLOWED

#import <OpenGLES/ES1/gl.h>

/**
 @file
 cocos2d OpenGL GLU implementation
 */
int gluProject(GLfloat objx, GLfloat objy, GLfloat objz, 
               const GLfloat modelMatrix[16], 
               const GLfloat projMatrix[16],
               const GLint viewport[4],
               GLfloat *winx, GLfloat *winy, GLfloat *winz);
/** OpenGL gluLookAt implementation */
void gluLookAt(float eyeX, float eyeY, float eyeZ, float lookAtX, float lookAtY, float lookAtZ, float upX, float upY, float upZ);
/** OpenGL gluPerspective implementation */
void gluPerspective(GLfloat fovy, GLfloat aspect, GLfloat zNear, GLfloat zFar);

#endif // __IPHONE_OS_VERSION_MAX_ALLOWED

#endif /* __COCOS2D_GLU_H */

