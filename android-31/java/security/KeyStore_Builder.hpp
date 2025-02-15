#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class File;
}
class JString;
namespace java::security
{
	class KeyStore;
}
namespace java::security
{
	class Provider;
}

namespace java::security
{
	class KeyStore_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStore_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_Builder(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::KeyStore_Builder newInstance(java::io::File arg0, JObject arg1);
		static java::security::KeyStore_Builder newInstance(java::security::KeyStore arg0, JObject arg1);
		static java::security::KeyStore_Builder newInstance(JString arg0, java::security::Provider arg1, JObject arg2);
		static java::security::KeyStore_Builder newInstance(JString arg0, java::security::Provider arg1, java::io::File arg2, JObject arg3);
		java::security::KeyStore getKeyStore() const;
		JObject getProtectionParameter(JString arg0) const;
	};
} // namespace java::security

