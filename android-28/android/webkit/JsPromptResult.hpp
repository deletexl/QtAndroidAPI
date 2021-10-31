#pragma once

#include "../../__JniBaseClass.hpp"
#include "./JsResult.hpp"


namespace android::webkit
{
	class JsPromptResult : public android::webkit::JsResult
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JsPromptResult(const char *className, const char *sig, Ts...agv) : android::webkit::JsResult(className, sig, std::forward<Ts>(agv)...) {}
		JsPromptResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void confirm(jstring arg0);
	};
} // namespace android::webkit
