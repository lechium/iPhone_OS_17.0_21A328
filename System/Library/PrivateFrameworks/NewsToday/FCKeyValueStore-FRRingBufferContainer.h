//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCKeyValueStore.h>

@class NSString;

@interface FCKeyValueStore (FRRingBufferContainer)
- (double)maxForKey:(id)arg1;	// IMP=0x002000000003336d
- (double)minForKey:(id)arg1;	// IMP=0x002000000003325d
- (_Bool)hasMaxForKey:(id)arg1;	// IMP=0x0020000000033239
- (_Bool)hasMinForKey:(id)arg1;	// IMP=0x0020000000033215
- (void)setRingBuffers:(id)arg1;	// IMP=0x002000000003314a
- (id)ringBufferForKey:(id)arg1;	// IMP=0x0020000000033090
- (id)ringBufferForKey:(id)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0020000000032fd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

