//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLDataProvider, NLNumberGenerator, NSMutableData;

__attribute__((visibility("hidden")))
@interface NLDataEnumerator : NSObject
{
    NLDataProvider *_dataProvider;	// 8 = 0x8
    unsigned long long _idx;	// 16 = 0x10
    NLNumberGenerator *_generator;	// 24 = 0x18
    NSMutableData *_shuffleData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004439f
- (void)shuffle;	// IMP=0x0000000000044290
@property(readonly) unsigned long long index;
@property(readonly, retain) NLDataProvider *dataProvider;
- (void)rewindAndShuffle:(_Bool)arg1;	// IMP=0x0000000000044240
- (void)rewind;	// IMP=0x0000000000044232
- (id)instanceAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000441b4
- (id)nextInstance;	// IMP=0x0000000000044139
- (id)initWithDataProvider:(id)arg1;	// IMP=0x00000000000440d5
- (id)initWithDataProvider:(id)arg1 numberGenerator:(id)arg2;	// IMP=0x0000000000044034

@end

