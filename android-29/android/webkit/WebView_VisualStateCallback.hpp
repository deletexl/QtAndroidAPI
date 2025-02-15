#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class WebView_VisualStateCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebView_VisualStateCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebView_VisualStateCallback(QJniObject obj);
		
		// Constructors
		WebView_VisualStateCallback();
		
		// Methods
		void onComplete(jlong arg0) const;
	};
} // namespace android::webkit

