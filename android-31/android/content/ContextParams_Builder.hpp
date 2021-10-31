#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class AttributionSource;
}
namespace android::content
{
	class ContextParams;
}

namespace android::content
{
	class ContextParams_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContextParams_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContextParams_Builder(QAndroidJniObject obj);
		
		// Constructors
		ContextParams_Builder();
		ContextParams_Builder(android::content::ContextParams arg0);
		
		// Methods
		android::content::ContextParams build();
		android::content::ContextParams_Builder setAttributionTag(jstring arg0);
		android::content::ContextParams_Builder setNextAttributionSource(android::content::AttributionSource arg0);
	};
} // namespace android::content
