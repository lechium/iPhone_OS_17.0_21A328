//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ContextualSpanMatcherSELFLogging : NSObject
{
}

+ (_Bool)emitContextualSpanMatcherEndedEventWithResponse:(id)arg1 WithNlId:(id)arg2 andWithTrpId:(id)arg3 andWithResultCandidateId:(id)arg4 andWithRequester:(int)arg5;	// IMP=0x0080000000057a1a
+ (id)createContextualSpanMatcherEndedTier1Event:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x0080000000057812
+ (id)createContextualSpanMatcherEndedEvent:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;	// IMP=0x00800000000575df
+ (_Bool)emitEvent:(id)arg1;	// IMP=0x00800000000573a7

@end
