#pragma once

#include "./Dialog.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Resources;
}
namespace android::view
{
	class Display;
}

namespace android::app
{
	class Presentation : public android::app::Dialog
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Presentation(const char *className, const char *sig, Ts...agv) : android::app::Dialog(className, sig, std::forward<Ts>(agv)...) {}
		Presentation(QJniObject obj);
		
		// Constructors
		Presentation(android::content::Context arg0, android::view::Display arg1);
		Presentation(android::content::Context arg0, android::view::Display arg1, jint arg2);
		
		// Methods
		android::view::Display getDisplay() const;
		android::content::res::Resources getResources() const;
		void onDisplayChanged() const;
		void onDisplayRemoved() const;
		void show() const;
	};
} // namespace android::app

