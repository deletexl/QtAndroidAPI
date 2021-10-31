#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class AttributionSource;
}

namespace android::content
{
	class AttributionSource_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AttributionSource_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AttributionSource_Builder(QAndroidJniObject obj);
		
		// Constructors
		AttributionSource_Builder(jint arg0);
		
		// Methods
		android::content::AttributionSource build();
		android::content::AttributionSource_Builder setAttributionTag(jstring arg0);
		android::content::AttributionSource_Builder setNext(android::content::AttributionSource arg0);
		android::content::AttributionSource_Builder setPackageName(jstring arg0);
	};
} // namespace android::content

