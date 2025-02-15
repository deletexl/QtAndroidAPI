#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::app::appsearch
{
	class PutDocumentsRequest;
}

namespace android::app::appsearch
{
	class PutDocumentsRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PutDocumentsRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PutDocumentsRequest_Builder(QJniObject obj);
		
		// Constructors
		PutDocumentsRequest_Builder();
		
		// Methods
		android::app::appsearch::PutDocumentsRequest_Builder addGenericDocuments(JArray arg0) const;
		android::app::appsearch::PutDocumentsRequest_Builder addGenericDocuments(JObject arg0) const;
		android::app::appsearch::PutDocumentsRequest build() const;
	};
} // namespace android::app::appsearch

