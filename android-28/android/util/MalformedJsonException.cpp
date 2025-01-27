#include "../../JString.hpp"
#include "./MalformedJsonException.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	MalformedJsonException::MalformedJsonException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	MalformedJsonException::MalformedJsonException(JString arg0)
		: java::io::IOException(
			"android.util.MalformedJsonException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::util

