// SPDX-License-Identifier: GPLv3-or-later WITH Appstore-exception
// Copyright (C) 2020 Jesse Chappell


#pragma once

void getSafeAreaInsets(void * component, float & top, float & bottom, float & left, float & right);


#if JUCE_MAC

void disableAppNap();

// show or hide the Dock icon (and app menu bar) at runtime, used for menu bar mode
void setMacDockIconVisible(bool visible);

// make this app the active one, so its windows get keyboard focus
void activateMacApp();

#endif

#if JUCE_IOS
bool urlBookmarkToBinaryData(void * bookmark, const void * & retdata, size_t & retsize);

void *binaryDataToUrlBookmark(const void * data, size_t size);

juce::URL generateUpdatedURL (juce::URL& urlToUse);

#endif
