//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySuspendTask : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000534a2
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000053424
- (unsigned long long)hash;	// IMP=0x0010000000053407
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000053377
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000532ff
- (void)copyTo:(id)arg1;	// IMP=0x00100000000532d5
- (void)writeTo:(id)arg1;	// IMP=0x00100000000532b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000053107
- (id)dictionaryRepresentation;	// IMP=0x001000000005307d
- (id)description;	// IMP=0x0010000000052fce
@property(readonly, nonatomic) _Bool hasTask;

@end

