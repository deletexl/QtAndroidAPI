#include "../../content/Context.hpp"
#include "../../graphics/Rect.hpp"
#include "../../graphics/pdf/PdfDocument_Page.hpp"
#include "../PrintAttributes.hpp"
#include "./PrintedPdfDocument.hpp"

namespace android::print::pdf
{
	// Fields
	
	// QJniObject forward
	PrintedPdfDocument::PrintedPdfDocument(QJniObject obj) : android::graphics::pdf::PdfDocument(obj) {}
	
	// Constructors
	PrintedPdfDocument::PrintedPdfDocument(android::content::Context arg0, android::print::PrintAttributes arg1)
		: android::graphics::pdf::PdfDocument(
			"android.print.pdf.PrintedPdfDocument",
			"(Landroid/content/Context;Landroid/print/PrintAttributes;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::graphics::Rect PrintedPdfDocument::getPageContentRect() const
	{
		return callObjectMethod(
			"getPageContentRect",
			"()Landroid/graphics/Rect;"
		);
	}
	jint PrintedPdfDocument::getPageHeight() const
	{
		return callMethod<jint>(
			"getPageHeight",
			"()I"
		);
	}
	jint PrintedPdfDocument::getPageWidth() const
	{
		return callMethod<jint>(
			"getPageWidth",
			"()I"
		);
	}
	android::graphics::pdf::PdfDocument_Page PrintedPdfDocument::startPage(jint arg0) const
	{
		return callObjectMethod(
			"startPage",
			"(I)Landroid/graphics/pdf/PdfDocument$Page;",
			arg0
		);
	}
} // namespace android::print::pdf

