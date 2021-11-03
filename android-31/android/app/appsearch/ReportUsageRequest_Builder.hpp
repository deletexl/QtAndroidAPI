#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class ReportUsageRequest;
}

namespace android::app::appsearch
{
	class ReportUsageRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReportUsageRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportUsageRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		ReportUsageRequest_Builder(jstring arg0, jstring arg1);
		
		// Methods
		android::app::appsearch::ReportUsageRequest build();
		android::app::appsearch::ReportUsageRequest_Builder setUsageTimestampMillis(jlong arg0);
	};
} // namespace android::app::appsearch

