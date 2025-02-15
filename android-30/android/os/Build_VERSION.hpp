#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::os
{
	class Build_VERSION : public JObject
	{
	public:
		// Fields
		static JString BASE_OS();
		static JString CODENAME();
		static JString INCREMENTAL();
		static jint PREVIEW_SDK_INT();
		static JString RELEASE();
		static JString RELEASE_OR_CODENAME();
		static JString SDK();
		static jint SDK_INT();
		static JString SECURITY_PATCH();
		
		// QJniObject forward
		template<typename ...Ts> explicit Build_VERSION(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Build_VERSION(QJniObject obj);
		
		// Constructors
		Build_VERSION();
		
		// Methods
	};
} // namespace android::os

