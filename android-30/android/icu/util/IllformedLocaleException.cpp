#include "../../../JString.hpp"
#include "./IllformedLocaleException.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	IllformedLocaleException::IllformedLocaleException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IllformedLocaleException::IllformedLocaleException()
		: java::lang::RuntimeException(
			"android.icu.util.IllformedLocaleException",
			"()V"
		) {}
	IllformedLocaleException::IllformedLocaleException(JString arg0)
		: java::lang::RuntimeException(
			"android.icu.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	IllformedLocaleException::IllformedLocaleException(JString arg0, jint arg1)
		: java::lang::RuntimeException(
			"android.icu.util.IllformedLocaleException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	jint IllformedLocaleException::getErrorIndex() const
	{
		return callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
} // namespace android::icu::util

