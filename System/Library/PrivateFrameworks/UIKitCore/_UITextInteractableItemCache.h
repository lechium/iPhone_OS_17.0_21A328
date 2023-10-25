//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UITextInteractableItemCache : NSObject
{
    NSMutableSet *_attachmentItems;	// 8 = 0x8
    NSMutableSet *_linkItems;	// 16 = 0x10
    NSMutableSet *_tagItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000fca878
@property(retain, nonatomic) NSMutableSet *tagItems; // @synthesize tagItems=_tagItems;
@property(retain, nonatomic) NSMutableSet *linkItems; // @synthesize linkItems=_linkItems;
@property(retain, nonatomic) NSMutableSet *attachmentItems; // @synthesize attachmentItems=_attachmentItems;
- (id)_cachedItemInSet:(id)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x0000000000fca746
- (void)invalidate;	// IMP=0x0000000000fca701
- (void)removeItem:(id)arg1;	// IMP=0x0000000000fca578
- (void)addItem:(id)arg1;	// IMP=0x0000000000fca3ef
- (id)itemForTag:(id)arg1 range:(id)arg2;	// IMP=0x0000000000fca19e
- (id)itemForLink:(id)arg1 range:(id)arg2;	// IMP=0x0000000000fc9f4d
- (id)itemForAttachment:(id)arg1 range:(id)arg2;	// IMP=0x0000000000fc9cfc
- (id)init;	// IMP=0x0000000000fc9c70

@end
