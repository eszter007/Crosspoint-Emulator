#include "JpegToBmpConverter.h"

bool JpegToBmpConverter::jpegFileToBmpStream(HalFile&, Print&, bool) { return false; }

bool JpegToBmpConverter::jpegFileToBmpStreamWithSize(HalFile&, Print&, int, int) { return false; }

bool JpegToBmpConverter::jpegFileTo1BitBmpStreamWithSize(HalFile&, Print&, int, int) { return false; }

bool JpegToBmpConverter::jpegFileToBmpStreamInternal(HalFile&, Print&, int, int, bool, bool) { return false; }
