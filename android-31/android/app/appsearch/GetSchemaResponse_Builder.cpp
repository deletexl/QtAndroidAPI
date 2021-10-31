#include "./AppSearchSchema.hpp"
#include "./GetSchemaResponse.hpp"
#include "./GetSchemaResponse_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	GetSchemaResponse_Builder::GetSchemaResponse_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GetSchemaResponse_Builder::GetSchemaResponse_Builder()
		: __JniBaseClass(
			"android.app.appsearch.GetSchemaResponse$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::appsearch::GetSchemaResponse_Builder GetSchemaResponse_Builder::addSchema(android::app::appsearch::AppSearchSchema arg0)
	{
		return callObjectMethod(
			"addSchema",
			"(Landroid/app/appsearch/AppSearchSchema;)Landroid/app/appsearch/GetSchemaResponse$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::GetSchemaResponse GetSchemaResponse_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/GetSchemaResponse;"
		);
	}
	android::app::appsearch::GetSchemaResponse_Builder GetSchemaResponse_Builder::setVersion(jint arg0)
	{
		return callObjectMethod(
			"setVersion",
			"(I)Landroid/app/appsearch/GetSchemaResponse$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch
