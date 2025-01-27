#pragma once

#include "../../../JObject.hpp"

namespace android::view::displayhash
{
	class DisplayHash;
}
namespace android::view::displayhash
{
	class VerifiedDisplayHash;
}

namespace android::view::displayhash
{
	class DisplayHashManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayHashManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayHashManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getSupportedHashAlgorithms() const;
		android::view::displayhash::VerifiedDisplayHash verifyDisplayHash(android::view::displayhash::DisplayHash arg0) const;
	};
} // namespace android::view::displayhash

