#include "../../../JString.hpp"
#include "./PropertyReader_PropertyTypeMismatchException.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QJniObject forward
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(jint arg0, JString arg1, JString arg2)
		: java::lang::RuntimeException(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(jint arg0, JString arg1, JString arg2, JString arg3)
		: java::lang::RuntimeException(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view::inspector

