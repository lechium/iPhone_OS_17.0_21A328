//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface FCCKPResponseOperationResultErrorExtension : PBCodable
{
    NSString *_extensionName;	// 8 = 0x8
    NSData *_extensionPayload;	// 16 = 0x10
    unsigned int _typeCode;	// 24 = 0x18
    struct {
        unsigned int typeCode:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000094f94
- (unsigned long long)hash;	// IMP=0x0000000000094f1f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000094e3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000094d79
- (void)writeTo:(id)arg1;	// IMP=0x0000000000094cf6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000094ce9
- (id)dictionaryRepresentation;	// IMP=0x0000000000094a04
- (id)description;	// IMP=0x0000000000094955

@end
