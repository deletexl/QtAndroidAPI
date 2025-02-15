#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class SimPhonebookContract : public JObject
	{
	public:
		// Fields
		static JString AUTHORITY();
		static android::net::Uri AUTHORITY_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit SimPhonebookContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SimPhonebookContract(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

