//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSURL;

@interface NSString (WebBookmarksExtras)
@property(readonly, nonatomic) NSURL *wb_bestURLForUserTypedString;
- (id)wb_stringByRedactingBookmarkDAVServerID;	// IMP=0x00300000000612ea
- (id)_wb_stringByDeletingTrailingSlash;	// IMP=0x0030000000061284
- (id)_wb_stringByStandardizingDAVServerID;	// IMP=0x00300000000611e0
- (_Bool)_webBookmarks_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x00300000000611b0
@end

