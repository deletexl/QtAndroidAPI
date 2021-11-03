#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchResult;
}

namespace android::app::appsearch
{
	class SetSchemaResponse_MigrationFailure : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SetSchemaResponse_MigrationFailure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaResponse_MigrationFailure(QAndroidJniObject obj);
		
		// Constructors
		SetSchemaResponse_MigrationFailure(jstring arg0, jstring arg1, jstring arg2, android::app::appsearch::AppSearchResult arg3);
		
		// Methods
		android::app::appsearch::AppSearchResult getAppSearchResult();
		jstring getDocumentId();
		jstring getNamespace();
		jstring getSchemaType();
		jstring toString();
	};
} // namespace android::app::appsearch

