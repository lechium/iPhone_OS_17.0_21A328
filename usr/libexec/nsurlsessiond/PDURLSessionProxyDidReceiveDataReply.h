//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveDataReply : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000052fa6
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000052f28
- (unsigned long long)hash;	// IMP=0x0010000000052f0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000052e7b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000052e03
- (void)copyTo:(id)arg1;	// IMP=0x0010000000052dd9
- (void)writeTo:(id)arg1;	// IMP=0x0010000000052db5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000052c0b
- (id)dictionaryRepresentation;	// IMP=0x0010000000052b81
- (id)description;	// IMP=0x0010000000052ad2
@property(readonly, nonatomic) _Bool hasTask;

@end
