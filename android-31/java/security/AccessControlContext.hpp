#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JObject;
namespace java::security
{
	class Permission;
}
namespace java::security
{
	class ProtectionDomain;
}

namespace java::security
{
	class AccessControlContext : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessControlContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessControlContext(QJniObject obj);
		
		// Constructors
		AccessControlContext(JArray arg0);
		AccessControlContext(java::security::AccessControlContext &arg0, JObject arg1);
		
		// Methods
		void checkPermission(java::security::Permission arg0) const;
		jboolean equals(JObject arg0) const;
		JObject getDomainCombiner() const;
		jint hashCode() const;
	};
} // namespace java::security

