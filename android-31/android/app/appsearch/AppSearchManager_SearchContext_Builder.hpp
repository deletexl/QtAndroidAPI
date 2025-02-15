#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchManager_SearchContext;
}
class JString;

namespace android::app::appsearch
{
	class AppSearchManager_SearchContext_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchManager_SearchContext_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchManager_SearchContext_Builder(QJniObject obj);
		
		// Constructors
		AppSearchManager_SearchContext_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::AppSearchManager_SearchContext build() const;
	};
} // namespace android::app::appsearch

