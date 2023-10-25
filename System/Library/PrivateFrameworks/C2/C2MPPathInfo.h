//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPPathInfo : PBCodable
{
    unsigned long long _applicationBytesReceived;	// 8 = 0x8
    unsigned long long _applicationBytesSent;	// 16 = 0x10
    NSString *_interfaceType;	// 24 = 0x18
    NSString *_radioType;	// 32 = 0x20
    struct {
        unsigned int applicationBytesReceived:1;
        unsigned int applicationBytesSent:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000007e93
@property(nonatomic) unsigned long long applicationBytesReceived; // @synthesize applicationBytesReceived=_applicationBytesReceived;
@property(nonatomic) unsigned long long applicationBytesSent; // @synthesize applicationBytesSent=_applicationBytesSent;
@property(retain, nonatomic) NSString *radioType; // @synthesize radioType=_radioType;
@property(retain, nonatomic) NSString *interfaceType; // @synthesize interfaceType=_interfaceType;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000007d85
- (unsigned long long)hash;	// IMP=0x0000000000007ceb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007be2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007b05
- (void)copyTo:(id)arg1;	// IMP=0x0000000000007a63
- (void)writeTo:(id)arg1;	// IMP=0x00000000000079b6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000079a9
- (id)dictionaryRepresentation;	// IMP=0x00000000000075ba
- (id)description;	// IMP=0x000000000000750b
@property(nonatomic) _Bool hasApplicationBytesReceived;
@property(nonatomic) _Bool hasApplicationBytesSent;
@property(readonly, nonatomic) _Bool hasRadioType;
@property(readonly, nonatomic) _Bool hasInterfaceType;

@end
