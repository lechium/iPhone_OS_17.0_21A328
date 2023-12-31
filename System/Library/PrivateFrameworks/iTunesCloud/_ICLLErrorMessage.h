//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLErrorMessage : PBCodable
{
    int _code;	// 8 = 0x8
    int _contentTypeCode;	// 12 = 0xc
    NSString *_message;	// 16 = 0x10
    struct {
        unsigned int code:1;
        unsigned int contentTypeCode:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000187f62
- (unsigned long long)hash;	// IMP=0x0000000000187ef2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000187e17
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000187d62
- (void)writeTo:(id)arg1;	// IMP=0x0000000000187cd2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000187cc5
- (id)dictionaryRepresentation;	// IMP=0x0000000000187ba5
- (id)description;	// IMP=0x0000000000187af6

@end

