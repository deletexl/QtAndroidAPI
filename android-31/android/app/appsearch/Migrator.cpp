#include "./GenericDocument.hpp"
#include "./Migrator.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	Migrator::Migrator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Migrator::Migrator()
		: JObject(
			"android.app.appsearch.Migrator",
			"()V"
		) {}
	
	// Methods
	android::app::appsearch::GenericDocument Migrator::onDowngrade(jint arg0, jint arg1, android::app::appsearch::GenericDocument arg2) const
	{
		return callObjectMethod(
			"onDowngrade",
			"(IILandroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/GenericDocument;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::app::appsearch::GenericDocument Migrator::onUpgrade(jint arg0, jint arg1, android::app::appsearch::GenericDocument arg2) const
	{
		return callObjectMethod(
			"onUpgrade",
			"(IILandroid/app/appsearch/GenericDocument;)Landroid/app/appsearch/GenericDocument;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean Migrator::shouldMigrate(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"shouldMigrate",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::app::appsearch

