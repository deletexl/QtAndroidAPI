#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::webkit
{
	class WebSettings_ZoomDensity : public java::lang::Enum
	{
	public:
		// Fields
		static android::webkit::WebSettings_ZoomDensity CLOSE();
		static android::webkit::WebSettings_ZoomDensity FAR();
		static android::webkit::WebSettings_ZoomDensity MEDIUM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebSettings_ZoomDensity(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_ZoomDensity(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::webkit::WebSettings_ZoomDensity valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit
