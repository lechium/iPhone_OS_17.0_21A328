//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WBInMemoryChangeFilterVisible : NSObject
{
}

- (_Bool)shouldIncludeBookmarkAddedInMemory:(id)arg1;	// IMP=0x00000000000a6318
- (id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2;	// IMP=0x00000000000a61fd
- (id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2;	// IMP=0x00000000000a60e2
- (_Bool)isBookmarkVisible:(id)arg1;	// IMP=0x00000000000a603b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

