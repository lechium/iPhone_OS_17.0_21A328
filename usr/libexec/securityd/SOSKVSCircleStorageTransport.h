//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface SOSKVSCircleStorageTransport
{
    NSMutableDictionary *pending_changes;	// 16 = 0x10
    NSString *circleName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000256cc7
@property(retain, nonatomic) NSString *circleName; // @synthesize circleName;
@property(retain, nonatomic) NSMutableDictionary *pending_changes; // @synthesize pending_changes;
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000256bdf
- (_Bool)kvsSendOfficialDSID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000256b80
- (_Bool)kvsRingFlushChanges:(struct __CFError **)arg1;	// IMP=0x0010000000256b6e
- (_Bool)kvsRingPostRing:(struct __CFString *)arg1 ring:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000256b20
- (_Bool)kvsSendAccountChangedWithDSID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000256a9a
- (_Bool)kvssendDebugInfo:(struct __CFString *)arg1 debug:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000256a02
- (_Bool)kvsAppendDebugKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00100000002569ca
- (_Bool)kvsAppendRingKeyInterest:(struct __CFArray *)arg1 firstUnlock:(struct __CFArray *)arg2 unlocked:(struct __CFArray *)arg3 err:(struct __CFError **)arg4;	// IMP=0x0010000000256843
- (_Bool);	// IMP=0x00100000002566c2
- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0010000000256642
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000002563d3
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000256385
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x0010000000256373
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000002562d6
- (void)kvsAddToPendingChanges:(struct __CFString *)arg1 data:(struct __CFData *)arg2;	// IMP=0x00100000002561ce
- (_Bool)kvsSendPendingChanges:(struct __CFError **)arg1;	// IMP=0x0010000000256096
- (long long)getTransportType;	// IMP=0x001000000025608b
- (id)getCircleName;	// IMP=0x0010000000256079
- (id)initWithAccount:(id)arg1 andCircleName:(id)arg2;	// IMP=0x0010000000255f67
- (id)init;	// IMP=0x0010000000255f38

@end

