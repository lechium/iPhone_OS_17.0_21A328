//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MRDPlaybackQueueArtworkCache : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000012228f
- (id)debugDescription;	// IMP=0x00100000001221e4
- (void)_pruneCache;	// IMP=0x0010000000122046
- (void)clearArtworkForItems:(id)arg1;	// IMP=0x0010000000121eba
- (id)fittedArtworkForContentItem:(id)arg1 withRequest:(id)arg2;	// IMP=0x0010000000121a39
- (void)addArtworkFromItem:(id)arg1 fromRequest:(id)arg2;	// IMP=0x0010000000121810

@end

