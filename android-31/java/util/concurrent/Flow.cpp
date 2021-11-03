#include "./Flow.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	Flow::Flow(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Flow::defaultBufferSize()
	{
		return callStaticMethod<jint>(
			"java.util.concurrent.Flow",
			"defaultBufferSize",
			"()I"
		);
	}
} // namespace java::util::concurrent

