//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyGetAuthHeaders : PBCodable
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000019bd2
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000019af9
- (unsigned long long)hash;	// IMP=0x0010000000019aac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000199f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000019956
- (void)copyTo:(id)arg1;	// IMP=0x00100000000198f3
- (void)writeTo:(id)arg1;	// IMP=0x0010000000019896
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000196ab
- (id)dictionaryRepresentation;	// IMP=0x00100000000195d6
- (id)description;	// IMP=0x0010000000019527
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end

