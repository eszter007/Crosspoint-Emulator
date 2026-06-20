#include <algorithm>

#include "Epub/converters/JpegToFramebufferConverter.h"
#include "Epub/converters/PngToFramebufferConverter.h"

bool JpegToFramebufferConverter::getDimensionsStatic(const std::string&, ImageDimensions& out) {
  out.width = 0;
  out.height = 0;
  return false;
}

bool JpegToFramebufferConverter::decodeToFramebuffer(const std::string&, GfxRenderer&, const RenderConfig&) {
  return false;
}

bool JpegToFramebufferConverter::supportsFormat(const std::string& extension) {
  std::string ext = extension;
  std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
  return ext == ".jpg" || ext == ".jpeg";
}

bool PngToFramebufferConverter::getDimensionsStatic(const std::string&, ImageDimensions& out) {
  out.width = 0;
  out.height = 0;
  return false;
}

bool PngToFramebufferConverter::decodeToFramebuffer(const std::string&, GfxRenderer&, const RenderConfig&) {
  return false;
}

bool PngToFramebufferConverter::supportsFormat(const std::string& extension) {
  std::string ext = extension;
  std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
  return ext == ".png";
}
