/*
 *  EAGLView.h
 *  CloudBox Cross-Platform Framework Project
 *
 *  Created by Cloud on 2011/8/14.
 *  Copyright 2011 Cloud Hsu. All rights reserved.
 *
 * old delegate, not use
 */

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

//class CBSprite;

/*
This class wraps the CAEAGLLayer from CoreAnimation into a convenient UIView subclass.
The view content is basically an EAGL surface you render your OpenGL scene into.
Note that setting the view non-opaque will only work if the EAGL surface has an alpha channel.
*/
@interface EAGLView : UIView {
	
@private
	/* The pixel dimensions of the backbuffer */
	GLint backingWidth;
	GLint backingHeight;
	
	EAGLContext *context;
	
	/* OpenGL names for the renderbuffer and framebuffers used to render to this view */
	GLuint viewRenderbuffer, viewFramebuffer;
	
	/* OpenGL name for the depth buffer that is attached to viewFramebuffer, if it exists (0 if it does not exist) */
	GLuint depthRenderbuffer;
	
	//CBSprite *bg;
//	CBSprite *sprites;
	
}

- (void)drawView;

@end
