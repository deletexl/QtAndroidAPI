#include "./InspectionCompanion_UninitializedPropertyMapException.hpp"

namespace android::view::inspector
{
	// Fields
	
	// QAndroidJniObject forward
	InspectionCompanion_UninitializedPropertyMapException::InspectionCompanion_UninitializedPropertyMapException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	InspectionCompanion_UninitializedPropertyMapException::InspectionCompanion_UninitializedPropertyMapException()
		: java::lang::RuntimeException(
			"android.view.inspector.InspectionCompanion$UninitializedPropertyMapException",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::inspector
