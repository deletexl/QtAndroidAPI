#pragma once

#include "./PreferenceGroup.hpp"

namespace android::content
{
	class Context;
}
namespace android::preference
{
	class Preference;
}

namespace android::preference
{
	class PreferenceCategory : public android::preference::PreferenceGroup
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PreferenceCategory(const char *className, const char *sig, Ts...agv) : android::preference::PreferenceGroup(className, sig, std::forward<Ts>(agv)...) {}
		PreferenceCategory(QJniObject obj);
		
		// Constructors
		PreferenceCategory(android::content::Context arg0);
		PreferenceCategory(android::content::Context arg0, JObject arg1);
		PreferenceCategory(android::content::Context arg0, JObject arg1, jint arg2);
		PreferenceCategory(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean isEnabled() const;
		jboolean shouldDisableDependents() const;
	};
} // namespace android::preference

