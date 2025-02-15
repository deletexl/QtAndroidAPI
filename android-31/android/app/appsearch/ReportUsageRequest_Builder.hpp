#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class ReportUsageRequest;
}
class JString;

namespace android::app::appsearch
{
	class ReportUsageRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReportUsageRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportUsageRequest_Builder(QJniObject obj);
		
		// Constructors
		ReportUsageRequest_Builder(JString arg0, JString arg1);
		
		// Methods
		android::app::appsearch::ReportUsageRequest build() const;
		android::app::appsearch::ReportUsageRequest_Builder setUsageTimestampMillis(jlong arg0) const;
	};
} // namespace android::app::appsearch

