//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PSAppChannelSubscriptionResponse : PBCodable
{
    NSString *_appId;	// 8 = 0x8
    NSMutableArray *_subscriptionChannelResponses;	// 16 = 0x10
    NSMutableArray *_unsubscriptionChannelResponses;	// 24 = 0x18
}

+ (Class)unsubscriptionChannelResponseType;	// IMP=0x002000000007cb30
+ (Class)subscriptionChannelResponseType;	// IMP=0x001000000007ca5e
- (void).cxx_destruct;	// IMP=0x002000000007dce2
@property(retain, nonatomic) NSMutableArray *unsubscriptionChannelResponses; // @synthesize unsubscriptionChannelResponses=_unsubscriptionChannelResponses;
@property(retain, nonatomic) NSMutableArray *subscriptionChannelResponses; // @synthesize subscriptionChannelResponses=_subscriptionChannelResponses;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000007da0b
- (unsigned long long)hash;	// IMP=0x001000000007d99e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007d8be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007d5b1
- (void)copyTo:(id)arg1;	// IMP=0x001000000007d43d
- (void)writeTo:(id)arg1;	// IMP=0x001000000007d20a
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007d1fd
- (id)dictionaryRepresentation;	// IMP=0x001000000007cbf0
- (id)description;	// IMP=0x001000000007cb41
- (id)unsubscriptionChannelResponseAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007cb13
- (unsigned long long)unsubscriptionChannelResponsesCount;	// IMP=0x001000000007caf6
- (void)addUnsubscriptionChannelResponse:(id)arg1;	// IMP=0x001000000007ca8c
- (void)clearUnsubscriptionChannelResponses;	// IMP=0x001000000007ca6f
- (id)subscriptionChannelResponseAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007ca41
- (unsigned long long)subscriptionChannelResponsesCount;	// IMP=0x001000000007ca24
- (void)addSubscriptionChannelResponse:(id)arg1;	// IMP=0x001000000007c9ba
- (void)clearSubscriptionChannelResponses;	// IMP=0x001000000007c99d
@property(readonly, nonatomic) _Bool hasAppId;

@end

