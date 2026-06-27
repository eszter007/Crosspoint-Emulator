#include <JsonSettingsIO.h>

namespace JsonSettingsIO {

bool saveSettings(const CrossPointSettings&, const char*) { return true; }
bool loadSettings(CrossPointSettings&, const char*, bool*) { return false; }

bool saveState(const CrossPointState&, const char*) { return true; }
bool loadState(CrossPointState&, const char*) { return false; }

bool saveWifi(const WifiCredentialStore&, const char*) { return true; }
bool loadWifi(WifiCredentialStore&, const char*, bool*) { return false; }

bool saveRecentBooks(const RecentBooksStore&, const char*) { return true; }
bool loadRecentBooks(RecentBooksStore&, const char*) { return false; }

bool saveOpds(const OpdsServerStore&, const char*) { return true; }
bool loadOpds(OpdsServerStore&, const char*, bool*) { return false; }

bool saveBookmarks(const std::vector<BookmarkEntry>&, const char*) { return true; }
bool loadBookmarks(std::vector<BookmarkEntry>&, const char*) { return false; }

}  // namespace JsonSettingsIO
