#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class RemoveByDocumentIdRequest;
}

namespace android::app::appsearch
{
	class RemoveByDocumentIdRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoveByDocumentIdRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoveByDocumentIdRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		RemoveByDocumentIdRequest_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::RemoveByDocumentIdRequest_Builder addIds(jarray arg0);
		android::app::appsearch::RemoveByDocumentIdRequest_Builder addIds(JObject arg0);
		android::app::appsearch::RemoveByDocumentIdRequest build();
	};
} // namespace android::app::appsearch

