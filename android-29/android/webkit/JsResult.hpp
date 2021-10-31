#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class JsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JsResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JsResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		void confirm();
	};
} // namespace android::webkit

