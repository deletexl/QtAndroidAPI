#include "../../JString.hpp"
#include "./SurfaceTexture_OutOfResourcesException.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException()
		: java::lang::Exception(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"()V"
		) {}
	SurfaceTexture_OutOfResourcesException::SurfaceTexture_OutOfResourcesException(JString arg0)
		: java::lang::Exception(
			"android.graphics.SurfaceTexture$OutOfResourcesException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::graphics

