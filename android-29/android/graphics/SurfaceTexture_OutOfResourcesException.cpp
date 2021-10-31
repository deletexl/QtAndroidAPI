#include "./SurfaceTexture_OutOfResourcesException.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException()
		: java::lang::Exception(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"()V"
		) {}
	SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException(jstring arg0)
		: java::lang::Exception(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::graphics
