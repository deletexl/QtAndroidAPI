#include "../../JObject.hpp"
#include "./EGLContext.hpp"

namespace android::opengl
{
	// Fields
	
	// QJniObject forward
	EGLContext::EGLContext(QJniObject obj) : android::opengl::EGLObjectHandle(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EGLContext::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
} // namespace android::opengl

