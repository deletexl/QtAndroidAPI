#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::backup
{
	class RestoreObserver : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RestoreObserver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RestoreObserver(QJniObject obj);
		
		// Constructors
		RestoreObserver();
		
		// Methods
		void onUpdate(jint arg0, JString arg1) const;
		void restoreFinished(jint arg0) const;
		void restoreStarting(jint arg0) const;
	};
} // namespace android::app::backup

