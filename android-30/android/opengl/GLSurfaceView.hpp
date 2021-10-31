#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/SurfaceView.hpp"

namespace android::content
{
	class Context;
}

namespace android::opengl
{
	class GLSurfaceView : public android::view::SurfaceView
	{
	public:
		// Fields
		static jint DEBUG_CHECK_GL_ERROR();
		static jint DEBUG_LOG_GL_CALLS();
		static jint RENDERMODE_CONTINUOUSLY();
		static jint RENDERMODE_WHEN_DIRTY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GLSurfaceView(const char *className, const char *sig, Ts...agv) : android::view::SurfaceView(className, sig, std::forward<Ts>(agv)...) {}
		GLSurfaceView(QAndroidJniObject obj);
		
		// Constructors
		GLSurfaceView(android::content::Context arg0);
		GLSurfaceView(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		jint getDebugFlags();
		jboolean getPreserveEGLContextOnPause();
		jint getRenderMode();
		void onPause();
		void onResume();
		void queueEvent(__JniBaseClass arg0);
		void requestRender();
		void setDebugFlags(jint arg0);
		void setEGLConfigChooser(__JniBaseClass arg0);
		void setEGLConfigChooser(jboolean arg0);
		void setEGLConfigChooser(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void setEGLContextClientVersion(jint arg0);
		void setEGLContextFactory(__JniBaseClass arg0);
		void setEGLWindowSurfaceFactory(__JniBaseClass arg0);
		void setGLWrapper(__JniBaseClass arg0);
		void setPreserveEGLContextOnPause(jboolean arg0);
		void setRenderMode(jint arg0);
		void setRenderer(__JniBaseClass arg0);
		void surfaceChanged(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		void surfaceCreated(__JniBaseClass arg0);
		void surfaceDestroyed(__JniBaseClass arg0);
		void surfaceRedrawNeeded(__JniBaseClass arg0);
		void surfaceRedrawNeededAsync(__JniBaseClass arg0, __JniBaseClass arg1);
	};
} // namespace android::opengl

