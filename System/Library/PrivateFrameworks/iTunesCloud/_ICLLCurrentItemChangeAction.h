//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLCurrentItemChangeAction : PBCodable
{
    NSString *_itemId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d0dc6
- (unsigned long long)hash;	// IMP=0x00000000000d0da9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d0d19
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d0ca1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d0c7d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d0c70
- (id)dictionaryRepresentation;	// IMP=0x00000000000d0c14
- (id)description;	// IMP=0x00000000000d0b65

@end

