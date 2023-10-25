//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebBookmark, WebBookmarkCollection;

__attribute__((visibility("hidden")))
@interface BABookmarkItem : NSObject
{
    WebBookmarkCollection *_collection;	// 8 = 0x8
    WebBookmark *_bookmark;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000084cd
@property(retain, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
- (id)description;	// IMP=0x00000000000083c0
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2;	// IMP=0x0000000000008317

@end
