//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveData : PBCodable
{
    NSData *_receivedData;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000042751
@property(retain, nonatomic) NSData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004268e
- (unsigned long long)hash;	// IMP=0x0010000000042641
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000042589
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000424eb
- (void)copyTo:(id)arg1;	// IMP=0x0010000000042488
- (void)writeTo:(id)arg1;	// IMP=0x001000000004242b
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004225d
- (id)dictionaryRepresentation;	// IMP=0x00100000000421ad
- (id)description;	// IMP=0x00100000000420fe
@property(readonly, nonatomic) _Bool hasReceivedData;
@property(readonly, nonatomic) _Bool hasTask;

@end
