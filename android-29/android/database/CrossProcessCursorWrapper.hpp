#pragma once

#include "./CursorWrapper.hpp"

namespace android::database
{
	class CursorWindow;
}

namespace android::database
{
	class CrossProcessCursorWrapper : public android::database::CursorWrapper
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CrossProcessCursorWrapper(const char *className, const char *sig, Ts...agv) : android::database::CursorWrapper(className, sig, std::forward<Ts>(agv)...) {}
		CrossProcessCursorWrapper(QJniObject obj);
		
		// Constructors
		CrossProcessCursorWrapper(JObject arg0);
		
		// Methods
		void fillWindow(jint arg0, android::database::CursorWindow arg1) const;
		android::database::CursorWindow getWindow() const;
		jboolean onMove(jint arg0, jint arg1) const;
	};
} // namespace android::database

