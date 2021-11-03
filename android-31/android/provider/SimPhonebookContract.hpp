#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class SimPhonebookContract : public JObject
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static android::net::Uri AUTHORITY_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimPhonebookContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SimPhonebookContract(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

