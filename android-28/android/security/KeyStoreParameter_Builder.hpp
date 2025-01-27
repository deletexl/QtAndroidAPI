#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::security
{
	class KeyStoreParameter;
}

namespace android::security
{
	class KeyStoreParameter_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStoreParameter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreParameter_Builder(QJniObject obj);
		
		// Constructors
		KeyStoreParameter_Builder(android::content::Context arg0);
		
		// Methods
		android::security::KeyStoreParameter build() const;
		android::security::KeyStoreParameter_Builder setEncryptionRequired(jboolean arg0) const;
	};
} // namespace android::security

