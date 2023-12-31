//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class HMEProtoEventInfo, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoConnectMessage : PBCodable
{
    HMEProtoEventInfo *_connectEvent;	// 8 = 0x8
    unsigned int _routerVersion;	// 16 = 0x10
    NSMutableArray *_topicAdditions;	// 24 = 0x18
    NSMutableArray *_topicFilterAdditions;	// 32 = 0x20
    HMEProtoEventInfo *_unregisterEvent;	// 40 = 0x28
    struct {
        unsigned int routerVersion:1;
    } _has;	// 48 = 0x30
}

+ (Class)topicAdditionsType;	// IMP=0x0010000000844781
+ (Class)topicFilterAdditionsType;	// IMP=0x0010000000844770
- (void).cxx_destruct;	// IMP=0x000000000084441c
@property(retain, nonatomic) NSMutableArray *topicAdditions; // @synthesize topicAdditions=_topicAdditions;
@property(retain, nonatomic) NSMutableArray *topicFilterAdditions; // @synthesize topicFilterAdditions=_topicFilterAdditions;
@property(retain, nonatomic) HMEProtoEventInfo *unregisterEvent; // @synthesize unregisterEvent=_unregisterEvent;
@property(retain, nonatomic) HMEProtoEventInfo *connectEvent; // @synthesize connectEvent=_connectEvent;
@property(nonatomic) unsigned int routerVersion; // @synthesize routerVersion=_routerVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008440a6
- (unsigned long long)hash;	// IMP=0x0000000000843ff5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000843eb3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000843b45
- (void)copyTo:(id)arg1;	// IMP=0x0000000000843991
- (void)writeTo:(id)arg1;	// IMP=0x000000000084371b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000084370e
- (id)dictionaryRepresentation;	// IMP=0x00000000008433c8
- (id)description;	// IMP=0x0000000000843319
- (id)topicAdditionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008432fc
- (unsigned long long)topicAdditionsCount;	// IMP=0x00000000008432df
- (void)addTopicAdditions:(id)arg1;	// IMP=0x0000000000843275
- (void)clearTopicAdditions;	// IMP=0x0000000000843258
- (id)topicFilterAdditionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000084323b
- (unsigned long long)topicFilterAdditionsCount;	// IMP=0x000000000084321e
- (void)addTopicFilterAdditions:(id)arg1;	// IMP=0x00000000008431b4
- (void)clearTopicFilterAdditions;	// IMP=0x0000000000843197
@property(readonly, nonatomic) _Bool hasUnregisterEvent;
@property(readonly, nonatomic) _Bool hasConnectEvent;
@property(nonatomic) _Bool hasRouterVersion;

@end

