//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface _ADPBDeviceExecuteOnRemoteRequest : PBRequest
{
    NSString *_assistantId;	// 8 = 0x8
    NSData *_content;	// 16 = 0x10
    NSString *_sourceAirplayId;	// 24 = 0x18
    NSString *_sourceIDSFirstRoutableDestination;	// 32 = 0x20
}

+ (unsigned short)_ADPBDeviceRequestType;	// IMP=0x00200000000adb76
- (void).cxx_destruct;	// IMP=0x002000000010e553
@property(retain, nonatomic) NSString *sourceAirplayId; // @synthesize sourceAirplayId=_sourceAirplayId;
@property(retain, nonatomic) NSString *assistantId; // @synthesize assistantId=_assistantId;
@property(retain, nonatomic) NSString *sourceIDSFirstRoutableDestination; // @synthesize sourceIDSFirstRoutableDestination=_sourceIDSFirstRoutableDestination;
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000010e41c
- (unsigned long long)hash;	// IMP=0x001000000010e398
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000010e28c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000010e1a2
- (void)copyTo:(id)arg1;	// IMP=0x001000000010e0ff
- (void)writeTo:(id)arg1;	// IMP=0x001000000010e068
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000010dea4
- (id)dictionaryRepresentation;	// IMP=0x001000000010ddd3
- (id)description;	// IMP=0x001000000010dd24
@property(readonly, nonatomic) _Bool hasSourceAirplayId;
@property(readonly, nonatomic) _Bool hasAssistantId;
@property(readonly, nonatomic) _Bool hasSourceIDSFirstRoutableDestination;
@property(readonly, nonatomic) _Bool hasContent;
- (void)_ad_performWithSharedDataRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cd890
- (void)_ad_performWithCloudService:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000014ca50

@end

