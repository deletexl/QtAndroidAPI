#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}

namespace android::opengl
{
	class GLUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GLUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GLUtils(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getEGLErrorString(jint arg0);
		static jint getInternalFormat(android::graphics::Bitmap arg0);
		static jint getType(android::graphics::Bitmap arg0);
		static void texImage2D(jint arg0, jint arg1, android::graphics::Bitmap arg2, jint arg3);
		static void texImage2D(jint arg0, jint arg1, jint arg2, android::graphics::Bitmap arg3, jint arg4);
		static void texImage2D(jint arg0, jint arg1, jint arg2, android::graphics::Bitmap arg3, jint arg4, jint arg5);
		static void texSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, android::graphics::Bitmap arg4);
		static void texSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, android::graphics::Bitmap arg4, jint arg5, jint arg6);
	};
} // namespace android::opengl
