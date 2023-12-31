//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIEditorialLinkLayout : NSObject
{
    struct CGSize *_sizes;	// 8 = 0x8
    struct CGSize _totalSize;	// 16 = 0x10
    NSArray *_links;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ab3e7
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) struct CGSize totalSize; // @synthesize totalSize=_totalSize;
- (struct CGSize)sizeForLinkAtIndex:(long long)arg1;	// IMP=0x00000000000ab361
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ab20f
- (void)dealloc;	// IMP=0x00000000000ab1d0
- (id)initWithLayoutRequest:(id)arg1;	// IMP=0x00000000000aada5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

