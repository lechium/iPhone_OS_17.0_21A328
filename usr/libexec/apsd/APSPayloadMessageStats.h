//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSPayloadMessageStatsCounts, NSMutableDictionary;

@interface APSPayloadMessageStats : NSObject
{
    APSPayloadMessageStatsCounts *_incomingCounts;	// 8 = 0x8
    NSMutableDictionary *_incomingCountsByTopic;	// 16 = 0x10
    APSPayloadMessageStatsCounts *_outgoingCounts;	// 24 = 0x18
    NSMutableDictionary *_outgoingCountsByTopic;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000832dc
@property(retain, nonatomic) NSMutableDictionary *outgoingCountsByTopic; // @synthesize outgoingCountsByTopic=_outgoingCountsByTopic;
@property(retain, nonatomic) APSPayloadMessageStatsCounts *outgoingCounts; // @synthesize outgoingCounts=_outgoingCounts;
@property(retain, nonatomic) NSMutableDictionary *incomingCountsByTopic; // @synthesize incomingCountsByTopic=_incomingCountsByTopic;
@property(retain, nonatomic) APSPayloadMessageStatsCounts *incomingCounts; // @synthesize incomingCounts=_incomingCounts;
- (void)prepareForFullWake;	// IMP=0x0010000000083057
- (void)prepareForDarkWake;	// IMP=0x0010000000082e3e
- (id)outgoingCountsForTopic:(id)arg1;	// IMP=0x0010000000082dc0
- (id)incomingCountsForTopic:(id)arg1;	// IMP=0x0010000000082d42
- (void)payloadMessageSent:(id)arg1;	// IMP=0x0010000000082c9a
- (void)payloadMessageReceived:(id)arg1;	// IMP=0x0010000000082bf2
- (id)init;	// IMP=0x0010000000082b4f

@end
