#include "../../../JString.hpp"
#include "./PropertyMapper_PropertyConflictException.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QJniObject forward
	PropertyMapper_PropertyConflictException::PropertyMapper_PropertyConflictException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	PropertyMapper_PropertyConflictException::PropertyMapper_PropertyConflictException(JString arg0, JString arg1, JString arg2)
		: java::lang::RuntimeException(
			"android.view.inspector.PropertyMapper$PropertyConflictException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view::inspector

