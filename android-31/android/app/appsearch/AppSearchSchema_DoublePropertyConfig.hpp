#pragma once

#include "./AppSearchSchema_PropertyConfig.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_DoublePropertyConfig : public android::app::appsearch::AppSearchSchema_PropertyConfig
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_DoublePropertyConfig(const char *className, const char *sig, Ts...agv) : android::app::appsearch::AppSearchSchema_PropertyConfig(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_DoublePropertyConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::app::appsearch

