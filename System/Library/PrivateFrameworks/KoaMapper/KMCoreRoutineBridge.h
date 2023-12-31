//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemMapper, NSString;

__attribute__((visibility("hidden")))
@interface KMCoreRoutineBridge : NSObject
{
    KVItemMapper *_itemMapper;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001324d
- (id)_fetchLocationOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012f4b
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012a0f
- (id)originAppId;	// IMP=0x00000000000129fb
- (long long)itemType;	// IMP=0x00000000000129e5
- (id)init;	// IMP=0x0000000000012892

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

