//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QRSELFLoggingUtils : NSObject
{
}

+ (id)convertUUID:(id)arg1;	// IMP=0x0080000000088f48
+ (int)convertRewriteType:(int)arg1;	// IMP=0x0080000000088f2d
+ (int)convertRepetitionType:(int)arg1;	// IMP=0x0080000000088f1c
+ (int)convertMarrsErrorCode:(long long)arg1;	// IMP=0x0080000000088ef9
+ (_Bool)emitRDFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2;	// IMP=0x0080000000088ddd
+ (_Bool)emitCCQRFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2;	// IMP=0x0080000000088cc1
+ (_Bool)emitQueryRewriteFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2 byPredictorType:(int)arg3;	// IMP=0x0080000000088bb1
+ (_Bool)emitRDEvaluatedEventWithResponse:(struct QRResponse)arg1 andNLXMetadata:(id)arg2;	// IMP=0x0080000000088adf
+ (_Bool)emitCCQREvaluatedEventWithResponse:(struct QRResponse)arg1 andNLXMetadata:(id)arg2;	// IMP=0x008000000008890a
+ (_Bool)emitQueryRewriteEvaluatedEventWithResponse:(struct QRResponse)arg1 andNLXMetadata:(id)arg2 byPredictorType:(int)arg3;	// IMP=0x0080000000088765
+ (_Bool)emitRDStartedEventWithMetadata:(id)arg1;	// IMP=0x008000000008865c
+ (_Bool)emitCCQRStartedEventWithMetadata:(id)arg1;	// IMP=0x0080000000088553
+ (_Bool)emitQueryRewriteStartedEventWithMetadata:(id)arg1 byPredictorType:(int)arg2;	// IMP=0x008000000008844d
+ (id)createCCQRContextEvaluatedTier1Event:(struct QRResponse)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x0080000000088244
+ (id)createRDContextEvaluatedEvent:(struct QRResponse)arg1 withNLXMetadata:(id)arg2;	// IMP=0x00800000000880fd
+ (id)createCCQRContextEvaluatedEvent:(struct QRResponse)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x0080000000087ed8
+ (id)createRDContextEventWrapper:(id)arg1 withMetaData:(id)arg2;	// IMP=0x0080000000087e2d
+ (id)createCCQRContextEventWrapper:(id)arg1 withMetaData:(id)arg2;	// IMP=0x0080000000087d82
+ (id)createEventMetadataWithNlId:(id)arg1 andWithTrpId:(id)arg2 andWithResultCandidateId:(id)arg3 andWithRequester:(int)arg4;	// IMP=0x0080000000087c2b
+ (void)emitEvent:(id)arg1;	// IMP=0x008000000008795f

@end

